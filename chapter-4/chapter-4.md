# Chapter 4
#### *Program Looping*

## Exercises

### 1.

Type in and run the nine programs presented in this chapter.

- [Program 4.1](program-4-1.c)
- [Program 4.2](program-4-2.c)
- [Program 4.3](program-4-3.c)
- [Program 4.4](program-4-4.c)
- [Program 4.5](program-4-5.c)
- [Program 4.6](program-4-6.c)
- [Program 4.7](program-4-7.c)
- [Program 4.8](program-4-8.c)
- [Program 4.9](program-4-9.c)

### 2.

Write a program to generate and display a table of n and n^2, for integer values of n ranging from 1 to 10.

- [Exercise 4.2](exercise-4-2.c)

### 3.

Write a program that generates a table of triangular numbers for every fifth triangular number using the following formula:

```c
triangularNumber = n (n + 1) / 2
```

- [Exercise 4.3](exercise-4-3.c)

### 4.

Write a program that generates a table of factorials from 1 to 10.

- [Exercise 4.4](exercise-4-4.c)

### 5.

Properly format the example program given in the textbook.

- [Exercise 4.5](exercise-4-5.c)

### 6.

Substitute the printf() statement in [Program 4.3](program-4-3.c) for a left-justified statement using the `-` sign. Compare the outputs.

- [Exercise 4.6](exercise-4-6.c)

*Answer:*

Using a left-justified symbol in the printf() statement along with a field width specification means that, as expected, numbers are aligned to the left side of the max field width rather than the right. If your field width specification is 3, single-digit integers will start on the left of the 3 denoted spaces, and fill in to the right as they reach two or three digits in length.

### 7.
Determine the purpose of using a decimal point before the field width specification in a printf() statement.

- [Exercise 4.7](exercise-4-7.c)

*Answer:*

Using a decimal point in a field width specificer allows you to tell the compiler how many decimal points you want included. For example, `%4.2i` would tell the compiler you want to print an integer of total length 4, two digits of which should be after the decimal point.

### 8.
Modify [Program 4.5](program-4-5.c) to allow the user to type in the number of triangular numbers they want to calculate.

- [Exercise 4.8](exercise-4-8.c)

### 9.
Rewrite Program 4.2 through 4.5, replacing all uses of the _for_ statement with equivalent _while_ statements.

- [Exercise 4.9.1 (Based on Program 4.2)](exercise-4-9-1.c)
- [Exercise 4.9.2 (Based on Program 4.3)](exercise-4-9-2.c)
- [Exercise 4.9.3 (Based on Program 4.4)](exercise-4-9-3.c)
- [Exercise 4.9.4 (Based on Program 4.5)](exercise-4-9-4.c)

### 10.
What happens if you type a negative number into [Program 4.8](program-4-8.c)? Try it and see.

*Answer:*

Since the modulo operator sometimes returns negative numbers, the program still reverses the numbers correctly but sometimes prepends a minus sign to each digit! A way to fix this would be to detect a minus sign at the beginning, prepend a minus sign to the beginning of the reversed number, then run the while loop on the equivalent positive number as usual.

### 11.
Write a program that calculates the sum of the digits of an integer. FOr example, the sum of the digits of the number 1234 would be `1 + 2 + 3 + 4`, or 10. The program should accept any arbitrary integer typed in by a user.

- [Exercise 4.11](exercise-4-11.c)
