#include <stdio.h>

int main(void)
{
    int tmp;
    int unsorted_list[10] = {1,7,5,4,2,3,7,9,2,8};
    int permutations;
    do
    {
        permutations = 0;
        int sub = 0;
        for (int i=0; i < 9 - sub; i++)
        {
            if(unsorted_list[i] > unsorted_list[i+1])
            {
                tmp = unsorted_list[i];
                unsorted_list[i] = unsorted_list[i+1];
                unsorted_list[i+1] = tmp;
                permutations += 1;
            }
        }
        sub ++;
    }
    while (permutations != 0);
   
    for (int i=0; i< 10; i++)
    {
        printf("%i ", unsorted_list[i]);
    }

}