
#include <iostream>
using namespace std;
int main()
{
    int i=0;
    for (cout<<"One\n"; i<3 && cout<<""; i++)         //   for(printf("One\n"); i<3 && printf("");i++)
    {                                                 //   {
        cout<<"Hi !\n";                               //       printf("Hi !\n");
    }                                                 //   }  
                                                      //        o/p-> One   [because pf("") returns nothing-
                                                      //                    so condition is false]                                                    
    return 0;
}