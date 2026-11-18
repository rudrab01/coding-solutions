# AYXVYX05

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-18T20:04:35.789Z  

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

[View on CodeChef](https://www.codechef.com/problems/AYXVYX05)