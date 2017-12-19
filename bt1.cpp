#include <stdio.h>
#include <conio.h>

int main()
{	int i,j,max;
	int a[30],n;
	printf("Nhap vao so cac so can so sanh: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
			printf("So thu %d la: ",i+1);
			scanf("%d",&a[i]);			
		}
	max=a[0];
	for(j=1;j<n;j++)
		{
			if(max<a[j])	max=a[j];
		}
	printf("Gia tri lon nhat la: %d",max);
	printf("\n Nhan 1 phim bat ky de thoat man hinh");
	getch();
	return 0;
}
