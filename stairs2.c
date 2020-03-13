/* There's an error in this program where is skips over the first step. */

#include <stdio.h>

int main(void)
{

	//Initialise stair counter and ask the user how many they want.
	int strs =0;
	printf("How many steps are there? : ");
	scanf("%i", &strs);

	//Go through the outer loop the number of times the user says.
	for (int i=0;i<strs;++i)
	{
		//Loop counts down performing action 1 less time each time.
		for (int j=strs;j>i;j--)		
		{
			
			printf(" ");
						
		}
		
		//Loop counts up performing action 1 more time each time.
		for (int k=0;k<i;k++)		
		{
			
			printf("#");
						
		}
	
		//Loop counts up again performing action 1 more time each time.
		for (int j=strs;j<i;j++)		
		{
			
			printf(" ");
						
		}

		//Loop counts back down again performing action 1 less time each time.
		for (int k=0;k<i;k++)		
		{
			
			printf("#");
						
		}

		printf("\n");
	}

	


	
}
