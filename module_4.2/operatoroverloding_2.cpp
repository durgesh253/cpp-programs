#include<iostream>
#include<string.h>
using namespace std;
class A{
    private:
    char a[10];
    public:
    void accept_val(){
        cout<<"enter the string:";
        cin>>a;
    }
    void display(){
        cout<<"string before  concatenate:"<<a<<endl;

    }
    void operator+(A p){
        strcat(a,p.a);
        cout<<"===after concatenaate==="<<endl<<a<<endl;

    }
    
};
int main(){
 A obj1;
A obj2;
obj1.accept_val();
obj2.accept_val();
obj1.display();
obj2.display();

obj1+obj2;
}