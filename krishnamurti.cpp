//krinshnamurti
#include<stdio.h>
int main(){
	int i,n,sum=0,r,fact,c;
	
	printf("enter a value\n");
	
	scanf("%d",&n);
	c=n;
	
	while(n>0){
		r=n%10;
		fact=1;
		
		for(i=0;i<r;i++){
			fact= fact*1;
		}
		sum=sum+fact;
		n=n/10;
	}
if(c==sum)
  printf("krishnamurti");
else
  printf("not krishnamurti");
  
return 0;
}
