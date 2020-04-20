## Pointers and Pointer Arithmetic - Exercises

**Ex1:** Check the example at PS9. We will go over a slightly different version of it.

**Ex2:** Write a program that defines an integer ``num`` and an integer pointer ``numptr``. Then assign 5 to ``num`` and then assign ``numptr`` to the address of ``num``. First print the address of ``num`` and value of ``numptr``, then print the value of ``num`` and the value that ``numptr`` points to. Observe the output. **Hint:** You can use ``%p`` as the format specifier to print the addresses.  

- Example Output: 

  Address of num is 0x7ffeed1d41d8 and the value of the numptr is 0x7ffeed1d41d8

  Value of num is 5 and the value that numptr points to 5

**Ex3:** Write two functions according to "call by reference" and "call by value" logic. Both of the functions should return ``void``. Inside both of the functions increase the argument of the function by 5. Notice that they should differ by the type of the argument they are taking. In the main function, define an integer ``x`` and initialize it with some number. Then first call ``call_by_value`` function with ``x`` appropriately (considering the signture of the function), then print ``x``. After that  call ``call_by_reference`` function with ``x`` appropriately (considering the signture of the function), then print ``x``. Observe the effect of both functions.

**Ex4: (Teaching.Codes Lab6 - Question 1)** Write a function named **swap** which takes two integer pointers (addresses of two integers) and swaps the values in those two addresses. (Since this function doesn't need to return a value, it should be a void function.) In the main program, create two integer variables a and b, then read their values from the user. Print their values to the screen. Then call the swap function with the addresses of these two integers, and print their values again to see if they are really swapped. 

- Example Input: 8 9
- Example Output: 9 8

**Ex5: (Teaching.Codes Lab6 - Question 2)** Write a function named **divideWithRemainder** which takes two integer values: **number**and **divisor**, and two integer pointers (addresses of two integers): **result** and **remainder**. This function should divide the number by divisor, then write the result into the address given by **result**, and write the remainder into the address given by **remainder**. In the main program, create four integers: a,b,c,d. Then read the values of a and b from the user. Then call the function with the values of a and b, and the addresses of c and d, respectively. Your function will divide a by b, and the value of c will be the result, and the value of d will be the remainder. Then print out the values of c and d. Note that this function doesn't need to return anything, because it is already able to give output to the given addresses. Also note that, before calling a function with pointer inputs in the main program, you should first create appropriate variables so that you can give proper addresses to that function.

- Example Input: 15 6

- Example Output: 

  Result: 2

  Remainder: 3

**Ex6: (PS10- SolveEqn)** Consider the program, which finds the real roots of a given quadratic equation. At this time, we want to rewrite it by using a function: ``int solve(float a,float b,float c,float *root1, float *root2)``. Your function will return the number of real roots (0 if no real roots, 1 if roots are equal, 2 if 2 distinct real roots)

- Example Input: 1 -1 -12
- Example Output: Two roots r1:4.000000 r2:-3.000000





