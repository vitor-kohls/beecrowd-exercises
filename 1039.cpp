#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

int main() {

    int r1,x1,y1,r2,x2,y2;

    while(scanf("%d %d %d %d %d %d", &r1, &x1, &y1, &r2, &x2, &y2) != EOF){
 
        float dist = fsqrt(pow(x1-x2,2) + pow(y1 - y2, 2));
        //printf("Dist: %f\n",dist);
        //printf("R1 + R2 = %d + %d = %d\n", r1, r2, r1+r2);
        

        if(dist+r2 > r1)
            printf("MORTO\n");
        else
            printf("RICO\n");
    }


    return 0;
}