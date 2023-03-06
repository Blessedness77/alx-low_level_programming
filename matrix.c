#include <string.h>
#include <stdio.h>
#include <unistd.h>

int main ()
{
        int size [5][2] = {
            [1, 2],
            [3, 4],
            [5, 6],
            [7,8],
            [9,10]};

        int i, j;
        for(i = 0; i < 5; i++)
        {
            for(j = 1; j < 2; j++)
            {
                printf("size [%i] [%i] = %i\n", i, j, size [i][j] );
            }
        }
            return (0);
}

