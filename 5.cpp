#include<stdio.h>

int main(){
	int n,max=0,min=0;
	printf("nhap so phan tu trong mang: ");
	scanf("%d",&n);
	int array[n];
	for (int i=0;i<n;i++){
		printf("nhap phan tu thu %d: ",i);
		scanf("%d",array + i);
	}
	for (int i=0;i<n;i++){
		printf("%d ",array[i]);
		if(max<array[i]){
			max=array[i];
			min=max;
		}
	}
	for (int i=0;i<n;i++){
		if(min>array[i]){
			min=array[i];
		}
	}
	printf("\n%d\n%d",max,min);
	return 0;
}
