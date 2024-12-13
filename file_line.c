#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char data[250];
    int i;

    fp = fopen("school.txt", "r");

    if (fp == NULL)
    {
        printf("\n Cannot open file. \n");
        return 1;
    }

    for (i = 1; fgets (data, 250, fp)!= NULL; i++)
    {
        printf("%d : %s", i, data);
    }

    fclose (fp);
    return 0;
}

