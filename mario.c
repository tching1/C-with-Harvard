#include <stdio.h>
#include <cs50.h> 

int main(void)

{
    //user input between the rage
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    
    // printing the hashes
    for (int i = 0; i < height; i++)
    {   
        for (int j = 0; j < height; j++) //printing the hashes horizontal and verticle 
        
         {  
             if (i + j < height - 1)  // Right alinging it equation 
               
                 printf(" ");
                 
            else   
            
             printf("#"); 
            
         }
         
          printf("\n");
         
     }
        
    
}