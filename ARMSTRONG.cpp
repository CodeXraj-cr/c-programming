#include<stdio.h>
int main(){
	int n,tem,sum=0,r;
	
	printf("Enter a number");
	scanf("%d",&n);
	
	tem=n;
	while(n>0){
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(tem==sum)
	  printf("armstrong");
	else
	   printf("not arm");
	   
	return 0;
}
