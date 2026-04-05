#include<stdio.h>
int main(){
	int i,n;
	printf("Enter num");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		if(i%2==0){
		
			printf("%dEven\n",i);
}else{

		printf("%d odd\n",i);
	}
}
	return 0;
	
}
