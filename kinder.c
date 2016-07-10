#include <stdio.h>
#include<conio.h>
int main()
{
    char temp,name[100];
  	int i,j,num,noc,nod,asc=97,days;
  	clrscr();
	  printf("Enter the value of n: ");
		scanf("%d",&num);        
		noc=2*num;
		nod=noc-1;
		for(i=0;i<noc;i++)
		  {
				name[i]=asc;
				asc++;
			}
			days=nod;
			j=(2*num)-1;
		  while(days!=0)
			{
		  	printf("\n The children pairs for day %d",days);
				for(int i=0;i<2*num;i++)
				{
					printf("\n %c %c",name[i],name[j]);
					j--;
				}
				for(int i=0;i<2*num;i++)
				{ 
					if(i==0)
					{
						temp=name[i];
					}
					name[i]=name[i+1];
					if(i==(2*num)-1)
					{
					  name[i]=temp;
					}
				}
				days--;
		 }
		 getch();
		return 0;
	}
