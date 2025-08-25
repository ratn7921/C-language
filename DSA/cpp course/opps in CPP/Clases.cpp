#include<iostream>
using namespace std;
 class obj{
    public:
    void look(int q, int b){
        cout<<q+b;
    }
 };


int main(){
    obj z;
    z.look(1,2);
 int a;
 cout<<"enter value of: ";
    cin>>a;
    return 0;
}