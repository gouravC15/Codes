#include <iostream>

using namespace std;

int main() {

    int a = 1818182;
    cout << "a (dec) "<<std::dec<<a<<"\n";
    cout << "a (hex) "<<std::hex<<a<<"\n";
    cout << "a (oct) "<<std::oct<<a<<"\n\n";

    cout<<"with base------\n"<<std::showbase<<std::uppercase;
    cout << "a (dec) "<<std::dec<<a<<"\n";
    cout << "a (hex) "<<std::hex<<a<<"\n";
    cout << "a (oct) "<<std::oct<<a<<"\n";


}