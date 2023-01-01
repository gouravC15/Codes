#include<iostream>
using namespace std;

int main(){
cout<<"1st cpp output"<<endl;

//comments inside cout
cout<< "*/" <<endl;
cout<< /* "*/" */" << endl;

int a,b;
cout<<"Enter two numbers"<<endl;
cin>>a>>b;

int x = 9;
int &y=x;

cout<<y;
return 0;
}
