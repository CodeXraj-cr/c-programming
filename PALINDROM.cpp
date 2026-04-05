#include<stdio.h>
int main(){
	int n,r,s=0,c;
	printf("Enter a number ");
	scanf("%d",&n);
	c=n;
	while(n>0){
		r= n%10;
		s=(s*10)+r;
		n=n/10;
	}
	if(c==s)
	    printf("palindrom");
	else
	    printf("not P");
	    
	return 0;
}
