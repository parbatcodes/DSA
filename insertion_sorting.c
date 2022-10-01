#include <stdio.h>
#include <conio.h>

void main(){
	int a[10],i,j,n,e,temp;
	
	printf("enter the no of terms: ");
	scanf("%d",&n);
	
	printf("enter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&e);
		a[i]=e;
	}
	
	printf("the array befor sorting: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
	
	for(i=0;i<n;i++){
		for(j=1;j<n;j++){
			if(a[j] < a[j-1]){
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]= temp;
			}
		}
	}
	printf("\n");
	printf("the array after sorting: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}	
}
