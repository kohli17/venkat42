
    #include<stdio.h>
    #include<stdio.h>
    int main()
    {
    	int a[50],i,j,n,temp;
     
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    	}
    	for(i=0;i<n;i++)
    	{
    		for(j=i;j<n;j++)
    		{
    			if(a[i]>a[j])
    			{
    				temp=a[i];
    				a[i]=a[j];
    				a[j]=temp;
    			}
    		}
    	}
    	printf("%d",a[n/2]);
    	return 0;
     
     
     
    }
