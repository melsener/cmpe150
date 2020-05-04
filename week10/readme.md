## Pointers and Pointer Arithmetic - Exercises

**Ex0:** Create an integer array ``a`` with size 3. Check what does this code segment prints ``printf("%p:array\n",a);``. Then print the address of the first element of the array.  Finally, print the address of ``a``.

**Ex1:**  Write a function that takes an integer array as argument and changes all the elements to 1. Write another function that takes an integer pointer, which will be used for increasing the elements of an array by ``i+1``. In the main, create an integer array and initialize it with 1, 2, 3, 4, 5. 

 1. Call the first function by passing the array as argument, then print the contents of the array. 

 2. Call the second function by passing the address of the first element as the argument, then print the contents of the array.

 3. Call the first function by passing the address of the first element as the argument, then print the contents of the array.

 4. Call the second function by passing the array as argument, then print the contents of the array.

    Hint:** You can define the size of the array by ``#define SIZE 5``. It would make traversing easier.

**Ex2: (Teaching.Codes PS12 - Example 1)** You have integers with size n. You want to change all elements which are equal to the given integer value with another given integer. Write a function that performs this operation, and returns to the number of the changed numbers.

- Example Input: 
	3 4
	3 3 2
	
- Example Output: 
	
	2 numbers changed.
	
	4 4 2 

**Ex3: (Teaching.Codes PS12 - Example 2)** Write a function that sorts a given array.

[Visualization of Bubble Sort](https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/visualize/)

- Example Input: 8

- Example Output: 
	
  array before sort:
  
  0 1 5 2 1 1 0 7 
  
  array after sort:
  
  0 0 1 1 1 2 5 7 
  
  

**Ex4: (Teaching.Codes Lab 8 - Question 1)** Write a function which takes two integer arrays arr1, arr2, and their sizes as two integers N and M. Then the function should remove all the elements in arr2 from arr1. The function should update arr1 so that it no longer contain elements from arr2. The function should return the new size of arr1. 
Hint: you can create and use another temporary array in the function. 

Then in the main program, read two arrays from the user (first their sizes N, M, and then N+M integers as array elements). Then call the function passing the arrays and their sizes. Then print the first array to see the updated version.

- Example Input:
	10 3
  1 2 3 4 7 5 5 12 7 7
  5 3 12

- Example Output: 
	NewSize:6
	1 2 4 7 7 7 


**Ex5: (Teaching.Codes PS14 - Example  1)** Consider a block of 10 apartment houses, each of which contains 6 apartment flats. First, we want to keep the number of people in each flat, and then we want to compute the average number of people that live in each apartment house.

- Example Output: 
	Apartment 0 has average 2.000000 people.
  
  Apartment 1 has average 1.500000 people.
  
  Apartment 2 has average 2.666667 people.
  
  Apartment 3 has average 1.000000 people.
  
  Apartment 4 has average 2.000000 people.
  
  Apartment 5 has average 3.000000 people.
  
  Apartment 6 has average 1.666667 people.
  
  Apartment 7 has average 2.000000 people.
  
  Apartment 8 has average 3.500000 people.
  
  Apartment 9 has average 1.000000 people.
  
   

**Ex6: (Teaching.Codes PS14 - Example 2)** We have two two-dimensional matrices whose dimensions are 2x4. Write a function for computing the sum of these two matrices. Write another function to compute the transpose of a given matrix.

- Example Input:
	1 2 3 4 5 6 7 8
	
	8 7 6 5 4 3 2 1
	
	
	
- Example Output: 
	
  Sum of them
  
  9 9 9 9 
  
  9 9 9 9 
  
  Transpose of first matrix
  
  1 5 
  
  2 6 
  
  3 7 
  
  4 8 
  
  Transpose of second matrix
  
  8 4 
  
  7 3 
  
  6 2 
  
  5 1 

