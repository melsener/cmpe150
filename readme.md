## Bogazici University - Introduction to Computing (CmpE-150.04) - Spring 2019 - Lab Materials

- Lab slides and extra exercises will be uploaded weekly.

## Codes
You can find the related Xth week's examples above that in the folder "weekX"

## Content
* Week 1 - [Slides](https://github.com/melsener/cmpe150/blob/master/slides/week1.pdf) Intro & Hello World stuff
* Week 2 -  [Slides](https://github.com/melsener/cmpe150/blob/master/slides/week2.pdf) Data Types & Casting
* Week 3 - [Slides](https://github.com/melsener/cmpe150/blob/master/slides/week3.pdf) Selection Structures (if-else)
* Week 4 - [Slides](https://github.com/melsener/cmpe150/blob/master/slides/week4.pdf) Switch & Repetition Structures
* Week 5 - [Slides](https://github.com/melsener/cmpe150/blob/master/slides/week5.pdf) Repetition Structures & Introduction to Functions
* Week 6 - NoSlide Functions
* Week 7 - NoSlide Functions
* Week 8 - [Slides](https://github.com/melsener/cmpe150/blob/master/slides/week8.pdf) Pointers
* Week 9 - [Slides](https://github.com/melsener/cmpe150/blob/master/slides/week9.pdf) Arrays
* Week 10 - [Slides](https://github.com/melsener/cmpe150/blob/master/slides/week10.pdf) Passing Arrays to Functions
* Week 11 - [Slides](https://github.com/melsener/cmpe150/blob/master/slides/week11.pdf) Strings
* Week 12 - NoSlide Multidimensional Arrays, Structs




## This week's Homeworks
### HW1 (Teaching Codes - PS14 - Ex3)
Consider we have 5 classes, each of which has 30 students. These 30 students takes 10 course (all students in different classes take the same courses).
1. Write a function that takes grades of each student from the user.
2. Write a function that computes the average of 10 courses.
3. Write a function that assigns letter grades to the given grades of the students (90 - 100: A, 80 - 89: B, 70 - 79: C, 60 - 69: D, 0 - 59: F, and assume all grades are given between 0 and 100).

### HW2 (Teaching Codes - Lab10 - Q2)
Define a struct named: Book. Each book should have a name with exactly 3 letters (abbreviation). Each book should also have a page count (integer), and a price (integer).

Write a program which reads an integer n first, then reads the names, page counts and prices of n books.

Write a function which takes an array of books, and sorts them according to their prices.

Using that function, your program should print the names and page counts of each book with the order of their prices. Like:

1- LOT: 528 pages.
2- THG: 727 pages.
3- MSB: 340 pages.
etc..

Reading and printing format is up to you.

Note: when entering characters, the console might read enter (\n) when you press enter. Thus, the input might be like:
5fef200 500ced132 543geg124 315mer634 1211hat124 564
(All in one line, and only seperate integers with a space)





## Previous Homeworks
* [Solution](https://github.com/melsener/cmpe150/blob/master/homeworks/week5_hw_solution.c) Find greatest common divisor (GCD) of two integers using **Euclidean Method**.

* [Solution](https://github.com/melsener/cmpe150/blob/master/homeworks/week6_hw_solution.c) Write a function that takes two integers as parameters n and m, and prints out a rectangle nxm using \*. Then write main() appropriately to see the result. (Teaching Codes - Lab5 Q8)

* [Solution](https://github.com/melsener/cmpe150/blob/master/homeworks/week7_hw_solution.c) Write a function that will take an integer number and return its reverse version as another integer. Then fill/write main() appropriately to see the result.

* [Solution](https://github.com/melsener/cmpe150/blob/master/homeworks/week8_hw_solution.c) Write a function named divideWithRemainder which takes two integer values: number and divisor, and two integer pointers (addresses of two integers): result and remainder. This function should divide the number by divisor, then write the result into the address given by result, and write the remainder into the address given by remainder. In the main program, create four integers: a,b,c,d. Then read the values of a and b from the user. Then call the function with the values of a and b, and the addresses of c and d, respectively. Your function will divide a by b, and the value of c will be the result, and the value of d will be the remainder. Then print out the values of c and d. Note that this function doesn't need to return anything, because it is already able to give output to the given addresses. Also note that, before calling a function with pointer inputs in the main program, you should first create appropriate variables so that you can give proper addresses to that function.

* [Solution](https://github.com/melsener/cmpe150/blob/master/homeworks/week9_hw_solution.c) Suppose you want to write a program that takes two polynomials from the user. Perform addition and multiplication operations on them. (Teaching Codes - PS11 - Last Example)

* [Solution](https://github.com/melsener/cmpe150/blob/master/homeworks/week10_hw_solution.c) Suppose we have a sorted array with size N. Write a function that finds a given number in this array, and returns the index of its location. If the number is not found, your function should return -1. Perform search by using binary search algorithm.

* [Solution](https://github.com/melsener/cmpe150/blob/master/homeworks/week11_hw_solution.c) Write a program which reads a sentence as a string, and a word as a string. Then the program should exclude this word from the sentence if the sentence contains the word, then print the new version to the screen. Assume no punctuation will occur, and every letter is lower case.

## Additional
Check Section2's repo: https://github.com/hkmztrk/CMPE150
