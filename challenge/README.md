# Fix My Code Challenge

## Task 0: FizzBuzz

### Description

This project is part of the Fix My Code Challenge.

The objective of this task is to identify and fix a bug in an existing Python implementation of the FizzBuzz algorithm.

### Problem

The original code printed `Fizz` for numbers divisible by both 3 and 5 (such as 15), instead of printing `FizzBuzz`.

### Solution

The bug was caused by checking if a number was divisible by 3 before checking if it was divisible by both 3 and 5.

The condition for `FizzBuzz` was moved before the condition for `Fizz` so that numbers divisible by both 3 and 5 are handled correctly.

### Usage

```bash
./0-fizzbuzz.py 50
```

### Expected Output

```text
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz ...
```

