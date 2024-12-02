#include<stdio.h>
int main()
{
		int arr[100];
	int n=100, phantu ;
	
	printf("Nhap so phan tu : ");
	scanf("%d",&phantu);
	for(int i =0 ; i< phantu ;i++)
	{
		printf("phan tu thu %d : ", i+1);
		scanf("%d", &arr[i]);
	}
	
	for(int i=0; i<phantu -1; i++){
				for(int j=0; j<phantu -i -1;j++){
					if(arr[j]>arr[j+1]){
						int temp = arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
				}
			}
			printf("Cac phan tu trong mang sau khi sap xep la:\n");
			for(int i=0; i<phantu ;i++){
				printf("%d\t", arr[i]);
			}
			printf("\n");
	
	
	
	return 0;
 } 
