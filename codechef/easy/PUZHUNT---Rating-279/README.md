# PUZHUNT - Rating 279

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-03T15:26:17.340Z  

```c_cpp
#include <stdio.h>

int main() {
    int T, X;
    scanf("%d", &T);
    while(T!=0){
        scanf("%d", &X);
        if(X>=30){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        T--;
    }
    return 0;
}


```

---

[View on CodeChef](https://www.codechef.com/problems/PUZHUNT)