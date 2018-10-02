// tic tac toe game

#include<stdio.h>
#include<conio.h>
void check(char,char);

char a[9]={'1','2','3','4','5','6','7','8','9'};
void show()
{
    printf("\n\t\t\tTic Tac Toe Game:\n");

    printf("\n\n\t\t\t---|---|--- \n");
    printf("\t\t\t %c | %c | %c \n",a[0],a[1],a[2]);
    printf("\t\t\t---|---|---\n");
    printf("\t\t\t %c | %c | %c \n",a[3],a[4],a[5]);
    printf("\t\t\t---|---|---\n");
    printf("\t\t\t %c | %c | %c \n",a[6],a[7],a[8]);


}

void inputSymbol()
{
    printf("\nplayer 1 symbol : x");
    printf("\nplayer 2 symbol : 0");
}


int count=0;

void play()
{
    char p,s;
    printf("\nenter position where you want to write :\n");
    fflush(stdin);
    scanf("%c",&p);
    fflush(stdin);
    printf("\nenter symbol for the player : \n");
    scanf("%c",&s);
    count++;
    check(p,s);
}

void check(char P, char S)
{
    int i;
    for(i=0;i<9;i++)
    {
        if(a[i]==P)
        {
            a[i]=S;
        }
    }
}

int end()
{
    if( (a[0]=='x'&&a[1]=='x'&&a[2]=='x') || (a[0]=='x'&&a[3]=='x'&&a[6]=='x')|| (a[0]=='x'&&a[4]=='x'&&a[8]=='x') )
        return(100);
    else if( (a[0]=='0'&&a[1]=='0'&&a[2]=='0') || (a[0]=='0'&&a[3]=='0'&&a[6]=='0')|| (a[0]=='0'&&a[4]=='0'&&a[8]=='0') )
        return(200);
    else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x')
        return(100);
    else if(a[1]=='0'&&a[4]=='0'&&a[7]=='0')
        return(200);
    else if(a[2]=='x'&&a[5]=='x'&&a[8]=='x')
        return(100);
    else if(a[2]=='0'&&a[5]=='0'&&a[8]=='0')
        return(200);
    else if(a[3]=='x'&&a[4]=='x'&&a[5]=='x')
        return(100);
    else if(a[3]=='0'&&a[4]=='0'&&a[5]=='0')
        return(200);
    else if(a[2]=='x'&&a[4]=='x'&&a[6]=='x')
        return(100);
    else if(a[2]=='0'&&a[4]=='0'&&a[6]=='0')
        return(200);
    else if(a[6]=='x'&&a[7]=='x'&&a[8]=='x')
        return(100);
    else if(a[6]=='0'&&a[7]=='0'&&a[8]=='0')
        return(200);

    return(300);
}

void main()
{
    int k;
    char ch;

    label2:
    system("cls");
    show();
    inputSymbol();
    play();

    label:
    system("cls");
    show();
    play();
    k=end();
    system("cls");
    show();

    if(count<9)
    {
        if(k==100)
        {
            printf("\nplayer 1 won\n");
            count=0;
        }
        else if(k==200)
        {
            printf("\nplayer 2 won\n");
            count=0;
        }
        else
            goto label;
    }
    else
    {
        printf("game draw");
        count=0;
    }
    printf("\ndo you want to continue :  enter y for yes and n for no :");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
    {
        a[0]='1';
        a[1]='2';
        a[2]='3';
        a[3]='4';
        a[4]='5';
        a[5]='6';
        a[6]='7';
        a[7]='8';
        a[8]='9';
        goto label2;
    }
    getch();

}
