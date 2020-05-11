## Strings

* Using ``scanf`` with string may be dangerous.
* ``fgets`` is a safer option.
* [Useful Link for Reading and Printing Strings](https://www.knowprogram.com/c-programming/read-and-display-the-string-in-c-programming/)
* You can check some basics from this repo before the lab session.

**Ex1: (Teaching.Codes PS13 - Example 1)** Write a function that compute the length of a given string. 

- Example Input: 

  hello world

- Example Output: 
	
	12

Hint: Try using ``strlen`` function from ``string.h`` library.

**Ex2: (Teaching.Codes PS13 - Example 2)** Write a function that copies a source string to the destination string. You can assume that (you should ensure that) destination string is large enough:
- Example Input:
	cmpe150
- Example Output:
	Source string cmpe150
	Destination string cmpe150
Hint: Try using ``strcpy`` function from ``string.h`` library.

**Ex3: (Teaching.Codes PS13 - Example 4)** Write a function that takes two strings as argument and compares them. The function should perform what ``strcmp`` function from ``string.h`` library. Validate your function by using ``strcmp`` along with your function.

- Example Input:
	abz
	abc
- Example Output:
	23
	

**Ex4:** Write a program to count the total number of words in a string.
- Example Input: 
this string has x words
- Example Output:
5

**Ex5:** Write a program to find maximum occurring character in a string assume all characters in lowercase.

* Example Input:

  some same stuff

* Example Output:

  s

**Ex6: (Teaching.Codes Lab8b - Question 1)** Write a program which reads a sentence as a string, and a word as a string. Then the program should exclude this word from the sentence if the sentence contains the word, then print the new version to the screen. Assume no punctuation will occur, and every letter is lower case. 

- Example Input:
merhaba dunyali nasilsin
dunyali
- Example Output:
merhaba nasilsin
	

**Ex7: (Teaching.Codes Lab8b - Question 2)** Write a function which takes a sentence as a string (char array) with size at most 150, and one integer (x), and another empty string with size at most 30. The function should put the x.th word of the sentence to the empty string. 

In the main program read a sentence, and an integer from the user, then call the function and print the resulting word to the screen. Assume every letter is lower case, and no punctuation will occur, and the sentence will have enough words to return the requested one. 
- Example Input:
what the hell is going on
4
- Example Output:
is

**Ex8:** Write a program which takes a string as parameter and sorts words of this string and prints the resulting string. Assume initial string has maximum 100 characters and the length of each word is at most 10. 

Hint: You can use bubble sort algorithm.

- Example Input:
what the hell is going on here
- Example Output:
going hell here is on the what

