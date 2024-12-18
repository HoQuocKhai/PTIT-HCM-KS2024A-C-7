#include<stdio.h>

int main(){
	int n;
	printf("nhap so phan tu trong mang: ");
	scanf("%d",&n);
	int array[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d : ",i);
		scanf("%d",array+i);
		do{
		if(array[i]%2==0){
			printf("nhap lai phan tu thu %d :",i);
			scanf("%d",array+i);
		}
		}while(array[i]%2==0);
	}
	for (int i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
