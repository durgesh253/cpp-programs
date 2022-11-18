#include<iostream>
using namespace std;
class calculator{
   private:
   int a,b;
   public:
   calculator(){
      cout<<"enter number a:";
      cin>>a;
      cout<<"enter number b:";
      cin>>b;
   }
   void calculate(){
    cout<<"addition:"<<a+b<<endl;
    cout<<"substraction:"<<a-b<<endl;
    cout<<"multipictaion:"<<a*b<<endl;
    cout<<"division:"<<a/b<<endl;
   }
};
int main(){
    calculator c;
    c.calculate();

}