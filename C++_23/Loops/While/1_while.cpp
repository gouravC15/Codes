//print sum of first 10 natural numbers.

#include<iostream>

int main(){
    
    std::cout<<"Enter upto which number sum should be printed"<<std::endl;
    int num;
    std::cin>>num;

    int i = 1, sum=0;
    while (i<=num)
    {
        sum = sum + i;
        i++;
    }
    std::cout<<"sum = "<<sum;
    
return 0;
}