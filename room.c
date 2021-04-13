#include<stdio.h>
#include "Branch.h"
#include <string.h>

room r[100];
int count3=0;
void init_rooms()
{
har *fileName = "C:\\Users\\JYOTSNA\\MINI_PROJECT\\Room.txt";
ReadFile2(fileName);
}

void ReadFile_rooms(char *fileName)
{
    FILE *filePtr ;
    filePtr= fopen(fileName, "r");
   // int  i = 0;

    if (filePtr  == NULL)
    {
        printf("Error : Unable to open %s for reading\n");
       // return -1;
    }

    while (fscanf(filePtr, "%d%d%d%s", &r[count3].floor,&r[count3].room_num, &r[count3].booked,r[count3].booked_by) != EOF)
    {
        count++;
    }

    fclose(filePtr);
}
room getdetailsroom(int roomn)
{
    room d={0,0,0,""};
    for(int i=0;i<count3;i++)
    {
        if(r[i].room_num==roomn)
        {
            return r[i];
        }
    }
    return d;
}
void notbooked(room *nb)
{
    int j=0;
    for(int i=0;i<count3;i++)
    {
        if(r[i].booked==0)
        {
            *(nb+j)=r[i];
            j++;
        }
    }
    *k=j;
}


void booking()