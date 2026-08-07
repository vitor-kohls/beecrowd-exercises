#include <bits/stdc++.h>

int main() {

    int time, avg;

    scanf("%d %d", &time, &avg);

    int dist = time * avg;
    float liters = dist / 12.0;

    printf("%.3f\n", liters);

    return 0;
}