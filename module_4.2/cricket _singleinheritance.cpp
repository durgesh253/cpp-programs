#include<iostream>
using namespace std;
class cricket{
    protected: 
    string name; 
    double total_runs;
    float avg_run;
    double best_perform;
    public:
    void read(){
        cout<<"enter batsman name:";
        getline(cin,name);
        cout<<"enter total runs:";
        cin>>total_runs;
        cout<<"enter best performance:";
        cin>>best_perform;
    }
};
class batsman:public cricket{
    public:
    void cal_avg(){
        avg_run=total_runs/best_perform;
        cout<<"bating avrage:"<<avg_run<<endl;
    }
    void display(){
        cout<<"batsman name:"<<name<<endl;
        cout<<"total runs of batsman:"<<total_runs<<endl;
        cout<<"best performance:"<<best_perform<<endl;
        cout<<"batsman avrage:"<<avg_run<<endl;

    }

};

int main(){
    batsman b;
    b.read();
    b.cal_avg();
    b.display();

}