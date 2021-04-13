#include "Branch.h"
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

professor p[100];
int count=0;
void init_professors()
{
    char *fileName = "C:\\Users\\JYOTSNA\\MINI_PROJECT\\Professor.txt";
ReadFile1(fileName);
}
void ReadFile1(char *fileName)
{
    FILE *filePtr ;
    filePtr= fopen(fileName, "r");
   // int  i = 0;

    if (filePtr  == NULL)
    {
        printf("Error : Unable to open %s for reading\n");
       // return -1;
    }

    while (fscanf(filePtr, "%s%s%d%d", p[count].name,p[count].degree, &p[count].did,&p[count].pid) != EOF)
    {
        count++;
    }

    fclose(filePtr);
}

professor getdetailsprof(int id)
{
    professor d={"","",0,0};
    for(int i=0;i<count;i++)
    {
        if(p[i].pid==id)
        {
            return p[i];
        }
    }
    return d;
}

 