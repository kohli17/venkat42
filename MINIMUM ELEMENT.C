#include<stdio.h>
#include<conio.h>
int main()
{
	int ele[20],size,i,min,max;
	printf("Enter the size");
	scanf("%d",&size);
	printf("\nEnter the elements:");
	for(i=0;i<size;i++)
	{
	scanf("%d",&ele[i]);
	}
	max=min=ele[0];
	for(i=0;i<size;i++)
	{
		if(ele[i]<min)
		{
		min=ele[i];		}
			printf("\nmin=%d",min);
		
	}
	return 0;
	
}
