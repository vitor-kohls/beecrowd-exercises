#include <bits/stdc++.h>

int main() {

    float x1,y1,x2,y2;
    
    
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
 
    float dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
 
    printf("%.4f\n", dist);

    return 0;
}