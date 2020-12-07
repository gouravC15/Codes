//
//  main.cpp
//  Wloop n no sum
//
//  Created by Gourav Chirkhare on 11/23/20.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int e_num, s_num, sum = 0;
    
    cout << "Write a program to calculate the sum of n natural number.\n\n";
    cout<<"Enter the range eg 1,10 or 2,18 etc\n Enter starting no. : ";
    cin>>s_num;
    cout<<"Enter ending no. : ";
    cin>>e_num;
    
    while (s_num<=e_num) {
        sum = sum + s_num;
        s_num++;
    }
    
    cout<<"sume = "<<sum<<endl;
    
    return 0;
}
