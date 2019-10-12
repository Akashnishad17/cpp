#include<stdio.h>
//rand() % (max_number + 1 - minimum_number) + minimum_number
int main()
{
    int i,j;
    char a[100];
    for(j=1;j<=100;j++);
        a[j]=' ';
    printf("\t\tSnake Game\n");
    printf("Player1:P\n\n");
    printf("\n\t\t ---------------------------------------------------\n");
    printf("\t\t|");
    for(i=100;i>=91;i--)
        printf(" %d |",i);
    printf("\n\t\t |");
    for(i=1;i<=10;i++)
        printf("    |");
    printf("\n\t\t ---------------------------------------------------\n");
    printf("\t\t |");
    for(i=81;i<=90;i++)
        printf(" %d |",i);
        printf("\n\t\t |");
    for(i=1;i<=10;i++)
        printf("    |");
    printf("\n\t\t ---------------------------------------------------\n");
    printf("\t\t |");
    for(i=80;i>=71;i--)
        printf(" %d |",i);
        printf("\n\t\t |");
    for(i=1;i<=10;i++)
        printf("    |");
    printf("\n\t\t ---------------------------------------------------\n");
    printf("\t\t |");
    for(i=61;i<=70;i++)
        printf(" %d |",i);
        printf("\n\t\t |");
    for(i=1;i<=10;i++)
        printf("    |");
    printf("\n\t\t ---------------------------------------------------\n");
    printf("\t\t |");
    for(i=60;i>=51;i--)
        printf(" %d |",i);
        printf("\n\t\t |");
    for(i=1;i<=10;i++)
        printf("    |");
    printf("\n\t\t ---------------------------------------------------\n");
    printf("\t\t |");
    for(i=41;i<=50;i++)
        printf(" %d |",i);
        printf("\n\t\t |");
    for(i=1;i<=10;i++)
        printf("    |");
    printf("\n\t\t ---------------------------------------------------\n");
    printf("\t\t |");
    for(i=40;i>=31;i--)
        printf(" %d |",i);
        printf("\n\t\t |");
    for(i=1;i<=10;i++)
        printf("    |");
    printf("\n\t\t ---------------------------------------------------\n");
    printf("\t\t |");
    for(i=21;i<=30;i++)
        printf(" %d |",i);
        printf("\n\t\t |");
    for(i=1;i<=10;i++)
        printf("    |");
    printf("\n\t\t ---------------------------------------------------\n");
    printf("\t\t |");
    for(i=20;i>=11;i--)
        printf(" %d |",i);
        printf("\n\t\t |");
    for(i=1;i<=10;i++)
        printf("    |");
    printf("\n\t\t ---------------------------------------------------\n");
    printf("\t\t |");
    for(i=1;i<=10;i++)
        printf("  %d |",i);
        printf("\n\t\t |");
    for(i=1;i<=10;i++)
        printf("    |");
    printf("\n\t\t ---------------------------------------------------\n");
}
