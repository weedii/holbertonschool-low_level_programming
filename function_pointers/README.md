## C - Function pointers

---

0. What's my name

- A function that prints a name.

* Prototype: void print_name(char *name, void (*f)(char \*));

- File: [0-print_name.c](./0-print_name.c)

---

1. If you spend too much time thinking about a thing, you'll never get it done

- A function that executes a function given as a parameter on each element of an array.

* Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
* where size is the size of the array
* and action is a pointer to the function you need to use

- File: [1-array_iterator.c](./1-array_iterator.c)

---

2. To hell with circumstances; I create opportunities

- A function that searches for an integer.

* Prototype: int int_index(int *array, int size, int (*cmp)(int));
* where size is the number of elements in the array array
* cmp is a pointer to the function to be used to compare values
* int_index returns the index of the first element for which the cmp function does not return 0
* If no element matches, return -1
* If size <= 0, return -1

- File: [2-int_index.c](./2-int_index.c)

---

3. A goal is not always meant to be reached, it often serves simply as something to aim at

- A program that performs simple operations.

* Usage: calc num1 operator num2
* num1 and num2 are integers, so use the atoi function to convert them from the string input to int
* operator is one of the following:
  +: addition
  -: subtraction
  \*: multiplication
  /: division
  %: modulo

* The program prints the result of the operation, followed by a new line
* The result of all operations can be stored in an int
* If the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
* If the operator is none of the above, print Error, followed by a new line, and exit with the status 99
* If the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100

* This task requires that you create four different files.

- 3-calc.h
  This file contain all the function prototypes and data structures used by the program.

- 3-op_functions.
  This file contain the 5 following functions:

* op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
* op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
* op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
* op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
* op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);

- 3-get_op_func.c
  This file contain the function that selects the correct function to perform the operation asked by the user.

- Prototype: int (*get_op_func(char *s))(int, int);

* where s is the operator passed as argument to the program
* This function returns a pointer to the function that corresponds to the operator given as a parameter.
* Example: get_op_func("+") should return a pointer to the function op_add
* If s does not match any of the 5 expected operators (+, -, \*, /, %), return NULL

- 3-main.c
  This file contain the main function only.

* Compilation and examples:

```
ion pointers$ ./calc 1 + 1
2
ion pointers$ ./calc 1024 '*' 98
100352
ion pointers$ ./calc 1024 '\*' 98
Error
```

- Files: [3-main.c](./3-main.c), [3-op_functions.c](./3-op_functions.c), [3-get_op_func.c](./3-get_op_func.c), [3-calc.h](./3-calc.h)
