#include<stdio.h>
#include<stdlib.h>

typedef struct Student{
    int rno;
    char n[20];
    float p;
    struct Student *next;
}Stu;

Stu * add_new(Stu ** head , int r, char * name, float per);
int no(Stu *head);
void del_by_rno(Stu **head, int r);
void del_by_name(Stu ** head, char *name);
void del_all(Stu **head);
void reverse(Stu ** head);
void mod_by_rno(Stu **head, int r);
void mod_by_name(Stu **head, char * name);
void mod_by_per(Stu **head, float pp);
void show(Stu * head);
void sort_name(Stu **head);
void sort_per(Stu **head);
void save(Stu *head);
