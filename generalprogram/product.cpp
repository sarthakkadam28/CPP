
#include <iostream>
#include <string>

using namespace std; // namespace (module)


//blueprint
class Product{

    //data hiding (encapsulation)
    //access specifiers : public, private, protected
    private:
        string title;
        string description;
        float price;
        int quantity;

    public:
        //Member functions
        //1. Constructor
        //2. Destructor
        //3. Copy Constructor
        //4. getters and setters
};

// memory for application process
// 1. Stack memory
// 2. Heap memory

int main(){
    cout<<"Hello World"<<endl;
     
        //Object are created on stack memory
        Product p1,p2,p3;

        cout<<"Size of Product1: "<<sizeof(p1)<<endl;
        cout<<"Size of Product2: "<<sizeof(p2)<<endl;
        cout<<"Size of Product3: "<<sizeof(p3)<<endl;
  
        //Object are created on heap memory
        
        Product *p4 = new Product();  //object created on heap memory
        Product *p5 = new Product();  //object created on heap memory
        Product *p6 = new Product();  //object created on heap memory

        if(p4 != NULL){
                delete p4;
        }
        else{
            cout<<"Memory is not allocated"<<endl;
        }

        delete p5;
        delete p6;
    
    return 0;
}