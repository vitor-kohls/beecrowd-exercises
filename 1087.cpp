#include <bits/stdc++.h>


int main() {

    int x1, y1, x2, y2;
    int moves;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    while(x1 || x2 || y1 || y2){
        if(x1 == x2 && y1 == y2) // mesmo ponto
            moves = 0;
        else if ( fabs(x1-x2) == fabs(y1-y2) || x1==x2 || y1==y2 ){ // diagonal
            moves = 1;
        }else{
            moves = 2;
        }
        printf("%d\n", moves);
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    }


    return 0;
}