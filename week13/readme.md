## Structs

**Ex0:** Define a struct named "Point" that holds x and y points as integer. Write a function ``print_point`` that takes a ``struct Point`` as argument and prints its x and y coordinates. Next, write another function ``doubled_point`` that takes a ``struct Point`` as argument and returns a new Point that has the double of coordinate values of the argument. (i.e., if input point has x=1 and y=1, the output point would have x=2 and y=2). In the main function define a ``struct Point`` variable and initialize the coordinates separately (by using ``.``). Then call the ``print_point`` function with the variable you have defined. Next, define another ``struct Point`` and assign it to the first one. Next, define another ``struct Point`` and assign it to the output of ``doubled_point`` function, which uses the first variable you have defined as argument.  Finally, define another ``struct Point`` and initialize it by using ``{}``. Print each of them by using ``print_point`` function.

**Ex1:** Use the struct you have defined in the **Ex0**, but now use ``typedef`` and use ``point`` instead of ``struct Point``. Write a function ``print_point`` that takes a ``point`` as argument and prints its x and y coordinates. Write a function ``call_by_val`` that takes a ``point`` as argument and makes both of the coordinates zero. Write another function ``call_by_ref`` that takes a ``point`` pointer as argument and makes both of the coordinates zero. In the main function, define a ``point`` and initialize it with some non-zero integers. First, call ``call_by_val`` and then ``print_point``. Next, call ``call_by_ref`` and then ``print_point``.

**Ex2:** Define a struct named "Person" which has a name (assume char) and age. Write a function ``print_person`` that takes a person as argument and prints the name and the age. In the main function, create a person variable and call ``print_person`` with it. Then, create a person pointer and assign it to the address of the first person and call ``print_person`` with it. Using the person pointer, change the age of the person. Print both person and person pointer.

**Ex3: (Teaching.Codes - PS15 - Example 1)** Define a struct named "Person" which has a name (assume char) and age. Then define a struct named "House" which contains up to 9 persons, and a house name (assume char). Then define a struct named "Block" which contains exactly 10 houses.  Then write a program which reads 3 blocks from the user, and prints the oldest person and his house to the screen like: "t of house b". 

**Ex4: (Teaching.Codes - Lab 10 - Question 1)** The given code defines a struct: Student. The program currently reads an integer: n, then reads midterm 1, midterm 2 and final grades of n students. Assigns an id to each student from 1000 to 1000+n-1, and gives a letter grade 'I' to each of them. Then prints their id's and letter grades. 

You should complete the given section to assign an appropriate letter grade to each student. Like: 
100-75: A 
74-50: B 
49-25: C 
24-0: F 

Exam weights are 30%, %30, %40, respectively. 

**Ex5: (Teaching.Codes - Lab 10 - Question 2)** Define a struct named: Person which has an age, and a salary.
Define a struct named: Family which has up to 9 persons and personCount (integer). 

Write a function which takes 3 families, and returns the age of the person who earns the most in the family with the least total salary. (age of the richest person in the poorest family)

**Ex6:(Teaching.Codes - Lab 10 - Question 3)** Define a struct named: Book. Each book should have a name with exactly 3 letters (abbreviation). Each book should also have a page count (integer), and a price (integer). 

Write a program which reads an integer n first, then reads the names, page counts and prices of n books. 

Write a function which takes an array of books, and sorts them according to their prices. 

Using that function, your program should print the names and page counts of each book with the order of their prices. Like: 

1- LOT: 528 pages.
2- THG: 727 pages.
3- MSB: 340 pages.
etc.. 

Sample Input:

```c
5

5 fef 200

500 ced 132

543 geg 124

315 mer 634

1211 hat 124
```

Sample Output:
``` c
fef:200 pages.
mer:634 pages.
ced:132 pages.
geg:124 pages.
hat:124 pages.
```

