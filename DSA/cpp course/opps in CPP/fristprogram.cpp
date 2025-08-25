#include<iostream>
#include<string.h>
using namespace std;
class emplyee
{

public:
string emp_name;
int emp_id;
int emp_salary;
long phone_nummber;

string Workmode;
void employee_info(){
    if (Workmode == "remote")
    {
Workmode="home";
    }else if(Workmode == "on site" )
    {
        Workmode="office";

    }else{
        Workmode ="hybrid";

    }
    cout<<"employee name is "<<emp_name<<"and this person employee ID is"<<emp_id<<endl;
    cout<<"This person earns "<<emp_salary<<endl<<"rupee a month and this person is working from  "<<Workmode;

}

};


int main(){
string Workmode[]={"on site","hybrid","remote"};
string company="sai";
emplyee emp1;
emp1.emp_name="  mark  ";
emp1.emp_id=123456;
emp1.emp_salary=100000;

emp1.Workmode=Workmode[2];
emp1.phone_nummber=9518904616;
emp1.employee_info();



    return 0;
}