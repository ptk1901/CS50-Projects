// Implements a dictionary's functionality
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 6000;

// Hash table
node *table[N];

// size variable(global)
unsigned int fudu = 0;


// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    int check = hash(word);
    node *cursor = table[check];
    while(cursor != NULL)
    {
        if (strcasecmp(word,cursor->word) == 0)
        return true;
        else
        cursor = cursor->next;
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    int ascii = 0;
    for (int i = 0; i<strlen(word); i++)
    {
        ascii += (int)tolower(word[i]);
    }
    return ascii;
    //return toupper(word[0]) - 'A';
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO
    for(int i=0;i<N;i++)
    {
        table[i] = NULL;
    }
    FILE *dict = fopen(dictionary, "r");
    if(dict == NULL)
    {
        printf("unable to open file err. \n");
        return false;
    }
    char words[LENGTH + 1];
    while(fscanf(dict,"%s",words) != EOF)
    {
        node *temp = malloc(sizeof(node));
        if(temp == NULL)
        {
            return false;
        }
        strcpy(temp->word, words);
        temp->next = NULL;
        int ascii = 0;
        for(int i =0;i<strlen(words);i++)
        {
            ascii += (int)words[i];
        }
        if(table[ascii]== NULL)
        {
            table[ascii] = temp;
        }
        else
        {
            temp->next = table[ascii];
            table[ascii] = temp;
        }
        fudu +=1;
    }
    fclose(dict);
    return true;

}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    //unsigned int p = (int)*size;
    return fudu;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    for (int i = 0; i<6000;i++)
    {
        if(table[i] != NULL)
        {
            node *temp = table[i];
            node *uncursor = temp;
            while(temp != NULL)
            {
                temp =temp-> next;
                free(uncursor);
                uncursor = temp;
            }
        }
    }
    return true;
}



















































/*

// Implements a dictionary's functionality
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 6000;

// Hash table
node *table[N];
//for(int i = 0; i<N;i++)


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
    for(int i=0;i<N;i++)
    {
        table[i] = NULL;
    }
    FILE *dict = fopen("dictionary", "r");
    if(dict == NULL)
    {
        printf("unable to open file. \n");
    }
    char words[LENGTH + 1];
    while(fscanf(dict,"%s",words) != EOF);
    {
        node *temp = malloc(sizeof(node));
        if(temp == NULL)
        {
            return false;
        }
        strcpy(temp->word, words);
        temp->node = NULL;
        int ascii = 0;
        for(int=0;i<strlen(word);i++)
        {
            ascii += (int)words[i];
        }
        if(table[ascii]= NULL)
        {
            table[ascii] = temp;
        }
        else
        {
            temp->node = table[ascii];
            table[ascii] = temp;
        }
        free(temp);

    }
    return false;
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
*/