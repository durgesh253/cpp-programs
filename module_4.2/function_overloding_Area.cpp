#include<iostream>
using namespace std;
class dimension{
public:
void area(int length,int breadth){
    cout<<"area of Rectangle: "<<length*breadth<<endl;
}
void area(double base,int height){
cout<<"area of Triangle:"<<0.5*base*height<<endl;
}
void area(int r){
cout<<"area of Circle:"<<3.14*r*r;
}
};
int main(){
    dimension d;
    d.area(12,14);//168
    d.area(4.2,10);//21
    d.area(2);//12.56
    }