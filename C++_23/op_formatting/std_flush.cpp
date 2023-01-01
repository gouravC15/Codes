#include <iostream>
#include <unistd.h>
using namespace std;
int main() { 
    /*
    Run this program: you'll notice that it prints line 1, pauses, then prints line 2 and 3. 
    Now remove the flush call and run the program again- you'll notice that the program pauses
    and then prints all 3 lines at the same time. 
    The first line is buffered before the program pauses, but because the buffer is never flushed, 
    line 1 is not outputted until the endl call from line 2.*/

    cout << "Line 1..." << std::flush;  //remove  << std::flush to boserve chage
    
    usleep(500000);

    cout << "\nLine 2" << endl;
    cout << "Line 3" << endl ;
    return 0;
}