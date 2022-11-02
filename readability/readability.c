#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
// ask user for response
string text = get_string("Text: ");
printf("%s\n", text);

// number of letters in text
int letters = 0;
for(int i = 0; i < strlen(text); i++)
{
    if((text[i] >= 'a' && text[i] <= 'z') ||
    (text[i] >= 'A' && text[i] <= 'Z'))
    letters++;
}
printf("%i letters\n", letters);

// number of word counts
int words = 1;
for(int i = 0; i strlen(text); i++)
{
    if(text[i] == ' ')
    words++;
}
printf("%i words\n", words);

//count spaces between sentences
int sentences = 0;
for(int i = 0, i < strlen(text); i++)
{
    if(text[i] == '.' || text[i] == '!' ||
    text[i] == '?')
    sentences++;
}
printf("%i sentences\n", sentences);
}

