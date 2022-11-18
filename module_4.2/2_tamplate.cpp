#include <iostream>
using namespace std;


template <class test>
void sorting(test a[],test n)
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
                {
                    test temp;
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
    }
 }
 int main ()
 {
    int array[10]= {50, 10, 20, 15, 62, 32, 6, 80, 90, 100};

cout<<"The intarray consists of:"<<endl;
for (int i=0; i<10; i++)
    cout<<array[i]<<endl;

cout<<"The sorted intarray sorted is:"<<endl;
sorting(array, 10);
for (int i=0; i<10; i++)
    cout<<array[i]<<endl;
    }