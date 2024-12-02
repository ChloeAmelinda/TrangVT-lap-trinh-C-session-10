#include<stdio.h>
int main()
{
	int arr[100];
	int phantu, check, vitri; 
	printf("Nhap so phan tu :"); 
	scanf("%d",&phantu);
	for(int i =0; i<phantu ; i++)
	{
		printf("phan tu thu %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Nhap gia tri muon tim :");
	scanf("%d", &check);
	for(int i =0 ; i< phantu ; i++)
	{
		if(check== arr[i])
		{
			
			vitri = i;
			
			break;
		}
		
		
	}
	if(vitri!= -1)
	{
		printf("%d nam o vi tri thu %d ",check,vitri+1);
	}
	else
	{
		printf("khong tim thay ");
	}
	return 0;
}
