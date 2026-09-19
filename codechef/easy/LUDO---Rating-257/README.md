# LUDO - Rating 257

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-19T12:56:04.736Z  

```c_cpp
#include <stdio.h>

int main(){
    int T,Y,X,P;
    scanf("%d", &T);
    while (T>0)
    {scanf("%d %d", &X, &Y);
    P = X*Y ;
    printf("%d\n", P);
    T--;
    }
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LUDO)