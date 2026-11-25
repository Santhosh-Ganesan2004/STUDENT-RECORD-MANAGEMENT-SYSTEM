#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"student.h"

void mod_by_rno(Stu **head, int r)
{
    Stu * mod = *head;
    char ch;
    char s[20];
    float per;
    if(mod == NULL)
    {
        printf("LinkedList is empty \n\n");
        return;
    }
    while(mod != NULL)
    {
        if(mod->rno == r)
        {
            printf("%d \t %s \t %0.2f\n\n", mod->rno,mod->n,mod->p);
            printf("-----------------------------------------------------");
            printf("Record found!\nPress n for modifying name\nPress p for modifying percentage\n");
            scanf(" %c", &ch);
            if(ch == 'n' || ch == 'N')
            {
                printf("Enter the new name: \n");
                scanf("%19s",s);
                strcpy(mod->n,s);
                printf("Name modified successfully \n\n");
    printf("---------------------------------------------------\n");
                return;
            }
            else if(ch == 'p' || ch == 'P')
            {
                printf("Enter the new percentage: \n");
                scanf("%f", &per);
                mod->p = per;
                printf("Percentage modified successfully \n\n");
    printf("---------------------------------------------------\n");
                return;
            }
            else
            {
                printf("INVALID OPTION\n\n");
                return;
            }
        }
        mod= mod->next;
    }
    printf("Record not founf!!\n\n");
}

void mod_by_name(Stu ** head, char *name)
{

    Stu * mod = *head;
    char ch;
    char s[20];
    float per;
    int c =0;
    Stu * arr[100];
    if(mod == NULL)
    {
        printf("LinkedList is empty \n\n");
        return;
    }
    while(mod != NULL)
    {
        if(strcmp(mod->n , name)==0)
        {

            arr[c] = mod;
            c++;
        }
        mod= mod->next;
    }
    if(c ==0)
    {
    printf("Record not found!!\n\n");
    return;
    }
    printf("%d records found!\n\n",c);
    printf("---------------------------------------------------\n");
    int rr;
    for(int i=0;i<c;i++)
    {
        printf("%d \t %s \t %.2f\n",arr[i]->rno, arr[i]->n,arr[i]->p);
    }

    printf("---------------------------------------------------\n");
    printf("Enter the roll number to modify!!\n");
    scanf("%d", &rr);
    for(int i=0;i<c;i++)
    {
        if(arr[i]->rno == rr)
        {
            printf("Press n for modifying name\nPress p for modifying percentage\n");
            scanf(" %c", &ch);
            if(ch == 'n' || ch == 'N')
            {
                printf("Enter the new name: \n");
                scanf("%19s",s);
                strcpy(arr[i]->n,s);
                printf("Name modified successfully \n\n");
    printf("---------------------------------------------------\n");
                return;
            }
            else if(ch == 'p' || ch == 'P')
            {
                printf("Enter the new percentage: \n");
                scanf("%f", &per);
                arr[i]->p = per;
                printf("Percentage modified successfully \n\n");
    printf("---------------------------------------------------\n");
                return;
            }
            else
            {
                printf("INVALID OPTION\n\n");
                return;
            }
        }

    }
    printf("Record not found!!\n\n");
}

void mod_by_per(Stu ** head, float pp)
{

    Stu * mod = *head;
    char ch;
    char s[20];
    float per;
    int c =0;
    Stu * arr[100];
    if(mod == NULL)
    {
        printf("LinkedList is empty \n\n");
        return;
    }
    while(mod != NULL)
    {
        if(mod->p == pp)
        {

            arr[c] = mod;
            c++;
        }
        mod= mod->next;
    }
    if(c ==0)
    {
    printf("Record not found!!\n\n");
    return;
    }
    printf("%d records found!\n\n",c);
    printf("---------------------------------------------------\n");
    int rr;

    for(int i=0;i<c;i++)
    {
        printf("%d \t %s \t %.2f\n",arr[i]->rno, arr[i]->n,arr[i]->p);
    }

    printf("---------------------------------------------------\n");
    printf("Enter the roll number to modify!!\n");
    scanf("%d", &rr);
    for(int i=0;i<c;i++)
    {
        if(arr[i]->rno == rr)
        {
            printf("Press n for modifying name\nPress p for modifying percentage\n");
            scanf(" %c", &ch);
            if(ch == 'n' || ch == 'N')
            {
                printf("Enter the new name: \n");
                scanf("%19s",s);
                strcpy(arr[i]->n,s);
                printf("Name modified successfully \n\n");
    printf("---------------------------------------------------\n");
                return;
            }
            else if(ch == 'p' || ch == 'P')
            {
                printf("Enter the new percentage: \n");
                scanf("%f", &per);
                arr[i]->p = per;
                printf("Percentage modified successfully \n\n");
    printf("---------------------------------------------------\n");
                return;
            }
            else
            {
                printf("INVALID OPTION\n\n");
                return;
            }
        }

    }
    printf("Record not found!!\n\n");
}
