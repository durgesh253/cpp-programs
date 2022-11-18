#include<iostream>
using namespace std;
class person{
    protected:
    string name;
    int age;
    public:
    void read(){
        cout<<"enter name:";
        getline(cin,name);
        cout<<"enter age:";
        cin>>age;

    }
};
class student{
    protected:
    int maths,physics;
    public:
    void marks(){
        cout<<"enter maths marks:";
        cin>>maths;
        cout<<"enter physics marks:";
        cin>>physics;
    }
};
class teacher: public person,public student{
    protected:
    double salary;
    public:
    void sal(){
    cout<<"ente the slary:";
    cin>>salary;
    }
    void display(){
        cout<<"student name:"<<name<<endl;
        cout<<"student age:"<<age<<endl;
        cout<<"student percentage:"<<(float)(maths+physics)/2<<endl;
        cout<<"teacher salary:"<<salary<<endl;
    }
};
int main(){
    teacher t;
    t.read();
    t.marks();
    t.sal();
    t.display();

}