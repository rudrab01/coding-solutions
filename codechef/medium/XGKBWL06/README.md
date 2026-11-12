# XGKBWL06

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

In many programming tasks, we often need to compare two numbers. Instead of writing the same if-else logic repeatedly, we can package the comparison into a reusable function.

Your task is to:

- Create a function int compare(int a, int b) that compares two integers.
- The function should return: -1 if a is less than b 0 if a is equal to b 1 if a is greater than b

In the `main()` function:

- Read two integers from input
- Call the compare() function
- Based on the return value, print the appropriate message: "First number is smaller" "Numbers are equal" "First number is greater"
### Input Format
- A single line containing two space-separated integers.
### Output Format
- A single line of text describing the relationship: "First number is smaller", "Numbers are equal", or "First number is greater".
### Sample 1:
Input
Output

```
10 25
```

```
First number is smaller
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-12T03:03:19.752Z  

```c_cpp
#include <stdio.h>

int compare(int a,int b){
    if(a<b) return -1;
    else if (a==b) return 0;
    else return 1;
}



int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int result = compare(num1, num2);
    if (result == -1) printf("First number is smaller\n");
    else if (result == 0) printf("Numbers are equal\n");
    else printf("First number is greater\n");

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/XGKBWL06)