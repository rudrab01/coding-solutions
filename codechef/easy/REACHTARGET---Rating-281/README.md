# REACHTARGET - Rating 281

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-10T06:16:31.601Z  

```c_cpp
#include <stdio.h>

int main() {
    int T, X, Y;
    scanf("%d\n", &T);
    while(T>0){
        scanf("%d %d", &X,&Y);
        if(X>Y){
            printf("A\n");
        }
        else{
            printf("B\n");
        }
        T--;
    }
    return 0;
    
}


```

---

[View on CodeChef](https://www.codechef.com/problems/REACHTARGET)