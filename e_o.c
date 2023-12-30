#include<stdio.h>
int main()
{
	int n,num,i;
	printf("enter number of numbers to be in taken:");
	scanf("%d",&n);
	FILE *fpEven = fopen("even.txt","w");
	FILE *fpOdd = fopen("odd.txt","w");
	
	if(fpEven == NULL || fpOdd == NULL)
	{
		printf("error in opening the file\n");
		return 1;
	}
		printf("enter %d number:\n",n);
		for(i =0;i<n;i++)
		{
		scanf("%d",&num);
			if(num%2 == 0)
			{
				fprintf(fpEven,"%d\n",num);
			}
			else
			{
				fprintf(fpOdd,"%d\n",num);
			}
		}
		fclose(fpEven);
		fclose(fpOdd);
		printf("even aand odd numbers are separated and stored in their respective files");
		return 0;	
}
