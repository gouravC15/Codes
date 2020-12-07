//
//  main.cpp
//  Swap No.s
//
//  Created by Gourav Chirkhare on 12/7/20.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Swappimg using temp;\na=10,b=4\n";
    int a=10,b=4,temp=0;
    
    temp = a;
    a = b;
    b = temp;
    std::cout<<"After Swapping: a= "<<a<<", b= "<<b;
    
    
    //Without using temp[x]
    cout<<"\n\nWithout using temp[x]"<<endl;
    int a1=8, b1=18;
    cout<<"a1= "<<a1<<", bq= "<<b1<<endl;
    
    a1 = a1 + b1;
    b1 = a1 - b1;
    a1 = a1 - b1;
    
    cout<<"After Swapping a1= "<<a1<<", bq= "<<b1<<endl;
    
    //Using Bitwise OR
    cout<<"\n\nUsing Bitwise OR\n x = 5, y=9"<<endl;
    int x = 5, y = 9;
    
    x = x^y;
    y = x^y;
    x = x^y;
    
    cout<<"After Swapping by Bitwise Opr:\n x = "<<x<<"\ny = "<<y<<endl;
    
    return 0;
}
