#include<stdio.h>
void evenoddcheck(int arr[])
{   int i=0;
	printf("\n");
    for(i=0;i<6;i++)
    {
        if(arr[i]%2==0)
        {
            printf("This Is Even Number:%d\n",arr[i]);
        }
        else
        {
           printf("This Is odd Number:%d\n",arr[i]);
        }
    }    printf("\n");
}

void evenoddcount(int arr[])
{
    int even[6],odd[6],i=0,j=0,k=0;
    for(i=0;i<6;i++)
    {
        if(arr[i]%2==0)
        {
            even[j]=arr[i];
            j++;
        }
        else
        {
            odd[k]=arr[i];
            k++;
        }
    }printf("\n");
    printf("Even Number Counter is:%d\n",j);
    printf("Odd Number Counter is:%d\n",k);
}

void evenoddsum(int arr[])
{
	int i=0,eventotal=0,oddtotal=0;
	for(i=0;i<6;i++)
	{
		if(arr[i]%2==0)
		{
			eventotal+=arr[i];
		}
		else
		{
			oddtotal+=arr[i];
		}
	}printf("\n");
	printf("This is Even Number Sum:%d\n",eventotal);
	printf("This is Odd Number Sum:%d\n",oddtotal);
	
}
void enteredarry(int arr[])
{
	int i=0;
	printf("\n");
	for(i=0;i<6;i++)
	{
		
		printf("This is Your Original Array:%d\n",arr[i]);
	}
}

void main()
{
        int i=0,arr[6];
    for(i=0;i<6;i++)
    {
        printf("Enter Any Value Of Array:");
        scanf("%d",&arr[i]);
    }
     
     
     evenoddcheck(arr);
     evenoddcount(arr);
     evenoddsum(arr);
     enteredarry(arr);
}
