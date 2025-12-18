#include<stdio.h>
int main()
{
	int i,low,high,mid,Barr[100],n,key;
	printf("no of ele:");
	scanf("%d",&n);
	printf("Enter ele in seq:");
	for(i=0;i<n;i++)
	{
		scanf("%d",Barr[i]);
	}
		printf("Enter key ele:");
			scanf("%d",&key);
			
	low=0;
	high=n-1;
	mid=(low+high)/2;
	
	while(low<=high)
	{
		if(mid==key)
		{
			printf("Ele found");
		}
		else if(Barr[mid]<key)
		{
			low=mid+1;
			high=n-1;
			mid=(low+high)/2;
		}
		else
		{
			low=0;
			mid=high-1;
			mid=(low+high)/2;
		}
	}
	
	
}
