#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int i=0,count=0,count1=0,count2=0;
clrscr();
printf('Enter the string");
scanf("%s",a);
while(a[i] != '\0')
{
 if((a[i] >= 'a' && a[i] =< 'z') || (a[i] >= 'A' && a[i] =< 'Z'))
 {
 count++;
 }
 else if(a[i] => '0' && a[i] =< '9')
 {
 count1++;
 }
 else
 {
 count2++;
 }
 i++;
}
printf("The number os characters in string is %d",count);
printf("The number of numbers in string is %d",count1);
printf("The number of alphanumerics in string is %d",count2++);
getch();
}
