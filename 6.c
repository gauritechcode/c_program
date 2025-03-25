#include<stdio.h>
void main()
{
int a;
printf("Enter the value");
scanf("%d",&a);

for(int i=1; i<=a; i++)
{
if(i==4 || i==7)
{
continue;
}
printf("%d\n",i);



}






}
