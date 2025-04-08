 #include<iostream>
 #include<thread>
 #include<string>
 #include<future>
 using namespace std;
 string choose(){
    this_thread::sleep_for(chrono::seconds(2));
    cout<<"choose any option "<<endl;
    return"your option is selected";
 }
 string sort(){
    this_thread::sleep_for(chrono::seconds(5));
    cout<<"all sorted data"<<endl;
    return "your sorted data";
 }
  int addToCart(){
    this_thread::sleep_for(chrono::seconds(7));
    cout<<"your cart is ready "<<endl;
    return 34;
 }
 string removeFromCart(){
    this_thread::sleep_for(chrono::seconds(8));
    cout<<"your cart is going to be removed"<<endl;
    return "your cart is removed";
 }
 void placeOrder(){
    this_thread::sleep_for(chrono::seconds(10));
    cout<<"your order is placed"<<endl;
 }
 void payment(){
   this_thread::sleep_for(chrono::seconds(5));
   cout<<"payment is done"<<endl;
 }
 int main(){
    cout<<"primary thread is executing "<<endl;
    std::future<string>result =std::async(std::launch::async,choose);
    string actualProduct=result.get();
    std::cout<<actualProduct<<endl;
    std::future<string >result1=std::async(std::launch::async,sort);
    string product=result1.get();
    std::cout<<product<<endl;
    std::future<int>result2=std::async(std::launch::async,addToCart);
    int sortproduct=result2.get();
    std::cout << "Cart contains " << sortproduct << " items" << endl;
    std::future<string>result3=std::async(std::launch::async,removeFromCart);
    string cart=result3.get();
    std::cout<<cart<<endl;
    return 0;
 }