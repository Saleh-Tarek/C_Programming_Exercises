#include <stdio.h>

int main (void)
{
	int iterator, numberOfNums=0, total=0, value;
	float average;
	printf("Enter how many numbers are to be read please.\t");
	scanf("%d",&numberOfNums);
	printf("Enter the values.\n");
	for(iterator=0; iterator < numberOfNums; iterator ++)
		{
			scanf("%d",&value);
			total+=value;
			printf("Read %d\n",value);
		}
	average =(float) total /(float) numberOfNums;
	printf("The %d values average = %.3f. \n",numberOfNums, average);
	return (0);
}
