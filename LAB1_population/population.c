#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for start size
    int start_population, end_population, current_population;
    int years = 0;
    

    do
    {
        start_population = get_int("start population: ");

    } while (start_population < 9);
    
    //  Prompt for end size
    
    do
    {
        end_population = get_int("end population: ");
    } while (end_population < start_population);
    
    
    //  Calculate number of years until we reach threshold

    current_population = start_population;
    while (current_population < end_population)
    {
        current_population = current_population + current_population / 3 - current_population / 4;
        years++;
        // printf("current population = %i, years = %i\n", current_population, years);
    }
    
   

    // TODO: Print number of years
     printf("The number is %i\n", years);
}
