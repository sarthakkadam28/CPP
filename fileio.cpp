 #include<iostream>
 #include<string>
 #include<fstream>
  
 using namespace std;
void WriteToScreen(){
    cout<<"welcoame to the file io"<<endl;
    cout<<"transflower learning private limited"<<endl;

}
void WriteToFile(string filename){
    ofstream stream("tfl.txt");
    stream<<"Welcome to File IO"<<endl;
    stream<<"Transflower learning experience"<<endl;
    stream.close();
}
void ReadFromFile(string filename){
    string firstMessage;
    //if : input file
    ifstream stream(filename);
    do{
        stream>>firstMessage;
        cout<<firstMessage<<" ";
    }
    while( !stream.eof());
    stream.close();
}

int main(){
    WriteToScreen();
    WriteToFile("tfl.txt"); 
    ReadFromFile("tfl.txt");
}

