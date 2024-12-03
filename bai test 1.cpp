#include<stdio.h>
int main()
{
	int arr[100];
	int phantu , i ,choice,position , value ,check,isprime;
	int max=arr[0];
	
	do 
	{
		printf("1.Nhap phan tu\n");
		printf("2.In cac phan tu trong mang\n");
		printf("3.In cac gia tri lon nhat\n");
		printf("4.In ra so nguyen to \n");
		printf("5.Them phan tu\n");
		printf("6.Xoa phan tu \n");
		printf("7.Ssap xep phan tu \n");
		printf("8.Tim kiem\n");
		printf("9.Thoat\n");
		
		printf("Lua chon cua ban la : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1 : 
			printf("Nhap so phan tu : ");
			scanf("%d",&phantu);
			for(i =0; i<phantu; i++)
			{
				printf("Nhap phan tu thu %d : ",i+1);
				scanf("%d", &arr[i]);
			}
			printf("\n");
			break;
			
			case 2:
				printf("Mang da nhap la : ");
				for(i=0; i<phantu ; i++)
				{
					printf("%d ",arr[i]);
				}
				printf("\n");
				break;
			
			case 3: 
			    for(i=1; i<phantu ;i++)
			    {
				if(max < arr[i])
				{
					max= arr[i];
				}
				}
				printf("so lon nhat la : ",max);
				printf("\n");
				break;
			
			case 4 :
				printf("so nguyen to trong mang la : ");
				for(i=0 ; i<phantu ; i++)
				{
					isprime =1 ;
					if(arr[i] <= 1 )
					{
						isprime=0;
					}
					else
					{
						for( int j=2 ; j*j <= arr[i] ; j++)
						{
							if(arr[i] % j ==0)
							{
								isprime =0;
								break;
							}
						}
					}
					if(isprime)
					{
						printf("%d ",arr[i]);
					}
				 } 
				 printf("\n"); 
				 break;
			
			case 5:
                printf("Nhap phan tu muon them: ");
                scanf("%d", &value);
                printf("Nhap chi so phan tu muon them (0 den %d): ", phantu);
                scanf("%d", &position);

                // Kiem tra chi so
                if (position >= 0 && position <= phantu) {
                    // Chen phan tu
                    for (i = phantu; i > position; i--) {
                        arr[i] = arr[i - 1]; // Dich cho trong
                    }
                    arr[position] = value; // Them moi
                    phantu++;
                    printf("Mang sau khi them phan tu: ");
                    for (i = 0; i < phantu; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                } else {
                    printf("Khong hop le \n");
                }
                break;
            
            case 6:
                printf("Nhap vi tri can xoa (0 den %d): ", phantu - 1);
                scanf("%d", &position);
                // Kiem tra
                if (position >= 0 && position < phantu) {
                    // Dich cho trong
                    for (i = position; i < phantu - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    phantu--; // Giam phan tu
                    printf("Mang moi la: ");
                    for (i = 0; i < phantu; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                } else {
                    printf("Khong hop le \n");
                }
                break;
            case 7:
            	for(i=1; i <phantu ; i++)
            	{
            		int key=arr[i];
            		int j =i-1;
            		while(i>=0 && arr[j] > key)
            		{
            			arr[j+1]= arr[j];
            			j--;
					}
					arr[j+1]=key;
				}
				printf("mang sau khi sap xep la : ");
				for(i=0 ; i<phantu ; i++)
				{
					printf("%d ",arr[i]);
				}
				printf("\n");
				break;
			case 8:
				printf("Nhap gia tri muon tim :");
				scanf("%d", &check);
				for(i=0; i<phantu ;i++)
				{
					if(check == arr[i])
					{
						position= i;
						break;
					}
				}
				if(position != -1)
				{
					printf("%d nam o vi tri thu %d trong mang \n ", check, position);
					break;
				}
				else
				{
					printf("Khong tim thay ");
					break;
				}
			case 9 :
				printf("Anh trai say bye T~T");
				break;
			default:
				printf("loi du lieu");


			
		}
	}while( choice!= 9);
	return 0;
 } 
