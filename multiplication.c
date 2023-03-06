#include <stdio.h>
/*
 *object calculate
 * addition
 *subraction
 *division
 * and multiplication
 */

int main(void) 
{
    int a, b;
    int multiplication;
  
    printf("enter number for multiples: \n");
    scanf("%d %d", &a, &b);
  
    printf("multiples of number %d to %d = %d\n", a, b, (a*b));
  
    return 0;
}
