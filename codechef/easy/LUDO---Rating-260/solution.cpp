#include <stdio.h>

int main() {
    int T,X;
    scanf("%d", &T);
    while (T>0)
    {
        scanf("%d", &X);
        if(X==6)
        {printf("YES\n");}
        else
        {printf("NO\n");}
        T--;
    }
    return 0;
}

