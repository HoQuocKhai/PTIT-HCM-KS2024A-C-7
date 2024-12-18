#include<stdio.h>

int main(){
	int n;
	printf("nhap so phan tu trong mang: ");
	scanf("%d",&n);
	int array[n];
	for (int i=0;i<n;i++){
		printf("nhap phan tu thu %d: ",i);
		scanf("%d",array + i);
	}
	for (int i=0;i<n;i++){
		printf("\n%d",array[i]);
	}
	return 0;
}
