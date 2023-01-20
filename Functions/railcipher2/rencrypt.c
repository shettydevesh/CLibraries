#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define VAL(PTR) (*PTR)

typedef char* STRING;
typedef char** STRING_REF;
void rail_fence_encrypt(STRING_REF str, int depth)
{
	STRING old_str = VAL(str);
	int len_str = strlen(old_str), itr_str, rows, cols;
	STRING res_str = (STRING)malloc(sizeof(char)*len_str);
	for(rows = 0, itr_str = 0 ; rows < depth ; ++rows)
	{
		for(cols = rows ; cols < len_str ; cols += depth)
		{
			res_str[itr_str] = old_str[cols];
			++itr_str;
		}
	}
	res_str[itr_str] = '\0';
	free(VAL(str));
	VAL(str) = res_str;
}