#include<stdio.h>

void sorting(int a[],int n){
	int tem,i,j,min;
	
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]){
				 min=j;
			}
		}
		tem=a[min];
		a[min]=a[i];
		a[i]=tem;
	}
	
}

void printarray(int a[], int n){
	for(int i=0;i<n;i++){
		printf("%d", a[i]);
	}
	printf("\n");
}

int main(){
	int arr[]={6,4,5,1,3};
	int n=5;
	
	 sorting(arr,n);
	 printarray(arr, n);
	 
	 return 0;
	
	
}
