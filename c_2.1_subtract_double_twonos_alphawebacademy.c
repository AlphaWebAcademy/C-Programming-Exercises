// Jyothi Jeyakumar from 
// Alpha Web Academy Rajapalayam
// Subtraction of two double values

#include<stdio.h>
// #include<conio.h>  
int main()
{
 double num1, num2, difference; // if it is 32-bit system 6 bytes will be allotted 
 //for 64-bit system 12 bytes will be allotted
 // int a,b,c;   // int number1,number2, total;
 
 // clrscr();    // clrscr() no need in Dev C++ Compiler
 
 //if you want to read data from enduser
 printf("\nEnter two double values Seperated by the symbol (,) Comma: \n\n");
 scanf("%lf,%lf", &num1, &num2);  // & => address operator

 difference =  num1 - num2;

 printf("\n\nNumber 1 is %0.2lf\n\n",num1);
 printf("Number 2 is %0.2lf\n\n",num2);
 
 printf("\n\nThe difference of given double values is %0.2lf\n\n",difference);
 return 0;
}
