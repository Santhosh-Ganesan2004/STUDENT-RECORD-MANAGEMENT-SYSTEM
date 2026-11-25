#include<stdio.h>
#include<stdlib.h>
#include "student.h"

typedef FILE * file;

void save(Stu *head)
{
    file fp = fopen("students.dat", "w");
    if(fp == NULL)
    {
        printf("File opening failed!! \n\n");
        return;
    }
    while(head != NULL){

        fprintf(fp,"%d %s %0.2f\n",head->rno,head->n,head->p);
        head=head->next;
    }
    printf("Saved Successfully!!\n\n");
    fclose(fp);
}

