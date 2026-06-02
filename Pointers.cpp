#include<stdio.h>
int main(){
	int x=5;
	int* a;
	a=&x;
	*a=10;

	printf("%d\n",x);

     printf("%p\n",&x);	
     
      printf("%p\n",a);// Diff.. type of write pointers
	return 0;
}
