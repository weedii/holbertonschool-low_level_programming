## C - Variadic functions

---

0. Beauty is variable, ugliness is constant

- A function that returns the sum of all its parameters.

* Prototype: int sum_them_all(const unsigned int n, ...);
* If n == 0, return 0

- File: [0-sum_them_all.c](./0-sum_them_all.c)

---

1. To be is to be the value of a variable

- A function that prints numbers, followed by a new line.

* Prototype: void print_numbers(const char \*separator, const unsigned int n, ...);
* where separator is the string to be printed between numbers
* and n is the number of integers passed to the function
* If separator is NULL, don’t print it
* Print a new line at the end of your function

- File: [1-print_numbers.c](./1-print_numbers.c)

---

2. One woman's constant is another woman's variable

- A function that prints strings, followed by a new line.

* Prototype: void print_strings(const char \*separator, const unsigned int n, ...);
* where separator is the string to be printed between the strings
* and n is the number of strings passed to the function
* If separator is NULL, don’t print it
* If one of the string is NULL, print (nil) instead
* Print a new line at the end of your function

- File: [2-print_strings.c](./2-print_strings.c)

---

3. To be is a to be the value of a variable

- A function that prints anything.

* Prototype: void print_all(const char \* const format, ...);
* where format is a list of types of arguments passed to the function
  - c: char
  - i: integer
  - f: float
  - s: char \* (if the string is NULL, print (nil) instead
* any other char should be ignored
* 2 while loops
* 2 if
* Print a new line at the end of your function

- File: [3-print_all.c](./3-main.c)
