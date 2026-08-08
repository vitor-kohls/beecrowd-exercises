#include <bits/stdc++.h>

int main() {
    
    int start, end;

    scanf("%d %d", &start, &end);
    
    if(end <= start){
        end += 24;
    }

    printf("O JOGO DUROU %d HORA(S)\n", end-start);

    return 0;
}