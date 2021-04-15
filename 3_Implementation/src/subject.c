#include "Branch.h"
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

subject s[100];
int count=0;
void init_subjects()
{
    char *fileName = "Subject.txt";
ReadFile(fileName);
}
void ReadFile(char *fileName)
{
    FILE *filePtr ;
    filePtr= fopen(fileName, "r");
   // int  i = 0;

    if (filePtr  == NULL)
    {
        printf("Error : Unable to open file for reading\n");
       // return -1;
    }

    while (fscanf(filePtr, "%s%d%d%d", s[count].name,&s[count].sid, &s[count].did,&s[count].pid) != EOF)
    {
        count++;
    }

    fclose(filePtr);
}

subject getdetails(int id)
{
    subject d={"",0,0,0};
    for(int i=0;i<count;i++)
    {
        if(s[i].sid==id)
        {
            return s[i];
        }
    }
    return d;
}

 