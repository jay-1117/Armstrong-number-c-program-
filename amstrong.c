#include<stdio.h>

int main()
{
	int r,n,sum=0,cube=0,value;
	printf("enter the number:");
	scanf("%d",&n);
	value=n;
	while(n!=0)
	{
		r=n%10;
	
		sum=sum+r*r*r;
	
		n=n/10;
	}
	
	if(value==sum){
	
	printf("amstrong number");
}
else{
	printf("not a amstrong number");
}
	
	
	return 0;
}

