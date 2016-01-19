# C-array-exercises
An investigation I did to prove that all arrays in C are actually 1D. 

In this exercise, I wrote 5 functions to serve 5 purposes:

1. Initialize a 2D array
2. Initialize a 3D array
3. Print a 2D array
4. Print a 3D array
5. Print a 1D array

Because all of these functions used pointers, based on addresses of a 2D array (array2d[x][y] and
a 3D array (array3d[x][y][z]) I decided to test and see if I could access all of those array elements
simply by incrementing in one dimension on a pointer.

Aside from some formatted printing issues, this proves that I can indeed access all array elements
by incrementing one variable in one direction, which proves the 1D organization of all "multidimensional" 
arrays in C. 

This was something that was confusing to learn because it always said that if you want to
access an index i,j in an array using pointers (e.g. int array[i][j]), and the pointer to that
array is "int *pointer_array (*) then you access that index by dereferencing*(*(pointer_array + i) + j),
but if i and j are, say, 1 and 2, it accesses array[3][0] instead of array[1][2]. This led me to make
this program and test it out myself, since the details of this organization did not appear to be readily available
from quick google searches.
