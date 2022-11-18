#include<iostream>
using namespace std;
class calculator{
    private:
    int a, b;

    public:
    void calac(){
        cout<<"enter a:";
        cin>>a;
        cout<<"enter b:";
        cin>>b;

        cout<<"division:"<<a/b<<endl;
    }
    void calc( double x, int y){
        cout<<"sum:"<<x+y<<endl;
    }
    void calc(int p,int q ){
        cout<<"sub:"<<p-q<<endl;
    }
 
  void calc(double  r, double m){
    cout<<"multipication:"<<r*m<<endl;

 } 

 };
 
int main(){
    calculator c;
    c.calac();
    c.calc(10,5);
    c.calc(65.7,5);
    c.calc(55.7,59.6);

 
}