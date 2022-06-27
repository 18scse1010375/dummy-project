#include<stdio.h>
#include<conio.h>
char a[10]={'1','2','3','4','5','6','7','8','9'};
void check(char,char);
void name()
{
printf("\n\t Tic Tac Toe\n");
}
void show()
{
printf("\n\n\t\t\t%c  %c  %c",a[0],a[1],a[2]);
printf("\n\n\t\t\t%c  %c  %c",a[3],a[4],a[5]);
printf("\n\n\t\t\t%c  %c  %c",a[6],a[7],a[8]);
}
void inputSymbol()
{
printf("\n\nPlayer1 Symbol=%c",'X');
printf("\n\nPlayer2 Symbol=%c",'0');
}
void start()
{
char pa;
printf("\n\n\nWhich player will start the game:");
scanf("%c",&pa);
}
void play()
{
char p,s;
printf("\nenter position and symbol you want to message:\n");
fflush(stdin);
scanf("%c",&p);
fflush(stdin);
scanf("%c",&s);
check(p,s);
}
void check(char p,char s)
{
int t,i;
for(i=0;i<=8;i++)
{
if(a[i]==p)
a[i]=s;
}
}
int end()
{
if( (a[0]=='X'&&a[1]=='X'&&a[2]=='X') || (a[0]=='X'&&a[3]=='X'&&a[6]=='X') || (a[0]=='X'&&a[4]=='X'&&a[8]=='X') )
return(100);
else if( (a[0]=='0'&&a[1]=='0'&&a[2]=='0') || (a[0]=='0'&&a[3]=='0'&&a[6]=='0') || (a[0]=='0'&&a[4]=='0'&&a[8]=='0') )
return(200);
else if(a[2]=='X'&&a[4]=='X'&&a[6]== 'X')
return(100);
else if(a[2]=='0'&&a[4]=='0'&&a[6]== '0')
return(200);
else if( (a[1]=='X'&&a[4]=='X'&&a[7]=='X') || (a[2]=='X'&&a[5]=='X'&&a[8]=='X') )
return(100);
else if( (a[1]=='0'&&a[4]=='0'&&a[7]=='0') || (a[2]=='0'&&a[5]=='0'&&a[8]=='0')   )
return(200);
else if( (a[3]=='X'&&a[4]=='X'&&a[5]=='X')||(a[6]=='X'&&a[7]=='X'&&a[8]=='X') )
return(100);
else if( (a[3]=='0'&&a[4]=='0'&&a[5]=='0')||(a[6]=='0'&&a[7]=='0'&&a[8]=='0')  )
return(200);
else
return(300);
}

void main()
{
int k;
char ch;
labell:
clrscr();
name();
show();
inputSymbol();
start();
play();
label:
clrscr();
show();
play();
k=end();
if(k==100)
printf("player1 won\n");
else if(k==200)
printf("player2 Won\n");
else
goto label;
printf("do you want to continue:\n");
fflush(stdin);
scanf("%c",&ch);
if(ch=='y' || ch=='Y')
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
goto labell;
}


getch();
}