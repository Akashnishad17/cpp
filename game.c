#include<stdio.h>
main()
{
    int i,x;
    char a[10],ch;
    start:
        system("cls");
    for(i=1;i<10;i++)
        a[i]=' ';
    printf("\t\tTic Tac Toe\n");
    printf("Player1:X\nPlayer2:O\n");
    printf("\n\t\t %c | %c | %c\n",a[1],a[2],a[3]);
        printf("\t\t-----------");
    printf("\n\t\t %c | %c | %c\n",a[4],a[5],a[6]);
        printf("\t\t-----------");
    printf("\n\t\t %c | %c | %c\n",a[7],a[8],a[9]);
    int choice,count=0;
    while(count<9)
    {
        again:
    if(count%2==0)
        {printf("\nEnter for Player X:"); ch='X';}
    else
        {printf("\nEnter for player O:"); ch='O';}
    scanf("%d",&choice);
    if(choice==0 || choice>9)
    {
        printf("Invalid location\n");
        goto again;
    }
    if(count%2==0)
    for(i=1;i<10;i++)
    {
       // if(a[i]=!' ')
        {
         //   printf("Already have location\n");
//goto again;
        }
        if(choice==i)
            a[i]='X';
    }
    else
        for(i=1;i<10;i++)
    {
        //if(a[i]=!' ')
        {
           // printf("Already have location\n");
            //goto again;
        }
        if(choice==i)
            a[i]='O';
    }
    system("cls");
    printf("\t\tTic Tac Toe\n");
    printf("Player1:X\nPlayer2:O\n");
    printf("\n\t\t %c | %c | %c\n",a[1],a[2],a[3]);
        printf("\t\t-----------");
    printf("\n\t\t %c | %c | %c\n",a[4],a[5],a[6]);
        printf("\t\t-----------");
    printf("\n\t\t %c | %c | %c\n",a[7],a[8],a[9]);
    count++;
    if(a[1]==a[2] && a[2]==a[3] && a[3]==ch)
        {printf("Winner is %c",ch); goto end;}
    if(a[4]==a[5] && a[5]==a[6] && a[6]==ch)
        {printf("Winner is %c",ch); goto end;}
    if(a[7]==a[8] && a[8]==a[9] && a[9]==ch)
        {printf("winner is %c",ch); goto end;}
    if(a[1]==a[4] && a[4]==a[7] && a[7]==ch)
        {printf("Winner is %c",ch); goto end;}
    if(a[2]==a[5] && a[5]==a[8] && a[8]==ch)
        {printf("Winner is %c",ch); goto end;}
    if(a[3]==a[6] && a[6]==a[9] && a[9]==ch)
        {printf("Winner is %c",ch); goto end;}
    if(a[1]==a[5] && a[5]==a[9] && a[9]==ch)
        {printf("Winner is %c",ch); goto end;}
    if(a[3]==a[5] && a[5]==a[7] && a[7]==ch)
        {printf("Winner is %c",ch); goto end;}
    }
    printf("Match Drawn\n");
    end:
    printf("\nDo you want to play again press 1: ");
    scanf("%d",&x);
    if(x==1)
        goto start;
    return 0;
}
