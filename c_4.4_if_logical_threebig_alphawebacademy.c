//Jyothi Jeyakumar from 
//Alpha Web Academy Rajapalayam
//if elseif  logical AND && 

#include<stdio>
int main(){
	int n1,n2,n3;
	printf("Enter three numbers seperated by comma:\n");
	scanf("%d,%d,%d", &n1,&n2,&n3);
	
	if(n1==n2  && n1==n3){
		printf("\nThree numbers are equal.");
	}
	else if(n1==n2 && n1>n3){
		printf("First and second nos are equal and greater than third no.")
	}
	else if(n2==n3 && n2>n1){
		printf("second and third nos are equal and greater than first no.")
	}
	else if(n1==n3 && n1>n2){
		printf("First and third nos are equal and greater than second no.")
	}
	else if(n1>n2 && n1>n3){
		printf("First is big.");
	}
	else if(n2>n1 && n2>n3){
		printf("Second is big.");
	}
	else	// if(n3>n1 && n3>n2)
	{
		printf("Third is big.");
	}
	return 0;	
}
