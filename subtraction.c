#include <stdio.h>
/*
 *object calculate
 * subraction
 * 
 */

int main(void) 
{
  int a, b, sub;
  printf("enter first number \n");
  scanf("%d", &a); 
  printf("enter second number \n");
  scanf("%d", &b);
  sub = a - b;
  printf("Subtraction of %d - %d is %d\n", a, b, sub);
    
  return 0;
}
