/* Test file. */


#include "array_lib.h"
#include <stdio.h>

int main() 
{
    BITLIST_INIT(test_, 1000000);
    printf("%p, %d, %x\n", &test_, sizeof(test_), test_[0]);
    BITLIST_WRITE_ELEMENT_MUT(test_, 0, 0);
    printf("%p, %d, %x\n", &test_, sizeof(test_), test_[0]);
    BITLIST_WRITE_ELEMENT_MUT(test_, 1, 1);
    printf("%p, %d, %x\n", &test_, sizeof(test_), test_[0]);
    BITLIST_WRITE_ELEMENT_MUT(test_, 2, 1);
    printf("%p, %d, %x\n", &test_, sizeof(test_), test_[0]);
    BITLIST_WRITE_ELEMENT_MUT(test_, 3, 1);
    printf("%p, %d, %x\n", &test_, sizeof(test_), test_[0]);
    BITLIST_WRITE_ELEMENT_MUT(test_, 4, 1);
    printf("%p, %d, %x\n", &test_, sizeof(test_), test_[0]);
    BITLIST_WRITE_ELEMENT_MUT(test_, 5, 1);  
    printf("%p, %d, %x\n", &test_, sizeof(test_), test_[0]);
    BITLIST_WRITE_ELEMENT_MUT(test_, 6, 1);
    printf("%p, %d, %x\n", &test_, sizeof(test_), test_[0]);
    BITLIST_WRITE_ELEMENT_MUT(test_, 7, 0);
    printf("%p, %d, %x\n", &test_, sizeof(test_), test_[0]);
    printf("%s\n", (BITLIST_READ_ELEMENT(test_, 0)) ? "TRUE" : "FALSE");
    printf("%s\n", (BITLIST_READ_ELEMENT(test_, 6)) ? "TRUE" : "FALSE");

    return 0;
}

