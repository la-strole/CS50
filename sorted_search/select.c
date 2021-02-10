#include <stdio.h>


int main(void)
{
    int massive[] = {11, 1, 24, 9, 0, 4, 5, 7, 8};
    
    for (int start = 0; start < 9; start++)
    {
        int min_position = start;

        for (int i = start; i < 9; i++)
        {
            if (massive[i] < massive[min_position])
                {
                    min_position = i;
                }
        }
    
        int temp = massive[start];
        massive[start] = massive[min_position];
        massive[min_position] = temp;
    }

for (int num =0; num < 9; num++)
    {
        printf("%i; ", massive[num]);
    }
return 0;
}
