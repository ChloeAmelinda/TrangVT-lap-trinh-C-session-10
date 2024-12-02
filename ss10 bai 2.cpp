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
	for(int i =1;i<n ; i++)
	{
		int key=arr[i];
		int j =i-1; 
		while( i >=0 && arr[j]>key )
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1]= key;
	}
	printf("phan tu sau khi sap xep la: \n ");
	for(int i = 0; i<phantu ; i++)
	{
		printf("%d ",arr[i]);
	}
	
	
	return 0;  
}
