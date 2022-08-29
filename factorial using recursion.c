#include <stdio.h>
#include <conio.h>

int rec(int n);

void main(){
	int n;
	printf("enter value of n");
	scanf("%d",&n);
	
	printf("factorial of %d is", rec(n));
}

int rec(int n){
	if (n==1 || n==0){
		return 1;
	}
	else{
		return n*rec(n-1);
	}
}
