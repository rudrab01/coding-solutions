# XGKBWL01

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

In a simple video game, you get a special bonus if your score is an even number. The bonus triples your score! If your score is odd, it remains the same.

Your task is to write a C program that implements this logic. Create a function `int calculateFinalScore(int currentScore)` that takes an integer score and returns the new score after applying the bonus rule. The `main` function will read a score, call your function, and print the result.

### Input Format
- A single integer representing the player's score.
### Output Format
- A single integer representing the final score.
### Sample 1:
Input
Output

```
10
```

```
30
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-12T02:41:45.017Z  

```c_cpp
#include <stdio.h>

// This function should take an integer score.
// If the score is even, it returns the score tripled.
// Otherwise, it returns the score unchanged.
int calculateFinalScore(int currentScore) {
    if(currentScore%2 == 0)
    return (currentScore*3);
    else
    return currentScore;

}

int main() {
    int score;
    scanf("%d", &score);
    int finalScore = calculateFinalScore(score);
    printf("%d\n", finalScore);
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/XGKBWL01)