#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include "student.h"

typedef FILE * file;

int main()
{
    Stu *head = NULL;
    file fp = fopen("students.dat", "r");
    if(fp == NULL)
    {
        printf("FIle opening failed!!\n\n");
    }
    else{
        int r;
        char s[20];
        float p;

        while((fscanf(fp,"%d %s %f", &r,s,&p))==3)
        {
            add_new(&head, r,s,p);
        }
    }
    char ch;
    while(1){
        printf("************* STUDENT RECORD MENU ****************\n\n");
        printf("a/A: Add new\nd/D: Delete a record\ns/S: Show the List\nm/M: Modify a record\nv/v: Save records\ne/E: Exit\nt/T: Sort Records\n l/L: Delete all records\nr/R: Reverse the list\n\n");
        printf("Enter your choice: \n");
    printf("---------------------------------------------------\n");
        scanf(" %c", &ch);
        ch=tolower(ch);
        switch (ch)
        {
            case 'a':
                {
                    int r;
                    char s[20];
                    float p;

                    printf("Enter name:\n");
                    scanf("%19s",s);

                    printf("Enter percentage:\n");
                    scanf("%f",&p);

                    r = no(head);
                    add_new(&head,r,s,p);
                    break;
                }
            case 'd':
                {
                    char op;
                    printf("r/R: Delete by roll no\nn/N: Delete by name\n\n");
                    printf("Enter your choice:\n");
                    scanf(" %c",&op);
    printf("---------------------------------------------------\n");
                    op=tolower(op);
                    switch(op)
                    {
                        case'r':
                            {
                                int delr;
                                printf("Enter the rno to delete: \n ");
                                scanf("%d",&delr);
                                del_by_rno(&head, delr);
                                break;
                            }
                        case 'n':
                            {
                                char s[20];
                                printf("Enter the name to delete: \n");
                                scanf("%19s",s);
                                del_by_name(&head,s);
                                break;
                            }

                        default:
                            printf("INVALID OPTION!!\n");
                            break;

                    }
                    break;
                }
            case 'm':
                {
                    char op;
                    printf("r/R: Modify by roll no\nn/N: Modify by name\np/P: Modify by percentage\n\n");
                    printf("Enter your choice:\n");
                    scanf(" %c",&op);
    printf("---------------------------------------------------\n");
                    op=tolower(op);
                    switch(op)
                    {
                        case'r':
                            {
                                int modr;
                                printf("Enter the rno to modify: \n ");
                                scanf("%d",&modr);
                                mod_by_rno(&head, modr);
                                break;
                            }
                        case 'n':
                            {
                                char s[20];
                                printf("Enter the name to modify: \n");
                                scanf("%19s",s);
                                mod_by_name(&head,s);
                                break;
                            }
                        case'p':
                            {
                                float modp;
                                printf("Enter the percentage to modify: \n ");
                                scanf("%f",&modp);
                                mod_by_rno(&head, modp);
                                break;
                            }

                        default:
                            printf("INVALID OPTION!!\n");
                            break;
                            ;
                    }
                    break;

                }

            case 's':
                {
                    show(head);
                    break;
                }
            case 'v':
                {
                    save(head);
                    break;
                }
            case 'e':
                {
                    char op;
                    printf("s/S: Save and exit\ne/E: Do not save and Exit\n\n");
                    printf("Enter your choice:\n");
                    scanf(" %c",&op);
    printf("---------------------------------------------------\n");
                    op=tolower(op);
                    switch(op)
                    {
                        case's':
                            {
                                save(head);
                                del_all(&head);
                                return 0;
                                printf("Thank You!!\n\n");
                                break;
                            }
                        case 'e':
                            {
                                del_all(&head);
                                printf("Thank You!!\n\n");
                                return 0;
                            }

                        default:
                            printf("INVALID OPTION!!\n");
                            break;

                    }
                    break;

                }
            case 't':
                {

                    char op;
                    printf("p/P: Sort by percentage\nn/N: Sort by name\n\n");
                    printf("Enter your choice:\n");
                    scanf(" %c",&op);
    printf("---------------------------------------------------\n");
                    op=tolower(op);
                    switch(op)
                    {
                        case'p':
                            {
                                sort_per(&head);
                                break;
                            }
                        case 'n':
                            {
                                sort_name(&head);
                                break;
                            }

                        default:
                            printf("INVALID OPTION!!\n");
                            break;

                    }
                    break;
                }
            case 'l':
                {
                    del_all(&head);
                    break;
                }
            case 'r':
                {
                    reverse(&head);
                    break;
                }
            default:
                printf("INVALID OPTION!!\n");
                break;

        }
    }
}
