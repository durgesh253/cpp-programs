#include<iostream>
using namespace std;
class largestnumber{
private:
int x,y;
public:
void input(){
    cout<<"enter a two numbers:";
    cin>>x>>y;
}
friend void find(largestnumber l);
};
void find(largestnumber l){
    if(l.x>l.y)
    cout<<"largest is:"<<l.x;
    else
    cout<<"largest is:"<<l.y;

}
int main(){
    largestnumber l;
    l.input();
    find(l);

}