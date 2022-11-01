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
//
}