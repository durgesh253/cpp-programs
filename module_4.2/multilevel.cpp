#include<iostream>
using namespace std;
class student{
    protected:
    int roll_no;
    public:
    void get_roll_no(){
        cout<<"enter roll no:";
        cin>>roll_no;
    }
};
class test: public student{
    protected:
    int maths,english;
    public:
    void get_marks(){
        cout<<"enter maths marks:";
        cin>>maths;
        cout<<"enter english marks:";
        cin>>english;
    }
};
class result: public test{
    private:
    int total;
    float percentage;
    public:
    void get_result(){
        total=maths+english;
    }
        void get_percentage(){
            percentage=maths+english/2;
        }
    void display(){
        cout<<"roll number:"<<roll_no<<endl;
        cout<<"maths marks:"<<maths<<endl;
        cout<<"english marks:"<<english<<endl;
        cout<<"total marks:"<<total<<endl;
        cout<<"percentage:"<<percentage<<endl;
    }
};
int main(){
    result r;
    r.get_roll_no();
    r.get_marks();
    r.get_result();
    r.get_percentage();
    r.display();

}