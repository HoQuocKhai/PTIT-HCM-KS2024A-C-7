#include<stdio.h>

int main (){
	int cloud,array[5];
	for (int i=0;i<5;i++){
		printf("nhap cac phan tu vao mang: ");
		scanf("%d",&cloud);	
		array[i]=cloud;
	}for (int i=0;i<5;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
