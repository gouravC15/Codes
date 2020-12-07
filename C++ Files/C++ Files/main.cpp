//
//  main.cpp
//  C++ Files
//
//  Created by Gourav Chirkhare on 11/23/20.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int num;
    
    cout <<"Write a C++ program to print day of week name using switch case\n\n";
    
    cout<<"Enter any number from 1-7:";
    cin>>num;
    
    cout<<"The day of week is: ";
    switch (num) {
       
        
        case 1:
            cout<<"Monday\n";
            break;
        
        case 2:
            cout<<"Tuesday\n";
            break;
            
        case 3:
            cout<<"Wednesday\n";
            break;
            
        case 4:
            cout<<"Thursday\n";
            break;
            
        case 5:
            cout<<"Friday\n";
            break;
        
        case 6:
            cout<<"Saturday\n";
            break;
        
        case 7:
            cout<<"Sunday\n";
            break;
            
        default: cout<<"Invalid Input";
            break;
    }
    
    return 0;
}
