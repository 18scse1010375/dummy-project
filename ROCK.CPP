#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int You,Computer;
int menu()
{
int ch;
printf("\n1:Rock");
printf("\n2:Paper\n");
printf("3:Sciccisor");
printf("\n4:exit\n");
printf("enter your choice:");
scanf("%d",&ch);
return(ch);
}
void makeLogic()
{
switch(You)
{
case 1:
{
if(Computer==2)
{
printf("Sorry!You have lost the Game\n");
printf("\n\nYou=%d Computer=%d",You,Computer);
}
else if(Computer==1)
{
printf("match draw\n");
printf("You=%d Computer=%d",You,Computer);
}
else if(Computer==3)
{
printf("Congratulation!You Won the game");
printf("\n\nYou=%d Computer=%d",You,Computer);
}
break;
}
case 2:
{
if(Computer==1)
{
printf("Congratulation!You Won the game");
printf("\n\nYou=%d Computer=%d",You,Computer);
}
else if(Computer==2)
{
printf("Game Draw");
printf("\n\nYou=%d Computer=%d",You,Computer);
}
else if(Computer==3)
{
printf("Sorry!You Lost the game");
printf("You=%d Computer=%d",You,Computer);
}
break;
case 3:
if(Computer==1)
{
printf("Sorry!You Lost the game");
printf("You=%d Computer=%d",You,Computer);
}
else if(Computer==2)
{
printf("Congratulation!You Won the game");
printf("You=%d Computer=%d",You,Computer);
}
else if(Computer==3)
{
printf("Game draw");
printf("\n\nYou=%d Computer=%d",You,Computer);
}
break;
}
case 4:
exit(0);
default:
printf("Invalid choice");
 }
 }

void setup()
{
label1:
Computer=rand()%4 ;
if(Computer==0)
goto label1;
You=menu();
}
void main()
{
while(1)
{
clrscr();
setup();
makeLogic();


getch();
}
}