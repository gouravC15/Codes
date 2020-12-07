//
//  main.cpp
//  Multi Table
//
//  Created by Gourav Chirkhare on 11/23/20.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int i=1, n ,table;
    
    cout << "Write a program that prompts the user to input a positive integer. It should then print the multiplication table of that number.\n";
    
    cout<<"Enter a no to print its table: ";
    cin>>n;
    
    while (i<=10) {
        table= i * n;
        i++;
        
        cout<<table<<endl;
    }
    
    return 0;
}
