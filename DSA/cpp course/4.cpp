#include<iostream>
using namespace std;
int main(){
int income;
cout<<"entrt the income :"<<endl;
cin>>income;
if (income>700000){
    int tax=income/20;

    cout<<"your taxebal amount is :"<<tax<<endl;
    income-=tax;
    cout<<"when reducing tax in your income are :"<<income<<endl;

}else{
cout<<"your income not taxable income ";
}



    return 0;
}
