#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char a;
    a=0b0001;
    cout<<"initially: "<<(int)a;

    a=-10<<2;
    cout<<"\nResult: "<<(int)a;

    int b=6;

    b=+8;
    cout<<"\nVal of B= : "<<b<<endl<<endl;

    cout<<"Address of b= "<<&b<<endl<<endl;

    int i=1; float f=2.0;
    cout<<sizeof i+f;


    return 0;
}