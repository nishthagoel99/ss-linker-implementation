#include<stdio.h>
int main()
{
	int i,n,search;

	int arr[10];
	printf("enter no of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter array element %d : ",i+1);
		scanf("%d",&arr[i]);
	}

printf("Addition of 1 and 2 is :%d\n",add(1,2));
printf("Binary search : enter element: ");
scanf("%d",&search);
bsearch(arr,search,n);

printf(" \n sorting of elements: ");
sort(n,arr);
// for(i=0;i<n;i++){
// 	printf( "%d\n", p[i]);
// }


return 0;
}

