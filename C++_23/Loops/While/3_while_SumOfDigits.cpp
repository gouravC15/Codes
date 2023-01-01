#include<iostream>

int main(){
    
    std::cout<<"Enter number to print SUM of its digits: ";
    int num;
    std::cin>>num;

    int q=num, rem, sum=0;

    while (q!=0)
    {
        rem = q%10;
        sum += rem;
        q = q/10;
    }
    

    std::cout<<"SUM = "<<sum;

    return 0;
}