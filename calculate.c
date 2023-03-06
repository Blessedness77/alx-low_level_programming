#include <stdio.h>
#include <stdlib.h>
/*
*object calculate
 *addition
 *subtraction
 *multiplicatin
 *division
 *
 */

int main(void) 
{
    int choice;
    
    float a, b, i, result;
  printf("Enter 1:  for addition, 2:    for subtraction, 3: for multiplication, 4: for Division, 5: Matrix, ");
  scanf("%d", &choice);

  printf("Enter the first number: ");
  scanf("%f", &a);
  printf("Enter the second number: ");
  scanf("%f", &b);

  switch (choice) {
      case 1:
          result = a + b;
          printf("%.2f + %.2f  = %.2f\n", a, b, result);
          break;
      case 2:
          result = a - b;
          printf("%.2f - %.2f = %.2f\n", a, b, result);
          break;
     case 3:
      for(i = 0; i <= b; i++)
      {
          printf("%.2f * %.2f = %.2f\n", a, i, a * i);
         
      }
      break;
     case 4:
          if (b == 0) {
              printf("cannot divide by zero.\n");
              exit(0);
          }
          result = a / b;
          printf("%.2f / %.2f = %.2f\n", a, b, result);
          break;
 
   printf("Invalid choice.\n");
  }
  return 0;
}
