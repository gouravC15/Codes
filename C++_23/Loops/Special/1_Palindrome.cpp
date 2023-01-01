#include<iostream>
using namespace std;

int main(){
int num;
cout<<"To check if umber is palindrome\n\t Enter a number: ";
cin>>num;

int q=num,rem, result=0;

while (q!=0)
{
    rem = q%10;
    result = (result*10) + rem;
    q = q/10;
}
(result==num)?(cout<<result<<" = "<<num<<" is Palindrome"):(cout<<result<<" != "<<num<<" is NOT Palindrome");
    
}