//
//  main.cpp
//  Miss multiples
//
//  Created by Gourav Chirkhare on 12/1/20.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    int num,end_num,i;
    cout << "Miss the multiples in table\n";
    cout<<"Enter teh no. to get missing table: ";
    cin>>num;
    cout<<"Enter the range upto: ";
    cin>>end_num;
    
    for(i=1;i<end_num;i++){
        if (i%num==0) {
            i++;
        }
        cout<<i<<" ";
    }
    
    return 0;
}
