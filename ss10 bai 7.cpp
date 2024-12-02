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
                    // Hoán d?i
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }

    // In ra m?ng dã s?p x?p
    printf("M?ng sau khi s?p x?p theo t?ng dòng là:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n"); // Xu?ng dòng sau m?i dòng
    }

	return 0;
}
