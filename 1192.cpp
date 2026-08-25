#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

int process(int a, int b, char l){
    if (a == b)
        return a * b;

    //printf("%c - 'a' = %d\n",l, l-'a');
    
    if (l - 'a' >= 0)
        return b + a;

    return b - a;
}

int main() {

    int n;
    scanf("%d", &n);

    char in[3];
    for(int i = 0; i < n; i++){
        scanf("%s", in);
        char letra = in[1];

        int a = in[0] - '0';
        int b = in[2] - '0';

        //printf("Letra: %c a: %d b: %d\n",letra, a, b);
        printf("%d\n", process(a, b, letra));
    }

    return 0;
}