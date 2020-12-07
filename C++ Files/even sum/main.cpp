//
//  main.cpp
//  even sum
//
//  Created by Gourav Chirkhare on 11/25/20.
//

#include <iostream>
using namespace std;

int main() {
    int i=1,n,e_sum = 0;
    
    cout << "WAP to find sum of even nos from 1 to N"<<endl;

    
    cout << "Enter the no: ";
    cin>>n;
    
    while(i<=n){
        if(i%2==0){
            e_sum+= i;
             
        }
        i++;
    }
    
    /* OR i=2
        while(i<=n){
        e_sum = e_sum +i;
        i = i+2;     //to get next even no.
     }
     */
    
    cout<<"Sum of even nos from 1 to "<< n <<" = "<<e_sum<<endl;
    return 0;
}
