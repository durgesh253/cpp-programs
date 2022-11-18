#include<iostream>
using namespace std;
class Bank{
    protected:
    string name;
     string type_acc;
    long long int acc_no;
    double balance;
    public:
   void assign_values(){
    cout<<"enter account holder name:";
    getline(cin,name);
    cout<<"enter account type:";
    getline(cin,type_acc);
    cout<<"enter account no:";
    cin>>acc_no;
    cout<<"enter account balance:";
    cin>>balance;



   }
   void display(){
    cout<<"account holder name:"<<name<<endl;
    cout<<"account type:"<<type_acc<<endl;
    cout<<"account number:"<<acc_no<<endl;
    cout<<"account balance:"<<balance<<endl;
   }
   void deposite(){
    double depo;
    cout<<"enter the amount deposited:";
    cin>>depo;
    balance+=depo;
    cout<<"avalible balance:"<<balance<<endl;
   }
   void withdraw(){
    double withdr;
    cout<<"enter winthdraw amount:";
    cin>>withdr;
    balance-=withdr;
    cout<<"avalible balnce:"<<balance<<endl;

   }
  
   };

int main(){
int choice;
   Bank b;
   b.assign_values();
   cout<<"\n press 1: To deposited an amount \n press 2:To withdraw an amount after checking balance \n press 3:To display name and balance \n enter your choice:";
   cin>>choice;
   switch (choice)
   {
   case 1:
   b.deposite();
    break;
    case 2:
    b.withdraw();
    break;
    case 3:
    b.display();
   
   default:
   cout<<"invalid input";
    break;
   }
}