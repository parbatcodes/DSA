#include <stdio.h>
#include <conio.h>

int fab(int a);

void main(){
	int n,i;
	printf("enter the terms ");
	scanf("%d",&n);	
	for(i=0;i<n;i++){
		printf(" %d",fab(i));	
	}
	
}

int fab(int i){
	if (i==0){
		return 0; 
	}
	else if (i==1){
		return 1;
	}
	else{
		return fab(i-1) + fab(i-2);
	}
}
