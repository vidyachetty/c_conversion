#include<stdio.h>
int main()
{
int num;
printf("enter num:");
scanf("%d",&num);
int bin[10];
int i=0,j;
while(num>0)
{
bin[i]=num%2;
num=num/2;
i++;
}
for(j=i-1;j>=0;j--)
printf("%d",bin[j]);
}
