/*A number of order n is ARMSTRONG when each digit is multiplied by itself n number of times and
 finally added together results the same number.

 number = 371
 Order = 3 digit num
 Arm = (3*3*3)+(7*7*7)+(1*1*1)
*/
#include <stdio.h>
int main()
{

  int number, count, n;
  printf("[1] Enter a number to verift if its ARMSTRONG: ");
  scanf("%d", &number); // 153

  // 1.count the order of the number by calculating its digits
  count = 0; // c=110
  n = number;
  while (n != 0){
    n = n / 10;
    count++;
  }
  printf("[2] Order of number = %d\n", count);

  // 2.find each digit multiplied by itself count(order of number) times
  int rem, q=number;
  int result =0, order ;

  while (q!=0){             // q = 153 initially
    rem = q % 10;           //so rem = 3
    order = count;

    int mul = 1;                //reset mul to 1 or it will hold previous value and add to result
    while (order != 0){
        mul = mul * rem;
        order--;
      }
    
    result = result + mul;
    q=q/10;
  }
  printf("[3] Result = %d, Number = %d\n[Output] ",result,number);

  result == number?printf("Number %d is ARMSTRONG\n",number):printf("Number %d is not ARMSTRONG\n",number);
  
  
    return 0;
  }