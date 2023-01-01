#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "To check if number is STRONG\n\tEnter a number: ";
    cin >> num;

    int rem, q = num, result = 0, \
    factorial, i;

    while (q != 0)
    {
        rem = q % 10;
        i = 1;          //starting point for calculating fact.
        factorial = 1;  //re-setting for 1 * any_num
        // factorial of individual digits.
        while (i <= rem)
        {
            factorial *= i;
            i++;
        }
        result += factorial;    //adding new fact with previous fact.
        q=q/10;
    }
    cout<<"\tResult = "<<result<<endl;
    (result==num)?(cout<<"\t"<<result<<" = "<<num<<" is STRONG"):(cout<<"\t"<<result<< \
                                                                " != "<<num<<" is NOT Strong");
}