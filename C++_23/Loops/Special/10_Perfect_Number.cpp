#include <iostream>
using namespace std;

int main()
{
    int num, sum_of_dividors = 0;
    cout << "Check if a number is PERFECT number.\n\tEnter a number: ";
    cin >> num;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum_of_dividors += i;
        }
    }
    cout << "\t[ Number = " << num << ", sum_of_dividors = " << sum_of_dividors << " ]" << endl;
    (sum_of_dividors == num) ? (cout << "\tIts Perfect Number") : (cout << "\tNot a Perfect Number");
}