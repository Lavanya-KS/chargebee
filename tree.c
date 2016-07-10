#include<stdio.h>
void main()
{
char name={"TREE"};
int thickness;
int branches;
char colour[];
int angle;
printf("enter the thickness of the tree");
scanf("%d",&thickness);
printf("enter the branches of the tree");
scanf("%d",branches);
printf("enter the color of the tree");
scanf("%c",&colour);
printf("enter the angle of the tree");
scanf("%d",&angle);
if(thickness>23)
{
if (branches>20)
{
if(angle<=45)
{
printf("\n the angle of the tree is:%d",angle);
}
printf("\n the branches of the tree is:%d",branches);
}
printf("\n the thickness of the tree is:%d",thickness);
}
getch();
}
