# XGKBWL03

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You've written a function `void doubleIt(int num)` to double a number. However, when you run the provided code, you'll notice the number printed is the same as the input, not the doubled value!

Your task is to debug this. Fix the code by changing the `doubleIt` function to return the new value, and update the call in `main()` to use this returned value correctly.

### Input Format
- A single integer N.
### Output Format
- A single integer, which is the doubled value of the input.
### Sample 1:
Input
Output

```
7
```

```
14
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-12T02:48:30.116Z  

```c_cpp
#include <stdio.h>

int doubleIt(int num) {
    num = num * 2;
    return num;
}

int main() {
    int myNumber;
    scanf("%d", &myNumber);

    myNumber=doubleIt(myNumber);
    
    printf("%d\n", myNumber);

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/XGKBWL03)