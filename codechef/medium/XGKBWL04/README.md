# XGKBWL04

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You're learning how functions can simplify complex tasks by packaging logic. Your challenge is to create a "digit summer" tool.

Write a function int `sumDigits(int n)` that takes a single non-negative integer n and returns the sum of all its individual digits.

For example, if the input is 123, the function should return 6 (because 1 + 2 + 3 = 6).

The `main()` function will:

- Read the input value
- Call your sumDigits() function
- Print the returned result
### Input Format
- A single non-negative integer n.
### Output Format
- A single integer - the sum of digits of the input.
### Constraints
- $0 \leq n \leq 10^9$
### Sample 1:
Input
Output

```
123
```

```
6
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-12T02:53:21.613Z  

```c_cpp
#include <stdio.h>

int sumDigits(int n) {
    int sum=0;
    while (n!=0){
        sum = sum +(n%10);
        n=n/10;
    }
    return sum;
    
    
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", sumDigits(n));
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/XGKBWL04)