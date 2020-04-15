### Why do we write ``return 0`` in  ``main``?

Please check links below if you are interested:

- https://stackoverflow.com/a/204483
- https://stackoverflow.com/a/4207223
- https://stackoverflow.com/a/10915776



## Functions - Exercises

**Ex1:** Write a function that takes a ``char`` and prints the upper version of it. Then organize the ``main`` function as it takes input character from the user, it check whether the given character is a lower-letter. If the input is a lower-letter, then call the function you have written, if not print the character as it is.

- Example Input: a

- Example Output: A

**Ex2: (Teaching.Codes PS 8 - Page 1)** Write a function that computes n<sup>k</sup>. Assume k is an integer.

- Example Input: 2 7
- Example Output: 128.000000

**Ex3: (Teaching.Codes PS 8 - Page 1)** Write functions that compute the factorial f(n)=n!, permutation, P(n,k)=n!/(n-k)!, and the combinatorial, C(n,k)=n!/(n-k)! k!, of two numbers n and k, where n>0, k>0, and n ≥ k.

- Example Input: 5 3

- Example Output: factorial:120 permutation:60 combination:10

**Ex4: (Teaching.Codes PS 8 - Page 2)** 

1. Write a function ``int isLower(char ch)`` Which returns 1 if ch is a lowercase letter, 0 otherwise.
2. Write another function ``char toUpper(char ch)`` Which assumes that the given ch is a lowercase character, and returns its uppercase equivalent (e.g. if ch is 'b', your function must return 'B')
3. Write main function which reads a character from user, checks whether it is lowercase via isLower function you wrote above:
``if(isLower(ch)==1){``
then if it is, prints its uppercase equivalent via toUpper function:
``printf("%c",toUpper(ch));``

- Example Input: c
- Example Output: C

**Ex5: (Teaching.Codes Lab5 - Question 1)** Write a function named **fetchDigit** which takes two integers as input: **number** and **n**. Function should return the n.th digit (from the right) of the number as an integer. If the number is less than n digits, Function should return -1. Then write a program which reads a positive integer z and another integer x, then print out the x.th digit of z. If the input is incorrect (z doesn't have x digits), program should print "Incorrect input". Assume negative integers will not be given. 

- Example Input: 23423 3
- Example Output: 4

**Ex6: (Teaching.Codes Lab5 - Question 6)** Write a function that takes an integer n and prints a right triangle. Then fill/write main() appropriately to see the result.

- Example Input: 3 
	
- Example Output:


	``*``
		
	``**``
		
	``***``

**Ex7: (Teaching.Codes Lab5 - Question 7)** Write a function that will take an integer number and return its reverse version as another integer. Then fill/write main() appropriately to see the result.

- Example Input: 1234
- Example Output: 4321

**Ex8: (Teaching.Codes Lab5 - Question 14)** Write a function named 'isPrime' that takes an integer as a parameter and returns 1 if the number is prime, otherwise returns 0. 
\* (These 0 (false) or 1 (true) returning functions are also known as "boolean functions"). Then write main appropriately to see the result. 

- Example Input: 17
- Example Output: 1

**Ex9: (Teaching.Codes Lab5 - Question 15)** Write a function which takes two integers as parameters and prints all the prime numbers between them. Then write main appropriately to see the result.
**NOTE:** You can use "isPrime" function you wrote previously.

- Example Input: 3 15
- Example Output: 3 5 7 11 13