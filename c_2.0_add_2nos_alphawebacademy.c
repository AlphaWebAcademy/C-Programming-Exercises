// Jyothi Jeyakumar from 
// Alpha Web Academy Rajapalayam
// Datatypes, Format Specifier, Memory Allocations
// Variables, Arithmetic Operators + - * /

#include<stdio.h>
int main(){
	int firstNumber, secondNumber, totalValue;
	printf("Enter First Number:\t");
  	scanf("%d", &firstNumber);   
	printf("Enter Second Number:\t");
  	scanf("%d", &secondNumber);   
  	totalValue = firstNumber + secondNumber;
  	printf("Size: %d", sizeof(firstNumber));
	printf("\n\n\n|------------------------------------------------|\n");
	printf("|               Addition Calculator              |\n");
	printf("|------------------------------------------------|\n");
	printf("|         First Number    :         %5d        |\n",firstNumber);
	printf("|                                                |\n");
	printf("|         Second Number   :         %5d        |\n",secondNumber);
	printf("|------------------------------------------------|\n");
  	printf("|       The sum of given two number is %5d.    |\n",totalValue);
	printf("|------------------------------------------------|\n\n\n");
  	return 0;
  	
}



/*
Datatypes	Format Specifier	Memory occupied
int   		%d		2bytes		-32768 to +32767	
unsigned int
long  		%ld		4bytes
float  		%f		4bytes
double		%lf		8bytes
char  		%c     		1 byte
 

Home Work Given: Prepare a Arithmetic Calculator

*/
