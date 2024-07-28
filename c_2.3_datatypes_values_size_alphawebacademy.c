// Jyothi Jeyakumar from 
// Alpha Web Academy Rajapalayam
// Sample Datatypes and its size

#include<stdio.h>
int main(){
	int n1, n2, n3; 
	double d1=59.03, d2=45.329, d3=98.52 ;
	long v1; 	
	printf("\nThe garbage collection in int n1 : %d\n", n1);
	printf("The size of n1 is %d\n", sizeof(n1));
	
	printf("\nThe garbage collection in int n2 : %d\n", n2);
	printf("The size of n2 is %d\n", sizeof(n2));
	printf("\nThe garbage collection in int n3 : %d\n\n", n3);
	printf("The size of n3 is %d\n", sizeof(n3));
	
	printf("\nThe garbage collection in long v1 : %d\n", v1);
	printf("The size of v1 is %d\n", sizeof(v1));
	
	printf("\nThe garbage collection in double d1 : %d\n", d1);
	printf("The size of d1 is %d\n", sizeof(d1));
	
	printf("\nThe garbage collection in double d2 : %d\n", d2);
	printf("The size of d2 is %d\n", sizeof(d2) );
	
	printf("\nThe garbage collection in double d3 : %d\n", d3);
	printf("The size of d3 is %d\n", sizeof(d3) );

	return 0;
}
