#include <stdio.h>
int main()
{
    // check co prime

    int n1, n2, num, count = 0;
    int factors1, factors2;

    printf("Enter 1st Number(smaller): ");
    scanf("%d",&n1);
    printf("Enter 2nd Number(larger): ");
    scanf("%d",&n2);


    for (int i = 1; i <= n2; i++){

        {
            if (n1 % i == 0){
            factors1 = i;
            }
            if (n2 % i == 0){
            factors2 = i;
            }
        }
        
        if(factors1 == factors2){
            count++;
        }

    }

(count > 1)?printf("Not Co-prime"):printf("Co-prime");

return 0;
}


/*
// Finding HCF
	 for(i=1;i<=num1;i++)
	 {
	  if(num1%i==0 && num2%i==0)
	  {
	   hcf = i;
	  }
	 }
	
	 // Making Decision
	 if(hcf == 1)
	 {
	  printf("%d and %d are CO-PRIME NUMBERS.", num1, num2);
	 }
	 else
	 {
	  printf("%d and %d are NOT CO-PRIME NUMBERS.", num1, num2);
	 }
*/