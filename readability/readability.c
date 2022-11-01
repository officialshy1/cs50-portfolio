#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
// ask user for response
string text = get_string("Text: ");

//count letters in text
int letters = 0;
for(int i = 0; i < strlen(text); i++)
{
    if((text[i] >= 'a' && text [i]<= 'z')||
    (text [i] >= 'A' && text[i] <= 'Z'))
    letters++;
}
// words with spaces
int words = 1;
for(int i = 0; i < strlen(text); i++)
{
    if(text[i] == ' ')
    words++;
}
// sentences with special charatcers
int sentences = 0;
for(int i = 0; i < strlen(text); i++)
{
    if(text[i] == '.' || text[i] == '!' ||
    text[i] = '?')
    sentences++;
}
// coleman index
float calculation = (0.0588 * letters/words *100) -
(0.296 * sentences/words * 100) - 15.8;
int index = round(calculation);
if(index < 1)
}