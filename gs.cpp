#include<iostream>
using namespace std;
class employee{
    public:
    string name;
    string department;
    void set_salary(int s){
        salary=s;
    }
    int get_salary(){
        cout<<salary<<endl;
    }
    private:
    int salary;
    
};
int main()
{
    employee em1;
    em1.set_salary(25300);
    em1.get_salary();

    return 0;
}