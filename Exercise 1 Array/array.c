#include<stdio.h>
int main()
{
	int a[40],ch,i,n,b,p,k;
	printf("Enter the no of elements");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	while(1)
	{
		printf("\n\n1.Insertion\n2.Deletion\n3.Traverse\n4.Search\n\n");
		printf("Choose your option:");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
			printf("\nEnter the element to be inserted:");
			scanf("%d",&b);
			printf("Enter the position to be inserted:");
			scanf("%d",&p);
			if(p<=0||p>n+1)
			{
				printf("Invalid");
			}
			else
			{
				for(i=n-1;i>=p-1;i--)
				{
					a[i+1]=a[i];
				}
				a[p-1]=b;
				n++;
				printf("\nArray after insertion\n");
				printf("array elements are:\t");
				for(i=0;i<n;i++)
				{
					printf("%d\t",*(a+i));
				}
			}
			
			break;
		case 2:
			printf("\nEnter the postion to be deleted:");
			scanf("%d",&p);
			if(p<=0||p>n)
			{
				printf("Invalid");
			}
			else
			{
				for(i=p-1;i<n;i++)
				{
					a[i]=a[i+1];
				}
				n--;
				printf("\nArray after deletion\n");
				printf("array elements are:\t");
				for(i=0;i<n;i++)
				{
					printf("%d\t",*(a+i));
				}
			}
			
			break;
		case 3:
			printf("\narray elements are:\t");
			for(i=0;i<n;i++)
			{
				printf("%d\t",*(a+i));
			}
			break;
		case 4:
			printf("\nEnter the element to be searched");
			scanf("%d",&k);
			int flag=0;
			for(i=0;i<n;i++)
			{
				if(a[i]==k)
				{
					flag=1;
					printf("\nElement found at the position %d",i+1);
				}
			}
			if(flag==0)
			{
				printf("\nSearch is unsuccessfull");
			}
			break;
		default:
			printf("Invalid Choice");
				
			
	 }
	}

	
}
