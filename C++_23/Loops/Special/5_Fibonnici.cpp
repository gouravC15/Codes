#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Fibonnici series\n\tTo print upto 'n' terms, Enter n:";
    cin>>n;

    int a = -1, b=1;
    int fib, i=1;

    while (i<=n)
    {
        fib = a+b;
        cout<<fib<<" ";
        a=b;
        b = fib;
        i++;
    }
}