//take n int as input from the usr and display their sum after usr enters a invalid/eof value.

#include<iostream>
int main(){
    int value = 0, sum = 0;

    while (std::cin>>value)
    {
        sum+=value;
    }
    std::cout<<"SUM = "<<sum;
    
return 0;
}