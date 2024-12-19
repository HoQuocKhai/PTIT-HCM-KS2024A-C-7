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
	int min=array[0],max=array[0];
	for (int i=0;i<n;i++){
		printf("%d ",array[i]);
		if(max<array[i]){
			max=array[i];
		}else if(min>array[i]){
			min=array[i];
		}
	}
	printf("\n%d\n%d",max,min);
	return 0;
}
