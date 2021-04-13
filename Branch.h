#ifndef __BRANCH_H__
#define __BRANCH_H__

typedef struct ETRX
{
    char name[100];
    int id;
    int floor;
    char hod[50];
}ETRX;
typedef struct CS
{
    char name[100];
    int id;
    int floor;
    char hod[50];
}CS;
typedef struct EXTC
{
    char name[100];
    int id;
    int floor;
    char hod[50];
}EXTC;
typedef struct IT
{
    char name[100];
    int id;
    int floor;
    char hod[50];
}IT;
typedef struct subject
{
    char name[100];
    int sid;
    int did;
int pid;
}subject;
typedef struct professor
{
    char name[100];
    char degree[50];
 int did;
int pid;

}professor;

void init_subjects();
void ReadFile(char *fileName);
subject getdetails(int id);

void init_professors();
void ReadFile1(char *fileName);
professor getdetailsprof(int id);

void info(char dept[100]);
#endif