# AYXVYX01

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Imagine you're tracking a player's scores in a video game. To help them see their recent performance, you need to show their scores in reverse order.

Your task is to write a program that first reads an integer `N`, which is the total number of scores. Then, it should read `N` integer scores into an array. Finally, display these scores back to the user in the reverse order they were entered, from the most recent score to the very first one.

### Input Format
- The first line contains a single integer N.
- The second line contains N space-separated integers, representing the scores.
### Output Format
- Print the N scores in reverse order, separated by a single space.
### Constraints
- $1 \leq N \leq 100$
### Sample 1:
Input
Output

```
5
10 50 20 80 30
```

```
30 80 20 50 10
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-18T19:41:45.455Z  

```c_cpp
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int scores[100];

    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    for (int i = n-1; i >= 0; i--){
        printf("%d ", scores[i]);
    }


    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/AYXVYX01)