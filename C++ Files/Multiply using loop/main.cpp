//
//  main.cpp
//  Multiply using loop
//
//  Created by Gourav Chirkhare on 12/1/20.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int i,a,b,multply_result = 0;
    cout << "Multipplication of 2 numbers using loop"<<endl;
    
    cout<<"Enter two no. :";
    cin>>a>>b;
    
    for (i=1; i<=b; i++) {
        multply_result += a;
    }
    cout<<"Multiplication = "<<multply_result<<endl;
    cout<<"Check: "<<a*b<<endl;
    return 0;
}
