 #include<iostream>
 #include<thread>
 #include<chrono>
 using namespace std;
   void print_write(){
        while(true)
        {
            cout<<"write anything "<<endl;
            this_thread::sleep_for(chrono::seconds(4));
        }
        
   } <<"write anything "<<endl;
   this_thread::sleep_for(chrono::seconds(4));
   void print_display(){
    while(true){
    cout<<"display anything"<<endl;
    this_thread::sleep_for(chrono::seconds(5));
    }

   }
   int main(){
    thread t1(print_write);
    thread t2(print_display);
    t1.join();
    t2.join();
    return 0;

   }