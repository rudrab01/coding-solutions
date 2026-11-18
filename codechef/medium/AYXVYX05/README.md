# AYXVYX05

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Imagine you have a music player with a small playlist of 5 songs, represented by integer IDs. You want to implement a "shift right" feature. This feature takes the last song in the list and moves it to the very beginning, shifting all other songs one position to the right.

Your task is to write a program that reads 5 song IDs, performs this rightward shift on the list, and then prints the new song order.

### Input Format
- A single line containing 5 integers, separated by spaces.
### Output Format
- A single line containing 5 integers, representing the new playlist order, separated by spaces.
### Sample 1:
Input
Output

```
10 20 30 40 50
```

```
50 10 20 30 40
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-18T20:11:09.451Z  

```c_cpp
#include <stdio.h>

#define SIZE 5

int main() {
    int playlist[SIZE];
    int i;

    for (i = 0; i < SIZE; i++) {
        scanf("%d", & playlist[i]);
    }

    int temp = playlist[SIZE - 1];
    for (i = SIZE - 1; i > 0; i--) {
        playlist[i] = playlist[i - 1];

    }
    playlist[0] = temp;



    for (i = 0; i < SIZE; i++) {
        printf("%d ", playlist[i]);
    }
    printf("\n");

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/AYXVYX05)