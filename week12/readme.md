## Exercises

**Ex1:** Write a function that takes a string and an integer as arguments and returns the length of the string if the string is a palindrome, otherwise returns 0. In the main, get input from the user into a string and call the function you have written. Print the output of the function.

[What is palindrome?](https://en.wikipedia.org/wiki/Palindrome)

| Input | Output |
| ----- | ------ |
| madam | 5      |
| rebel | 0      |

**Ex2:** Write a function that takes three integer pointers and swaps them in cyclic order. In the main function, take three integers from the user as input and call the function you have written. Print the value of each variable after the function call.

| Input | Output |
| ----- | ------ |
| 1 2 3 | 3 1 2  |
| 0 2 4 | 4 0 2  |

**Ex3:** Write a program that takes a string from the user and removes the characters the non-letter characters. Of course the null character ``\0`` should stay. 

| Input        | Output |
| ------------ | ------ |
| h3ll0 w0r1d! | hllwrd |
| 2020 may 20  | may    |

**Ex4:** In the main function create a two dimensional array that has 21 rows and two columns. The first column should keep the numbers from 0 to 20. Let say the first column element is ``x``. The second column should keep the ``-x``th power of 2. After filling the array, print this two dimensional array row by row. The first column element should be printed as an integer, the second column element should be printed as a fractional number having 10 decimal places after the decimal point. The first two rows look like as follows:

| First Column Element | Second Column Element |
| -------------------- | --------------------- |
| 0                    | 1.0000000000          |
| 1                    | 0.5000000000          |

**Ex5: (Teaching.Codes - PS12 - Example 3)** Suppose we have a sorted array with size N. Write a function that finds a given number in this array, and returns the index of its location. If the number is not found, your function should return -1. Perform search by using binary search algorithm. 

| Input1          | Input2 | Output                 |
| --------------- | ------ | ---------------------- |
| 0 2 3 4 7 8 8 9 | 5      | value not found        |
| 0 3 7 8 9       | 7      | value found at index 2 |

**Ex6:** Create a one dimensional array in the main function and initialize it with some integers. Then print the content of the array and the address of the each cell of the array using pointers. In other words, you are not allowed to use ``[ ]`` operators inside the loop you have written. You can use the size of the array in the loop you have written.

Example output:

```c
1 0x7ffee72153c0 2 0x7ffee72153c4 3 0x7ffee72153c8 4 0x7ffee72153cc 5 0x7ffee72153d0
```

**Ex7:** Create a two dimensional array in the main function and initialize it with some integers. Then print the content of the array and the address of the each cell of the array using pointers. In other words, you are not allowed to use ``[ ]`` operators inside the loop you have written. You can use the number of rows and number of columns in the loop you have written.

Example Output:
```c
1 0x7ffee3b6c3c0 2 0x7ffee3b6c3c4 3 0x7ffee3b6c3c8 
4 0x7ffee3b6c3cc 5 0x7ffee3b6c3d0 6 0x7ffee3b6c3d4 
7 0x7ffee3b6c3d8 8 0x7ffee3b6c3dc 9 0x7ffee3b6c3e0
```

