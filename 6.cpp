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
		if(array[i]%2==0){
			array[i]+=3;
		}else{
			array[i]+=2;
		}
		printf("\n%d",array[i]);
	}
	return 0;
}
