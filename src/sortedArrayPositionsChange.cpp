/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	int first=0,last=len-1,temp;
	if (len < 0)
		return NULL;
	if (Arr == NULL)
		return NULL;
	else
	{
		while ((Arr[first] < Arr[first + 1])&& first<len)
			first++;
		while ((Arr[last] > Arr[last - 1]) && last>0)
			last--;
		temp = Arr[first];
		Arr[first] = Arr[last];
		Arr[last] = temp;
		return Arr;
	}
}