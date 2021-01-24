#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // asking user for change  
    float cash; 
    
    do
    {
        cash = get_float("Change Owed: ");
    }
    while (cash < 0);
   
    //convert dollars to cents *100 roun feature 
    int cents = round(cash * 100);
   
   
    //use largest coins & keep track of coins used
    int change = 0;
   
    while (cents >= 25)
    {
        cents -= 25; 
        change++;
    }
   
    while (cents >= 10)
    {
        cents -= 10;
        change++;
    }
  
    while (cents >= 5)
    {
        cents -= 5;
        change++;
    }
   
    while (cents >= 1)
    {
        cents -= 1; 
        change++;
    }
   
    //print the number of coing 
    printf("%i\n", change);
   
}