#include<stdio.h>
int main()
{
	int arr[100];
	int n , phantu;
	
	printf("Nhap so phan tu : ");
	scanf("%d", &phantu);
	for(int i=0 ; i< phantu ; i++)
	{
		printf("Nhap phan tu thu %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for (int i=0; i<phantu-1 ;i++){
				for(int j=i+1; j< phantu ;j++){
					if(arr[i]>arr[j]){
						int temp =arr[i];
						arr[i]=arr[j];
						arr[j]=temp;
					}
				}
			}
			printf("Cac phan tu trong mang sau khi sap xep la:\n");
			for(int i=0; i<phantu;i++)
			{
				printf("%d\t", arr[i]);
				}
	
	return 0;
}
