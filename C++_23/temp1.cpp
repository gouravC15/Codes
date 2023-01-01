//WAP to swap two int without using temp var;

#include<iostream>
using namespace std;
int main(){
    int x,y;

    x = 4;
    y = 7;

    cout<<"x="<<x<<"\ty="<<y<<endl;

    x = x+y;    //  4+7 = 11
    y = x-y;    //  11-7 = 9
    x = x-y;    //  11-9 = 2

    cout<<"After\nx="<<x<<"\ty="<<y<<endl;

//incrementing a character uisng operator
    cout<<"\n----------Incrementing a character uisng operator\n";
    char ch='A';
    cout<<"\nch="<<ch<<endl;
    ch++;
    cout<<"\nch="<<ch<<endl;
    cout<<(0<=0);


    int a=5, b=9;
    cout<<((a<b)&&(b++))<<endl;

// looking if short int works with arithmatic operators
    cout<<"\n----------If short int works with arithmatic\n";
    
    short int n1,n2, result;
    n1=2; n2=3;
    result = n1+n2;

    cout<<sizeof(n1)<<": is n1\n";
    cout<<sizeof(n2)<<": is n2\n";
    cout<<sizeof(result)<<": is res\n"<<"and result = "<<result<<endl;

//bitwise binary
    short int bin = 0b0011;
    cout<<"\n----------Bitwise bin\n";
    cout<<bin;

    cout<<"\nIn binary: "<<std::bitset<8>(bin);

    cout<<"\n\n short int: "<<sizeof(short int);
    cout<<"\n unsigned short int: "<<sizeof(unsigned short int);
    cout<<"\n int: "<<sizeof(int);
    cout<<"\n unsigned int: "<<sizeof(unsigned int);
    cout<<"\n long int: "<<sizeof(long int);
    cout<<"\n unsigned long int: "<<sizeof(unsigned long int);
    cout<<"\n long long int: "<<sizeof(long long int);
    cout<<"\n unsigned long long int: "<<sizeof(unsigned long long int);


int n=0xAB;
int n11= 0b10;
printf("\n %+d",n11);
printf("\n %#d",n);

printf("\n %X",n);
printf("\n %#X",n);

    return 0;
}