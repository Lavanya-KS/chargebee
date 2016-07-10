#include <stdio.h>
int main(void)
{
int num,i,j=0,b[100],a[100];
printf("\n Enter the value");
scanf("%d",&num);
for(i=0;i<num;i++)
scanf("%d",&a[i]);
for(i=0;i<num;i++)
{
int t=a[i],c=0;
while(t)
{
int rem=t%2;
t=t/2;
c++;
}
b[j++]=c;
 }
for(i=0;i<num;i++)
{
for(j=0;j<num;j++)
{
if(b[i]>b[j])
{
int temp=b[i];
b[i]=b[j];
b[j]=temp;
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
else if(b[i]==b[j])
{
if(a[i]>a[j])
{
int temp=b[i];
b[i]=b[j];
b[j]=temp;
temp=a[i];
a[i]=a[j];
a[j]=temp;
}	
}
}
}
printf("\n The order is");
for(i=0;i<num;i++)
printf("%d\t",a[i]);
return 0;
}
