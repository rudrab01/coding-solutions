# XGKBWL02

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

In a team game, two players contribute individual scores. The team's final synergy score is calculated using the following rule:

- Add the two players' scores.
- Square the resulting sum.

Write a C program that:

- Defines a function int add(int a, int b) to return the sum of two integers.
- Defines a function int square(int num) to return the square of an integer.
- In main(), reads two integers from input, uses add() to compute their sum, then uses square() to compute and print the synergy score.
### Input Format
- A single line containing two space-separated integers - the scores of the two players.
### Output Format
- A single integer representing the synergy score.
### Constraints
- $1 \leq a, b \leq 10^3$
### Sample 1:
Input
Output

```
5 4
```

```
81
```

### Explanation:
- The sum of 5 and 4 is 9.
- The square of 9 is 81.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-12T02:45:48.329Z  

```c_cpp
#include <stdio.h>

int add(int a, int b) {
    return (a+b);
    
}


int square(int num) {
    return (num*num);
    
}

int main() {
    int score1, score2;
    scanf("%d %d", &score1, &score2);

   
    int synergy_score = square(add(score1,score2));

    printf("%d\n", synergy_score);

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/XGKBWL02)