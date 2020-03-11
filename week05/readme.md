If you are curious about why we cannot use something like `a<b<c` (three-way comparison) please check [this](https://github.com/melsener/cmpe150/tree/master/week05/this_is_super_interesting.c).

### What is actually happening?

The relational operators `<, >, <=, >=, ==, !=` are evaluated from left to the right. It means, when you write something like `4<3<6` it will be evaulated as if `(4<3)<6`. In this case, it first evaulates `4<3` which is false (shown with 0 in C). Then it evaluates `0<6` which is true (shown with a non-zero integer in C). Hence overall expression turns out to be true, but we know that is false.

For more information about operator precedence and assocativity please check:

- [this book](https://www.google.com/search?q=c+how+to+program+deitel&oq=c+how+to+program+deitel&aqs=chrome..69i57j0l6.4740j0j7&sourceid=chrome&ie=UTF-8) Appendix-A. **But in general check that book.** 
- Or [this link](https://www.tutorialspoint.com/cprogramming/c_operators_precedence.htm).





