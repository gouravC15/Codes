#include <iostream>
#include <climits>

int main(){
    int a = INT_MAX;

    std::cout << "UINT_MIN : " << 0 << std::endl;
    std::cout << "UINT_MAX : " << UINT_MAX<< std::endl;

    int b();
    std::cout<<"b = "<<b<<std::endl;

    char value = 'A';
    std::cout<<"char as Char: "<<value<<"\nChar as integral: "<<(int)value;

    return 0;
}