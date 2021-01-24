#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)

{   
    
    // user input 
    string text = get_string("Text: ");
    
    //count letters, words, sentences in input 
    int letters, words, sentences;
    letters = words = sentences = 0;
    
    for ( int i = 0, len = strlen(text); i < len; i++)
    {
        if (isalpha(text[i]))
        
            letters++;
            
        if ((i == 0 && text[i] != ' ') || (i != len - 1 && text[i] == ' ' && text[i + 1] != ' '))
           
            words++;
            
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')   
           
            sentences++;
            
    }
    
    // output calculation
    float L = (letters / (float) words) * 100;
    float S = (sentences / (float) words) * 100;
    
    //coleman index 
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    
    //Grade Level
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    
    else 
    {
        printf("Grade %i\n", index);
    }
}