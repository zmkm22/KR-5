# Pointers

0. Though `array` stores an address, it is not a pointer, because it is bound to the initial array entry and cannot be reassigned: permenantly associated to array. This differs from a pointer, which is an variable and can be reassigned. 

1. `a[j]` is equivalent to `*(a+j)`. Actually the machine converts array indexing notation to the pointer notaion. So the pointer is more fundamental.

```
int array[10], *ptr;
ptr = array;
```

## Pointers to Functions
Explain the meaning 
```
if ((*comp)(v[i],v[left]) < 0 )
    ...
```

This is an `if` structure, and the complicated condition is test whether `(*comp)(v[i],v[left])` is negative. If negative, the body of `if` is executed. Let `f = *comp` then we see `(*comp)(..)=f(v[i],v[left])` is a function of two parameters. Thus `comp` is the pointer to the function.




Compare the return types of functions `int *comp(...){...}` with `int (*comp)(...){...}`. The first returns a pointer to an `int`. The second returns an `int` where the `comp` is a pointer to the function.

> Review p.122
> Recursive descent parser


## Command Line Arguments

0. What is a null pointer?

1. The vector of command line arguments must terminate by a null pointer

> Echo function in GNU https://github.com/coreutils/coreutils/blob/master/src/echo.c
> Description of core utilities http://www.maizure.org/projects/decoded-gnu-coreutils/

2. Any pointer can first converted to `void *` the pointer of void type, then casted back without information loss, thus the void pointer is a generic pointer that can be used in functions arguments before we know the `type` of inputs to the function

## Pointer can use indexing!!!
```
pointer = &array[0]
// pointer[5] is element 5 of array
```
A pointer is a variable, therefore we can operate on it like `pointer++` or `pointer = ptr` but an arrary name is not a variable, thus operations like increments and assignment are illegal!

> What is the difference between pointer to int and pointer to array of int??
```
int *i, *array;
```

> An array, each element is a pointer `int *address[]`
An array of strings would be stored as such an array of pointers

```
int array[i][j]

```
`array` is an array of i elements, each is an array of j elements 
