//
//  main.cpp
//  while loop
//
//  Created by Gourav Chirkhare on 11/23/20.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    int n,i=0;
    
    cout<<"Enter any no. to print the message n times:";
    cin>>n;
    
    while (i<n) {
        cout<<"i = "<<i;
        cout <<"\t While loop"<<endl;
        i++;        //n=n+1;
    }
    
    return 0;
}
