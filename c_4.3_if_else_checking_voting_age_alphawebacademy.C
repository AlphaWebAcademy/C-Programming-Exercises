#include<stdio.h>
#include<conio.h>

void main(){
     int age;
     clrscr();
     printf("\n Enter the age: ");
     scanf("%d",&age);
     if(age<0)
     {
       printf("\n invalid age");
     }
     else if(age<=12)
     {
       printf("\n Still a child");
     }
     else if(age<=17)
     {
       printf("\n Still a teenager");
     }
     else if(age==18)
     {
       printf("\n You are in progress");
     }
     else if(age>18)
     {
       printf("\n  Eligible for voting");
     }

  getch();
}
