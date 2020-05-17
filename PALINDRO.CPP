#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int a,n;
int rev=0;

printf("Enter no.:\n");
scanf("%d",&n);
a=n;

while(a!=0)
{
rev=rev*10;
rev=rev + a%10;
a=a/10;
}
 if(n==rev)
 {
 printf("%d is palindorme",n);
 }
 else
 {
 printf("%d is not palindrome",n);
 }



getch();
}

