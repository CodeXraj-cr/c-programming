#include<stdio.h>

void bubblesort(int a[], int n){
    int c;  // temporary variable
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j] < a[j+1]){   // descending order
                c = a[j];
                a[j] = a[j+1];
                a[j+1] = c;
            }
        }
    }
}

void printarray(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);   // added space
    }
    printf("\n");
}

int main(){
    int a[6] = {2,3,5,4,8,6};  // fixed ;
    int n = 6;

    bubblesort(a, n);
    printarray(a, n);

    return 0;
}
