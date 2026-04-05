#include<stdio.h>
int main(){
	int i,j,n,p;
	
//	printf("Enter row & col.x..\n");
//	 scanf("%d %d",&n,&p);
	
	for(i=1;i<=4;i++){
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
	
	 for(i=3;i>=1;i--){
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
}
