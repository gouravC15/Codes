//
//  main.cpp
//  Power using loop
//
//  Created by Gourav Chirkhare on 12/1/20.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    int i,n,p,power=1;
    cout<<"Finding power without inbuilt func()\n";
    cout<< "Enter a no.: ";
    cin>>n;
    cout<<"Enter Power: ";
    cin>>p;
    
    //a^b = (a*a*a*a....) b times;
    
    for (i=1; i<= p; i++) {
        power = power * n;
    }
    cout<<"result = "<<power;
    
    cout<<"\ncheck: "<<pow(n, p);
    return 0;
}
