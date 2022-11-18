#include<iostream>
using namespace std;
inline int mul(int x, int y){
    cout<<"multipictaion:"<<x*y<<endl;

}
inline float cube(int p){
    cout<<"cube:"<<p*p*p<<endl;
}
int main(){
    mul(5,6);
    cube(5);

}