# Chapter 3
#### *Variables, Data Types, and Arithmetic Expressions*

## Exercises

### 1.

Type in and run the five programs presented in this chapter.

- [Program 3.1](program-3-1.c)
- [Program 3.2](program-3-2.c)
- [Program 3.3](program-3-3.c)
- [Program 3.4](program-3-4.c)
- [Program 3.5](program-3-5.c)

### 2.

List which of the following are invalid variables names, and why.

*Answer:*
```
char // Keyword for a type in C
6_05 // Variable names cannot start with a digit
A$ // Variable names must be alphanumeric
```

### 3.

List which of the following are invalid constants, and why.

*Answer:*
```
// Useful resource: https://www.eecis.udel.edu/~breech/progteam/contests/one-on-one-fall99.1/valid-c-const.html

0096 // Octal constants can only contain integers between 0 and 7
0x10.5 // Hexadecimal floats require a exponent (e.g. 0x10.5p2 where 0x is a prefix indicating a hexadecimal value, 10.5 is the significand, and p2 indicates 10 to the power of 2)
98.7U // Invalid suffix U on a floating constant
1.2Fe-7 // Invalid suffix Fe-7 on a floating constant (1.2e-7 would be valid, don't need a F suffix on a literal floating constant)
0X0G1 // Hexadecimal integer can only include characters from A - F
17777s // An integer can only be followed by the suffix' u, U, l, or L
15,000 // No commas are allowed in a integer
```

### 4.

Write a program that converts 27® from degrees Fahrenheit (F) to degrees Celsius (C).

- [Exercise 3.4](exercise-3-4.c)

### 5.

Write down the expected output from the [following program](exercise-3-5.c).

*Answer:*
```
d = d
```

### 6.

Write a program to evaluate the polynomial `3x3 - 5x2 + 6`.

- [Exercise 3.6](exercise-3-6.c)

### 7.

Write a program that evaluates the expression `(3.31 x 10^-8 x  2.01 x 10^-7) / (7.16 x 10^-6 + 2.01 x 10^-8)` and displays the results.

- [Exercise 3.7](exercise-3-7.c)

### 8.

For the next exercise, use the following formula to find the largest even multiple of i when divided by j:

```
Next_multiple = i + j - i % j
```

### 9.

Write a program to find the next largest even multiple for the following values of i and j:

|    i   |   j   |
| ------ | ----- |
|   365  |   7   |
| 12,258 |   23  |
|   996  |   4   |

- [Exercise 3.9](exercise-3-9.c)
