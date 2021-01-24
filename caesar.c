#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
bool key(string s);

int main(int argc, string argv[])

{
    if (argc != 2 || !key(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    int key = atoi(argv[1]);
    
    //user input
    string plaintext = get_string("plaintext: ");
    
    //ciphertext 
    printf("ciphertext: ");
    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        //
        char c = plaintext[i];
        if (isalpha(c))
        {
            char m = 'A';
            
            if (islower(c))
            m = 'a';
            
            
            printf("%c",( c - m + key) % 26 + m );
        }
        else 
        
        
        printf("%c", c);
    }
    
      
     printf("\n");
}

bool key(string s)

{
    for (int i = 0, len = strlen(s); i < len; i++)
    if(!isdigit(s[i]))
    
    return false;
    
    return true;
}
