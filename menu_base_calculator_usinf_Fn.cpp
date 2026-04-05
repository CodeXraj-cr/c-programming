#include<stdio.h>
#include<stdlib.h>
	int add(int a,int b){
	printf("addition%d\n=", a+b);
}
int sub(int a,int b){

  printf("substraction\n %d",a-b);
}
	int mul(int a,int b){
		printf("mulplication\n %d", a*b);
	}
	
	int main(){
		int x,y,ch;
		printf("1  for add,2 for sub,3for mul\n");
		printf("Enter two number\n");
		scanf("%d %d", &x,&y);
		printf("enter your choise\n");
		scanf("%d",&ch);
		
		switch(ch){
			
			case 1:add(x,y);
			break;
			case 2:sub(x,y);
			break;
			case 3:mul(x,y);
			break;
		}
		return 0;
	}


