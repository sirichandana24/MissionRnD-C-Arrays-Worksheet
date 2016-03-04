/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <malloc.h>
int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	int i, index = 0;
	if (len <= 0)
		return NULL;
	if (Arr== NULL)
		return NULL;
	else
	{
		if (num < Arr[0])
		{
			realloc(Arr, len + 1);
			for (i = len; i > 0; i--)
				Arr[i] = Arr[i - 1];
			Arr[0] = num;
		}
		else
			if (num > Arr[len - 1])
			{
				realloc(Arr, len + 1);
				Arr[len] = num;
			}
			else
			{
				while (Arr[index] < num)
					index++;
				realloc(Arr, len + 1);
				for (i = len; i > index; i--)
					Arr[i] = Arr[i - 1];
				Arr[index] = num;

			}

	}
	return Arr;
}