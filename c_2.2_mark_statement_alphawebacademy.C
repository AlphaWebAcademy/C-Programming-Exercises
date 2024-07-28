//Created this program by Alpha Web Academy
//Jyothi Jeyakumar
#include<stdio.h>
int main()
{
    int tam,eng,mat,sci,soci,total;
    float avg;  //Average Ex. Calculation: sub1 = 90   sub2 = 99  avg=(90+99)/2
    printf("\nEnter Marks One by one:\n");
    printf("Tamil:\t\t");        
	scanf("%d",&tam);
    printf("English:\t");      
	scanf("%d",&eng);
    printf("Mathematics:\t");  
	scanf("%d",&mat);
    printf("Science:\t");      
	scanf("%d",&sci);
    printf("Social:\t\t");       
	scanf("%d",&soci);
    total = tam+eng+mat+sci+soci;   
    printf ("\n\nTotal  =   %d \n", total);
    avg = total / 5.0f;   //   0.000000   86.000000     %0.2f ==> 86.00
    //type casting
    printf ("\nAverage  =   %0.2f%% \n",avg);
    return 0;
}





