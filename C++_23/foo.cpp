#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Write a C++ program to print all natural numbers in reverse (from n to 1). - using while loop

    int n;
    cout << "1] Enter n to print all natural numbers in reverse (from n to 1): ";
    cin >> n;
    while (n >= 1)
    {
        cout << n << " ";
        n--;
    }
    cout << "\n-------------------------------------------------------------------------------" << endl;

    // Write a C++ program to print all alphabets from a to z. - using while loop
    cout << "2] Program to print all alphabets from a to z\n ";
    int alpha_start = 97; //'a'
    while (alpha_start <= 122)
    {
        cout << (char)alpha_start << " ";
        alpha_start++;
    }
    cout << "\n-------------------------------------------------------------------------------" << endl;

    // Write a C++ program to print all even numbers between 1 to 100.
    cout << "3] Program to print all even and odd numbers between 1 to 100 SAPERATELY.\n ~EVEN: ";
    short int i = 2, sum=0;
    while (i <= 100)
    {   
        sum+=i;
        cout << i << " ";
        i = i + 2;
    }
    cout<<"\n  sum = "<<sum;

    cout << "\n ~ODD:  ";
    i = 1, sum=0;
    while (i <= 100)
    {
        sum+=i;
        cout << i << " ";
        i = i + 2;
    }
    cout<<"\n  sum = "<<sum << "\n-------------------------------------------------------------------------------" << endl;
    
    
    //Write a C++ program to find first and last digit of a number.
    int num;
    cout<<"4] Program to find first and last digit of a number.\n   Number = ";
    cin>>num;

    int count=0, q=num, rem;
    while (q!=0)
    {
        q = q/10;
        count++;
    }
    cout<<"   Total digits in "<<num<<" = "<<count;

    count-=1;
    cout<<";   first digit = "<<(int)(num/pow(10,count));
    cout<<";   last digit = "<<(num%10);
    
    
    
    return 0;
}