#include <stdio.h>

void show_array(int array[][10], int rows)
{
	int i, j;
	for (i = 0; i < rows; i++)
		for (j = 0; j < 10; j++)
			printf ("array[%d][%d]=%d\n", i, j, array[i][j]);
}
int main()
{
	int array[2][10]={{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15, 16, 17, 18, 19, 20}};
	show_array(array, 2);
	return 0;
}
