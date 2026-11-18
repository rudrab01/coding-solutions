# AYXVYX03

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

A sports analyst needs your help! You are given the scores from 15 rounds of a video game competition. Your task is to write a program that reads these 15 scores into an array, counts how many scores are even and how many are odd, and then prints the final counts. This will help the analyst see if players tend to score in odd or even patterns.

### Input Format
- A single line containing 15 space-separated integers.
### Output Format
- Two lines of output. The first line should be Even: followed by the count of even numbers. The second line should be Odd: followed by the count of odd numbers.
### Sample 1:
Input
Output

```
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
```

```
Even: 7
Odd: 8
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-18T19:59:42.803Z  

```c_cpp
#include <stdio.h>

int main() {
    int scores[15];
    int even_count = 0;
    int odd_count = 0;
    int i;

    for (i = 0; i < 15; i++) {
        scanf("%d", & scores[i]);
    }

    for (i = 0; i < 15; i++) {
        if (scores[i] % 2 == 0)
            even_count++;
        else
            odd_count++;

    }

    printf("Even: %d\n", even_count);
    printf("Odd: %d\n", odd_count);

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/AYXVYX03)