// This sample swap of values program is 
//created by Alpha Web Academy
// Jyothi Jeyakumar 

#include<stdio.h>
int main(){
	int  n1, n2, temp;	 // 4 4 4 
	
 	printf("\nEnter any two values Seperated by comma: \n\n");
 	scanf("%d,%d", &n1, &n2);  // 10, 20
 	
 	printf("\n\n");
	printf("Before Exchange:\n");
	printf("----------------\n");
	printf("Number 1 = %d\n", n1);
	printf("Number 2 = %d\n\n", n2);
	
	temp =  n1;
	n1   =  n2;
	n2   =  temp;
	
	printf("After Exchange:\n");
	printf("----------------\n");
	printf("Number 1 = %d\n", n1);
	printf("Number 2 = %d\n\n", n2);
	return 0;
} 






