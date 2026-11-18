# AYXVYX04

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are tasked with cleaning up data from a faulty sensor. The sensor provides 12 integer readings, but sometimes it produces wrong negative values. Your job is to write a program that reads these 12 values into an array, replaces every negative number with 0, and then prints the corrected array. This process is a simple form of data cleaning, ensuring all readings are non-negative.

### Input Format
- A single line containing 12 space-separated integers.
### Output Format
- A single line containing the 12 corrected integers, separated by spaces.
### Sample 1:
Input
Output

```
10 -5 8 0 -12 22 4 -1 99 1 -7 5
```

```
10 0 8 0 0 22 4 0 99 1 0 5
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-18T20:04:33.620Z  

```c_cpp
#include <stdio.h>

int main() {
    int readings[12];
    int i;

    for (i = 0; i < 12; i++) {
        scanf("%d", & readings[i]);
    }

    for (i = 0; i < 12; i++) {
        if (readings[i] < 0)
            readings[i] = 0;
    }



    for (i = 0; i < 12; i++) {
        printf("%d ", readings[i]);
    }
    printf("\n");

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/AYXVYX04)