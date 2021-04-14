#include<stdio.h>
#include "Branch.h"
#include <string.h>
#include<stdlib.h>

committee c[100];
int counter=0;
void init_committee()
{
    char *fileName = "C:\\Users\\JYOTSNA\\MINI_PROJECT\\Committee.txt";
ReadFile_committee(fileName);
}
void ReadFile_committee(char *fileName)
{
    FILE *filePtr ;
    filePtr= fopen(fileName , "r");
   // int  i = 0;

    if (filePtr  == NULL)
    {
        printf("Error : Unable to open %s for reading\n");
       // return -1;
    }

    while (fscanf(filePtr, "%s%d%s", c[counter].name,&c[counter].cid, c[counter].cpname) != EOF)
    {
        counter++;
    }

    fclose(filePtr);
}
committee getdetailscommittee(int id)
{
     committee d={"",0,""};
    for(int i=0;i<counter;i++)
    {
        if(c[i].cid==id)
        {
            return c[i];
        }
    }
    return d;
}