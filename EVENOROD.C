# even-or-odd
#include<stdio.h>
int main()
{
int num;
clrscr();
printf("Enter any number to check even or odd:");
scanf("%d",&num);
if(num%2==0)
printf("\n Number is even");
else
printf("\n Number is odd");
getch();
}
