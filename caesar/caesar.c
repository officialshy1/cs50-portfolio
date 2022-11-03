#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // one command line argument
    if(argc !=2)
    {
        printf("usage: ./caesar key\n");
        return1;
    }
    else printf("Success!\n");

    //key
    string key = argv[i];

    //input is digit
    for (int i = 0; i < strlen(argv[i]); i++)
    {
        if(!isdigit(argv[i][i]))
        {
            printf("usage: ./caesar key\n");
            return 1;
        }
    }
          printf("Success\n%s\n", key);

          //plaintext
          string plaintext = get_string("Plaintext: ");

          //key to integer
          int k = atoi(key);

          //ciphertext
          for(int i = 0; i < strlen(plaintext); i++)
          {
            if(isupper(plaintext[i]))
            {
                printf("%c", (((plaintext[i]-65)+k)%26)+65);
            }
            else if(islower(plaintext[i]))
            {
                printf("%c", (((plaintext[i]-97)+k)%26)+97);
            }
            else
            {
                printf("%c", plaintext[i]);
            }
          }
          printf("\n");
}