#include<stdio.h>

void main(){
	// Average of numbers
	int h,e,p,c,m,total;
	float average;
	
	printf("Enter the mark of hindi :"); // take input from the user.
	scanf("%d",&h);  // store the input value at addresss.
	
	printf("Enter the mark of English :");
	scanf("%d",&e);
	
	printf("Enter the mark of Physics :");
	scanf("%d",&p);
	
	printf("Enter the mark of Chemistry :");
	scanf("%d",&c);
	
	printf("Enter the mark of Maths :");
	scanf("%d",&m);
	
	// calculate the total & average.
	total = (h+e+p+c+m);
    average = total/5.0;
	
	// outputs...
	printf("The total number obtain is %d out of 500\n",total);
	printf("The average of number is %.2f",average);
	
	
	
}
