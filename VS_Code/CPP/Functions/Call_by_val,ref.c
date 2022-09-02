#include <stdio.h>
void Call_by_val(int,int);       //Declaration or Prototype of function fun(). return_type func_name (FORMAL_parameter_datatypes);
void Call_by_ref(int *x, int *y);


int main()
{
    int m=10, n=20;

    Call_by_val(m,n);
    printf("\nCall_by_val~ m=%d, n=%d",m,n);

    Call_by_ref(&m,&n);
    printf("\nCall_by_ref~ m=%d, n=%d\n",m,n);
    return 0;
}

void Call_by_val(int x, int y){  // Definition of function fun() which accepts two int x, y.
                        // x, y are FORMAL Parameters as these accepts value.
    x = 20;
    y = 10;            // x, y are local to this and will be destoyed after exe.
}

void Call_by_ref(int *x, int *y){  // Definition of function fun() which accepts two ADDRESSES *x, *y.
                        // *x, *y are FORMAL Parameters to hold address of m,n.
    *x = 20;
    *y = 10;           //  *x, *y are changing content on ADDRESS of m,n.
                       // HENCE, Values will be swapped of m,n.
}