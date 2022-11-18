#include<iostream>
using namespace std;
#define n 3
class A{
private:
int a[10];
public:
void acc_val(){
    for (int i = 0; i < n; i++)
    {
        cout<<"enter val:";
        cin>>a[i];
    }
}
void display(){
    for ( int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }
  cout<<"\n";    
}
int operator+(A p){
    int res[10];
    for (int i = 0; i < n; i++)
    {
        res[i]=a[i]+p.a[i];
    }
    for (int  i = 0; i < n; i++)
    {
        cout<<res[i]<<"\t";
    }
    

}


    };
    int main(){
    A obj1;
    A obj2;

    obj1.acc_val();
    obj2.acc_val();
    obj1.display();
    obj2.display();

    obj1+obj2;
}