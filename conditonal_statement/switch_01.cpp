 #include<iostream>
 using namespace std;
 int main(){
     int day;
     cout<<"enter the day no"<<endl;
     cin>>day;
     switch (day)
     {
     case 1:
        cout<<"monday"<<endl;
        break;
        case 2:
        cout<<"tuesday"<<endl;
        break;
        case 3:
        cout<<"wenesday"<<endl;
        break;
        case 4:
        cout<<"thursday"<<endl;
        break;
        case 5:
        cout<<"frienday"<<endl;
        break;
     
     default:
       cout<<"invalid day"<<endl;
        break;
     }
   return 0;         
 }