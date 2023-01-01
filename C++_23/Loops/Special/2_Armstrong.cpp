#include<iostream>
using namespace std;
int main(){
    
    int num;
    cout<<"To check if number is ARMSTRONG\n\tEnter a number: ";
    cin>>num;

    //counting order of number.
    int q=num, counter=0;
    while (q!=0)
    {
        q = q/10;
        counter++;
    }
    cout<<"\tOrder = "<<counter<<endl;

    //multiply each digit counter times and add it to result.
    q=num;
    int rem, multiplied =1, counter2, result=0;
    while (q!=0)
    {
        rem = q%10;
        counter2 = counter;
        while (counter2!=0)
        {
            multiplied = multiplied * rem;
            counter2--;
        }
        result = result + multiplied;
        multiplied = 1;                 //resetting variable 
        q=q/10;
    }
    //final output.
    cout<<"\tResult = "<<result<<endl;
    (result==num)?(cout<<"\t"<<result<<" = "<<num<<" is Armstrong"):(cout<<"\t"<<result<<" != "<<num<<" is NOT Armstrong");
}
    

