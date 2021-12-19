/*Problem Statement: 
Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary. */
  #include <stdio.h>
    int main()
    {
        float bs=0, gross=0;
        float da=0, ha=0;
        printf("Enter Ramesh's Basic Salary");
        scanf("%f",&bs);
        da=bs*0.4;
        ha=bs*0.2;
        gross=da+ha+bs;
        printf("Basic=%f,\t da=%f, \tha=%f,\nGross=%f",bs,da,ha,gross);
    }