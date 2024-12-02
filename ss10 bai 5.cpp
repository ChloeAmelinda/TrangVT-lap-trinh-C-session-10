#include<stdio.h>
int main()
{
	int arr[100];
	int phantu , check, vitri;
	// nhap pha tu
	printf("Nhap so phan tu :");
	scanf("%d", &phantu);
	for(int i =0 ; i<phantu ;i++)
	{
		printf("nhap phan tu thu %d : ", i+1);
		scanf("%d", &arr[i]);
	}
	// sap xep 
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
	
	// tim kiem
	printf("\n Nhap gia tri muon tim :");
	scanf("%d", &check);
	for(int i =0 ; i< phantu ; i++)
	{
		if(check== arr[i])
		{
			
			vitri = i;
			
			break;
		}
		
		
	}
	if(vitri!= -1 && vitri <phantu)
	{
		printf("%d nam o vi tri thu %d ",check,vitri+1);
	}
	else
	{
		printf("khong tim thay ");
	}
	
	return 0;
}
