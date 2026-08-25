#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

int main() {

    int n;

    scanf("%d", &n);

    int start = 1;
    for(int i = 0; i < n; i++){
        printf("%d %d %d PUM\n", start, start+1, start+2);
        start = start + 2 + 2;
    }

    return 0;
}