#include <stdio.h>
#include <stdlib.h>

int main()
{
    size_t lenght = 3 ;    /// wie groß ist die Löcker
    size_t memoryreq = lenght * sizeof(int);  //wie viel bit braucht ein int
// size_t unsigned longlong

    printf("\nadresse of lenght: %p", (void*)&lenght);
    printf("\nsizeof(int): %llu", sizeof(int));

    printf("\nmemoryReq: %zu", memoryreq);


    int *heapArray = malloc(memoryreq);

    for (size_t i=0;  i<lenght; i++)
   { heapArray[i] = (int)i*100;}
    
 for (size_t i=0;  i<lenght; i++)
    {
     printf("\nheapArray:[%lld] %d",i,heapArray[i]);
     printf("\nadress of headarray:[%lld] %p",i, (void*)heapArray[i]);

    }
    
    free(heapArray);
    //inf. time to run
    return 0;
}