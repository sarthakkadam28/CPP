 #include<iostream>
 #include<chrono>
 #include<thread>
 #include<future>
  using namespace std;
  void producer(promise<int>& p){
       this_thread::sleep_for(chrono::seconds(3));
       p.set_value(10);
       cout<<"producer is done"<<endl;
  }
  void consumer(future<int>p){
    cout <<"consumer is done"<<endl;
    int result=p.get();
    cout <<result<<endl;

  }
  int main(){
        cout<<"main thread is started"<<endl;
        promise<int>p;
        future<int>f=p.get_future();
        thread thproducer(producer,ref(p));
        thread thconsumer(consumer,move(f));
        thproducer.join();
        thconsumer.join();
        cout<<"main thread is done"<<endl;

  }