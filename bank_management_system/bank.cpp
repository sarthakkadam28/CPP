#include <iostream>
using namespace std;

class employee
{
protected:
    string name;
    double basicsalary;
    int workingdays;
    double dailyallowance;
    
    public:
    employee(string name, double basicsalary, int workingdays, double dailyallowance)
	{
		this->name=name;
		
	}
    
         virtual double computepay()
        {
            cout << "\n employee computepay\n";
            double package = basicsalary + workingdays * dailyallowance;
            return package;
        }
        
        void display(int n1)
        {
        	cout<<"welcome";
		}
		
		void display(int num,int numb2)
		{
			cout<<"number: "<<num;
		}
    };
    
    class manager : public employee
    {
    private:
        double bonus;

    public:
        manager(string name, double basicsalary, int workingdays, double dailyallowance, double bonus) : employee(name, basicsalary, workingdays, dailyallowance)
        {
            this->bonus = bonus;
        }
        double computepay() override
        {
            cout << "\n manger computepay";
            double package = basicsalary + (workingdays * dailyallowance + bonus);
            return package;
        }
    };

int main()
{
    employee *e1 = new employee("Raj", 1000, 30, 100);
    double result = e1->computepay();
    e1->display(10);
    e1->display(10,20);
    cout << "\n Employee salary: " << result;

    manager *m1 = new manager("shubham", 25000, 30, 1000, 3000);
    double mgrresult = m1->computepay();
    cout << "\n Manager salary: " << mgrresult;

    employee *pemployee = new manager("nikhil", 30000, 25, 1500, 5000);
    double presult = pemployee->computepay();
    cout << "\n Manager salary: " << presult;
    
    
    
    
    manager m2=new manager("sanika",1000,12,230,2400);
    double package=m2.computepay();
    cout<<package;
}
