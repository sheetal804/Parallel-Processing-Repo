#include<stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int arr[]={2,10,9,17,87,52,36,22};
	int c_swap=0;
	int c_compare=0;
	int n=sizeof(arr)/sizeof(int);
	int i,j;
	printf("Array before sorting : \n");
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("\n");
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i] > arr[j]){
				swap(&arr[i],&arr[j]);
				c_swap++;
			}
			c_compare++;
		}
	}
	printf("Array after sorting: \n");
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("\n");
	printf("Number of swaps: %d\nNumber of comparisions : %d\n",c_swap,c_compare);
	return 0;
}
