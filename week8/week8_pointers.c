#include <stdio.h>
#include <stdlib.h>

int main(){
    // Fig 1

    int a = 3, b = 2, *ptr, *x, *y;
    //Fig 2


    ptr = &a;   /* ptr has the value of the address of a */
    //Fig 3
    printf("ptr:%p\n",ptr);


    b = *ptr; /* in the p, address of a is kept, then by using *ptr, you access to variable a, then b = 3 */
    // Fig 4
    printf("b:%d *ptr:%d ptr:%p\n",b,*ptr,ptr);

    *ptr = a;   /* value of a does not change */
    // Fig 5
    printf("a:%d\n",a);

    *ptr = 5;
    // Fig 6
    printf("a:%d b:%d\n",a,b); /* value of a changed but b stays the same*/


    x = ptr;    /* the value of ptr assign to the varable x */
    // Fig 7
    printf("x:%p\n",x);



    x = &*ptr;  /* first access the variable which is stored in the
                        address, whose value is kept in ptr, then take its
                        address, the result is simply equal to the value of ptr*/
    // Fig 8
    printf("x:%p\n",x);




    y = *&ptr;  /* take the address of the variable ptr, then access the
                        the variable that is stored in this address. This is
                        simply the value stored in ptr */
    // Fig 9
    printf("y:%p\n",y);




    a = *&b;    /* take the address of variable b, then access the variable
                            which is stored in this address, simply b*/
    // Fig 10
    printf("a:%d b:%d\n",a,b);
    printf("ptr:%p x:%p y:%p\n",ptr,x,y);
    printf("*ptr:%d *x:%d *y:%d\n",*ptr,*x,*y);


    //a = &*b;  /* invalid, since * can be applied to pointers or addresses. comment out this line for successful compile*/

    return 0;
}
