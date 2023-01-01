#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int num;
    cout << "To check if umber is palindrome\n\tEnter a number: ";
    cin >> num;

    int sq_num, count = 0;
    sq_num = ceil(sqrt(num));

    if (num == 0 || num == 1)
    {
        cout << "\tNot prime nor composite";
    }
    else
    {
        for (int i = 2; i <= sq_num; i++)
        {
            if (num % i == 0)
                count++;
        }
    }
    cout << "\tCount = " << count << "\n\t";
    (count > 0) ? cout << num << " is Composite" : cout << num << " is Prime";
}