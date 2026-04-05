//WAP METRIX
#include<stdio.h>
int main(){
	int i,j,n;
	
	printf("Enter r&c number");
	scanf("%d",&n);
	
	int matrix[n][n];
	
	printf("enter matrix element");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("Your matrix is\n");
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",matrix[i][j]);
		}
	}
	printf("\n");
	return 0;
	
	
}
