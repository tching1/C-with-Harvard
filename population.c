#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    int starting_pop_size, end_pop_size, years_passed, llama_born, llama_dead;
    
    // TODO: Prompt for start size
    
    do 
    {
        starting_pop_size = get_int("Start Size: \n");
    }
    while (starting_pop_size < 9);
    

    // TODO: Prompt for end size
    
    do
    {
        end_pop_size = get_int("End Size: \n");
    }
    while (end_pop_size < starting_pop_size);
   

    // TODO: Calculate number of years until we reach threshold
    
    for (years_passed = 0; starting_pop_size < end_pop_size; years_passed++)
   {  
      llama_born = starting_pop_size / 3;
      llama_dead = starting_pop_size / 4;
    
      starting_pop_size = starting_pop_size + llama_born - llama_dead;
   }

    // TODO: Print number of years
    
    printf("Years: %i\n", years_passed);
}