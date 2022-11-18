#include<iostream>
using namespace std;
class swapnumbers{
  private:
  int x=10,y=20;
  public:

  void showdata(){
     cout<<x<<" "<<y;

  }
 friend void swap(swapnumbers&s);
};
void swap(swapnumbers&s){
    int temp;
    temp=s.x;
    s.x=s.y;
    s.y=temp;


}
int main(){
    swapnumbers s;
    cout<<"before swaping:"<<endl;
    s.showdata();
    swap(s);

    cout<<endl<<"after swaping:"<<endl;
    s.showdata();


}