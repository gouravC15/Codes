//
//  main.cpp
//  Star Pattern
//
//  Created by Gourav Chirkhare on 11/25/20.
//

#include <iostream>
using namespace std;
int main() {

    int n,i=1;
    
    cout << "Enter th no. of layers:";
    cin>>n;
    
    while (i<=n) {
        int j=1;
        while (j<=i) {
            cout<<"*";
            j++;
        }
    cout<<endl;
    i++;
    }
    
}
