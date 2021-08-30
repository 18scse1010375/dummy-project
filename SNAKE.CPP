#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int width=20,height=20;
int x,y,fruitX,fruitY,score;
void setup()
{
x=width/2;
y=height/2;
label1:
fruitX=rand()%20;
if(fruitX==0)
goto label1;
label2:
fruitY=rand()%20;
if(fruitY==0)
goto label2;
}
void draw()
{
int i,j;
for(i=0;i<height;i++)
{
for(j=0;j<width;j++)
{  if(i==0||i==height-1||j==0||j==width-1)
  printf("*");
  else
    {
    if(i==x&&j==y)
    printf("O");
    else if(i==fruitX&&j==fruitY)
    printf("F");
    else
  printf(" ");
     }
  }
  printf("\n");
}
}

int main()
{
clrscr();
setup();
draw();
getch();
}