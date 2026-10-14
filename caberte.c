#include <stdio.h>
int main() {
   int number;
   float add,subtract,multiply,division;
   printf("Enter 1st number: \n ");
   scanf("%d",&number);
   printf("Enter 2nd number: \n ");
   scanf("%d", &number);

   add = number  + number;
   subtract = number  + number;
   multiply = number  + number;
   division = number  + number;

   printf("=========result=======\n");
   printf("addition %.2f" , add);
   printf("addition %.2f" , subtract);
   printf("addition %.2f" ,multiply);
   printf("addition %.2f" , division);






    return 0;
}
