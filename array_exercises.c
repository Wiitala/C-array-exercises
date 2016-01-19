/*
 *	Title:	 Array exercises
 *	Purpose: To clarify what multidimensional arrays mean in C and how to access elements using pointer notation
 *	Author:	 Devan Wiitala	
 *	Date:	 01-12-16
 */

#include <stdio.h>

//// PROTOTYPES ////
int array_initialize_2d(int *array_address, int x, int y);
int array_initialize_3d(int *array_address, int x, int y, int z);
void array_print_2d(int *array_address, int x, int y);
void array_print_3d(int *array_address, int x, int y, int z);
void array_print_1d(int *array_address, int x, int y, int z);

int main(int argc, char *argv[])
{
	int x, y, z;
	x = 9;
	y = 7;
	z = 4;
	int array2d[x][y];
	int array3d[x][y][z];
	int *p_array2d;
	int *p_array3d;
	
	p_array2d = &array2d[0][0];
	p_array3d = &array3d[0][0][0];
	array_initialize_2d(p_array2d, x, y);
	array_initialize_3d(p_array3d, x, y, z);
	printf("\n -- 1D printing 2D -- \n");
	array_print_1d(p_array2d, x, y, 1);
	printf("\n -- 1D printing 3D -- \n");
	array_print_1d(p_array3d, x, y, z);
	printf("\n -- 2D --\n");
	array_print_2d(p_array2d, x, y);
	printf("\n -- 3D --\n");
	array_print_3d(p_array3d, x, y, z);

	return 0;
}

int array_initialize_2d(int *array_address, int x, int y)
{
	int i, j, counter;
	counter = 1;

	for (j = 0; j < y; j++)
	{
		for (i = 0; i < x; i++)
		{
			*((array_address + i) + j*x) = counter++;
		}
	}

	return 0;
}

int array_initialize_3d(int *array_address, int x, int y, int z) 
{
	int i, j, k, counter;
	counter = 1;
	
	for (k = 0; k < z; k++)
	{
		for (j = 0; j < y; j++)
		{
			for (i = 0; i < x; i++)
			{
				*(((array_address + i) + j*x) + k*x*y) = counter++;
			}
		}
	}

	return 0;
}

void array_print_2d(int *array_address, int x, int y)
{
	int i, j;
	for (j = 0; j < y; j++)
	{
		for (i = 0; i < x; i++)
		{
			if (*((array_address + i) + j*x) < 10) {
				printf("%d  ", *((array_address + i) + j*x));
			} else {
			printf("%d ", *((array_address + i) + j*x));
			}
		}
		printf("\n");
	}
	printf("\n");

	return;
}

void array_print_3d(int *array_address, int x, int y, int z)
{
	int i, j, k;
	for (k = 0; k < z; k++)
	{
		for (j = 0; j < y; j++)
		{
			for (i = 0; i < x; i++)
			{
				if (*(((array_address + i) + j*x) + k*x*y) < 10) {
					printf("%d  ", *(((array_address + i) + j*x) + k*x*y));
				} else {
				printf("%d ", *(((array_address + i) + j*x) + k*x*y));
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("\n");

	return;
}

void array_print_1d(int *array_address, int x, int y, int z)
{
	int i; 

	for (i = 0; i < x*y*z; i++)
	{
		if (*(array_address + i) <= 9) {
			printf("%d  ", *(array_address + i));
		} else {
			printf("%d ", *(array_address + i));
		}
		if (*(array_address + i) % 9 == 0) 
			printf("\n"); 
	}
	return;
}

