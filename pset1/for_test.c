#include <stdio.h>

int main()
{
    for(int i = 1; i< 10; i++)
    {
        printf("$");
        for(int k = 0; k <= i; k++)
        {
            printf("k = %i", k);
        }
    }
}