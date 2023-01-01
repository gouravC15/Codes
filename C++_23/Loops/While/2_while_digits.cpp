#include<iostream>

int main(){
    
    std::cout<<"Enter number to count its digits: ";
    int num;
    std::cin>>num;

    int q=num,rem=0,i=0;

    while (q!=0)
    {
        q = q/10;
        i++;
    }
    std::cout<<i<<" digit number";

    return 0;
}