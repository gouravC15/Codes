/*
Any number is even if it is completely divisible by 2 (n÷2 then remainder = 0)

Pro:                                    
As numbers are stored in bin 2^n . 10 = 1 0 1 0
                                    1 = 0 0 0 1
                 **********    10 & 1 = 0 0 0 0  = LSB is 0 so num is EVEN.
                                    
                                    5 = 0 1 0 1
                                    1 = 0 0 0 1
                 **********     5 & 1 = 0 0 0 1  = LSB is 1 so num is ODD.
*/


#include<iostream>
using namespace std;

int main(){

    char a;
    cout<<"Enter a number to see its EVEN or ODD\nNumber: ";
    cin>>a;

    if((a&1)==1){
        cout<<a<<": is Odd";
    }
    else{
        cout<<a<<": is Even";
    }

//Power of 2
    int n;
    cout<<"\n\nEnter power: ";
    cin>>n;
    cout<<"\n2^"<<n<<"= "<<(1<<n);

}