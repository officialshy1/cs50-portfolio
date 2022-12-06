// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO
    //dictionary open
    FILE *file = fopen(dictionary, "r");

    //return null if can't be opened
    if (file == NULL)
    {
        printf("Unable to open %s\n")
        return false;
    }

    // declare word variable
    char word[LENGTH+1];

    // scan dict. for strings until eof
    while (fscanf(file, "%s", word) != EOF)
    {
        // allocate memory for new nodes
        node *n = malloc(sizeof(node));

        // if it returns null then return false
        if (n == NULL)
        {
          return false;
        }
    }
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
