
# 0x02-functions_nested_loops

C supports nesting of loops in C. Nesting of loops is the feature in C that allows the looping of statements inside another loop. Let's observe an example of nesting loops in C.

Any number of loops can be defined inside another loop, i.e., there is no restriction for defining any number of loops. The nesting level can be defined at n times.
 You can define any type of loop inside another loop; for example, you can define 'while' loop inside a 'for' loop.
![nesting](https://cdn.educba.com/academy/wp-content/uploads/2020/02/nested-loop-in-c.jpg)
# Project 

10 x alphabet

Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

Prototype: void print_alphabet_x10(void);
You can only use _putchar twice in your code
Solution: [2-print_alphabet_x10.c](https://github.com/Jadvdm/alx-low_level_programming/blob/master/0x02-functions_nested_loops/2-print_alphabet_x10.c)


Write a function that checks for lowercase character.

Prototype: int _islower(int c);
Returns 1 if c is lowercase
Returns 0 otherwise
Solution: [3-islower.c](https://github.com/Jadvdm/alx-low_level_programming/blob/master/0x02-functions_nested_loops/3-islower.c)


Write a function that checks for alphabetic character.

Prototype: int _isalpha(int c);
Returns 1 if c is a letter, lowercase or uppercase
Returns 0 otherwise
Solution: [4-isalpha.c](https://github.com/Jadvdm/alx-low_level_programming/blob/master/0x02-functions_nested_loops/4-isalpha.c)


Write a function that prints the sign of a number.

Prototype: int print_sign(int n);
Returns 1 and prints + if n is greater than zero
Returns 0 and prints 0 if n is zero
Returns -1 and prints - if n is less than zero
Solution: [5-sign.c](https://github.com/Jadvdm/alx-low_level_programming/blob/master/0x02-functions_nested_loops/5-sign.c)

There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you

Write a function that computes the absolute value of an integer.

Prototype: int _abs(int);
Solution: 6-abs.c


There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important

Write a function that prints the last digit of a number.

Prototype: int print_last_digit(int);
Returns the value of the last digit
Solution: 7-print_last_digit.c

I'm federal agent Jack Bauer, and today is the longest day of my life

Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

Prototype: void jack_bauer(void);
Solution: 8-24_hours.c


Learn your times table

Write a function that prints the 9 times table, starting with 0.

Prototype: void times_table(void);
Format: see example
Solution: 9-times_table.c

Write a function that adds two integers and returns the result.

Prototype: int add(int, int);
Solution: 10-add.c

11, 98 Battery Street, the OG

Write a function that prints all natural numbers from n to 98, followed by a new line.

Prototype: void print_to_98(int n);
Numbers must be separated by a comma, followed by a space
Numbers should be printed in order
The first printed number should be the number passed to your function
The last printed number should be 98
You are allowed to use the standard library
Solution: 11-print_to_98.c

Nature made the natural numbers; All else is the work of women

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.

You are allowed to use the standard library
Solution: 101-natural.c

In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A

Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.

The numbers must be separated by comma, followed by a space ,
You are allowed to use the standard library
Solution: 102-fibonacci.c

Even Liber Abbaci

Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.

You are allowed to use the standard library
Solution: 103-fibonacci.c
Give feedback
