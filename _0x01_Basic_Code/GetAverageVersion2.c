#include <stdio.h>

int main (void)
{
	int iterator, numberOfNums=0, total=0, value, ValsRead;
	float average;
	ValsRead=scanf("%d",&value);
	while(ValsRead >0)
	{
		total+=value;
		numberOfNums++;
	        ValsRead=scanf("%d",&value);
		printf("Read %d\n",value);
	}
	average =(float) total /(float) numberOfNums;
	printf("The %d values average = %.3f. \n",numberOfNums, average);
	return (0);
}
