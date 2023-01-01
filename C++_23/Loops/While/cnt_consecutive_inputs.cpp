/*
WAP to count number of consecutive inputs

input  >> 10 10 10 5 5 7 7 7 7
output >> 10 occurs 3 time
          5 occurs 2 time
          7 occurs 4 time               */

#include <iostream>
using namespace std;

int main()
{

    int entered, current = 0, count;

    while (cin >> entered)
    {
        if (entered == current)
        {
            count++;
        }
        else if (entered != current)
        {
            current = entered;
            count = 1;
        }
    }
    cout<<current<<" occured "<<count<<" times"<<endl;

}