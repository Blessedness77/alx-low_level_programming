#include <stdio.h>
#include <string.h>

int main(void)
{    
    char s1[20] = "Nyangasi ";
    char s2[] = "Mhozya";
    strcat(s1, s2);
    printf("string after concatenation is, %s\n", s1);

return (0);
}


