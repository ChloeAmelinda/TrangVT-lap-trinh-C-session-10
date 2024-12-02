#include<stdio.h>
int main()
{

	int n,m,i,j;
	// nhap , khai bao 
	printf("Nhap so hang :");
	scanf("%d", &n);
	printf("Nhap so cot:");
	scanf("%d",&m);
	int arr[n][m];
	for(int i =0; i < n ; i++)
	{
		for(int j =0; j<m ; j++)
		{
			printf("Nhap phan tu thu [%d][%d]: ",i+1,j+1);
			scanf("%d", &arr[i][j]);
		}
	}
	// sap xep
 for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
            for (int k = j + 1; k < m; k++) {
                if (arr[i][j] > arr[i][k]) {
                    
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }

    
    printf("Mang sau khi sap xepla :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n"); 
    }

	return 0;
}
