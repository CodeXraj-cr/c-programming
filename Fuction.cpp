#include<stdio.h>

int add(int x,int y){
	return x+y;
}

int main(){
	int a, b;
	printf("enter two  number\n");
	scanf("%d %d",&a,&b);
	
	//printf("enter two  number\n");
//	scanf("%d",&b);
	
	
	int c= add(a,b);
	
	printf("%d",c);
	
	return 0;
}
