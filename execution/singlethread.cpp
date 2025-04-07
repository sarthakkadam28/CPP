 #include<iostream>
 using namespace std;

 void accept_input(){
    string message;
    cin>>message;
}
void display_output(){
    cout<< "Thank you for learning at Transflower"<<endl;
}
void print_hey(){
     cout << "Print execution" <<endl;
}
int main(){
    cout<<"main execution"<<endl;
    print_hey();
    accept_input();
    display_output();
    return 0;
}