//
//  main.cpp
//  Factorial
//
//  Created by Gourav Chirkhare on 11/23/20.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    
    long i=1 ,n ,fact = 1;
    
    cout << "Write a program to find the factorial value of any number entered through the keyboard. \n";
    
    cout<<"Enter any no. to get factorial: ";
    cin>>n;
    
    if(n<0)
        cout<<"No negative no allowed";
    
    else
        while (i<=n) {
            fact = fact * i;
            i++;
        }
    
    cout<<fact<<endl;
    
    return 0;
}
