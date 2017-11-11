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