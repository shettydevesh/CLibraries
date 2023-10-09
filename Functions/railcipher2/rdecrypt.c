#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define VAL(PTR) (*PTR)

typedef char* STRING;
typedef char** STRING_REF;
void rail_fence_decrypt(STRING_REF str, int depth)
{
	STRING old_str = VAL(str);
	int len_str = strlen(old_str), itr_str, rows, counter;
	STRING res_str = (STRING)malloc(sizeof(char)*len_str);
	for(counter = 0, itr_str = 0 ; counter < len_str/depth ; ++counter)
	{
		for(rows = counter ; rows < len_str ; rows+=(len_str/depth))
		{
			res_str[itr_str] = old_str[rows];
			++itr_str;
		}
	}
	free(VAL(str));
	VAL(str) = res_str;
}