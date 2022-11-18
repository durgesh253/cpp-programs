#include<iostream>
using namespace std;
class calculator{
    private:
    int a,b;
    public:

     void getdata(){
        cout<<"enter a:";
        cin>>a;
        cout<<"enter b:";
        cin>>b;

    }
    void cal(){
        cout<<"sum:"<<a+b<<endl;
        cout<<"sub:"<<a-b<<endl;
        cout<<"mul:"<<a*b<<endl;
        cout<<"div:"<<a/b<<endl;
    }
};
int main(){
    calculator obj; //calling a class
    obj.getdata();
    obj.cal();
    


}