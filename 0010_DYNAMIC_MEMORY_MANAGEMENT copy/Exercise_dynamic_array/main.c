#include <stdio.h>

#include <stdlib.h>

int main(void) 
{
    int n;
    while (1)
    {printf("plz enter a positiv integer (n größer als 0):");
        if (scanf("%d",&n)!=1) // wenn nicht postiv integer eingegeben wird.
        { printf("invald number.\n");
        return 1;}// print invald num und weiter while durchführen

        if (n>0) break;
        printf("n muss ein postiver Interger sein");
        // wenn n postiv sein, dann break die schleife, sonst print n)

    }



    






    return 0;
}
