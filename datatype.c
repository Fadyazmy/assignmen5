#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "datatype.h"

/* This method compares two Keys and their subcomponents
   of Sub_Key to see which Key precedes/follows/equals to
   the other key */
int key_comp(Key key1, Key key2)
{
    int firstComp = strcmp((key1.key1),(key2.key1));
    if (firstComp < 0)  //key1 precedes key2
    {
        return -1;
    }
    else if (firstComp > 0) //key2 precedes key1
    {
        return 1;
    }
    else    //this is comparing the key2 of each Key
    {
        int secondComp = strcmp((key1.key2),(key2.key2));
        if (secondComp < 0)
        {
            return -1;
        }
        else if (secondComp > 0)
        {
            return 1;
        }
        else    //this means the Keys are duplicates
        {
            return 0;
        }
    }
}

/* This method generates two keys by reading from the
   user input and then storing them in key1 and key2 */
Key key_gen(Sub_Key key1, Sub_Key key2)
{
    scanf(" %s", key1);
    scanf(" %s", key2);
    Key *BKey = (Key*) malloc(sizeof(Key));
    return *BKey;
}

/* This method prints the subcomponents of the Key paramenter */
void key_print(Key key)
{
    printf("\n");
    printf("%s",key.key1);
    printf("\t%s",key.key2);
}

/* This method prints the parameter data */
void data_print(Data_Item data)
{
    printf("\t%f", data);
}



