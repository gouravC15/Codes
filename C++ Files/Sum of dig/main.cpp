//
//  main.cpp
//  Sum of dig
//
//  Created by Gourav Chirkhare on 11/25/20.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n,sum=0, lastdig=0;
    
    cout << "WAP to get sum of digits of a no."<<endl;
    cout<<"Enter any no.: ";
    cin>>n;
    
    while (n!=0) {
        lastdig = n%10;
        sum += lastdig;
        n = n/10;
    }
    
    cout<<"Sum of digits of no. ="<<sum<<endl;

    return 0;
}
