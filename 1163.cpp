#include <bits/stdc++.h>

#define G 9.80665
#define PI 3.14159

//g++ X.cpp && ./a.out


int main() {

    double h;
    int p1, p2, n;

    while(scanf("%lf %d %d %d", &h, &p1, &p2, &n) != EOF){
        for(int i = 0; i < n; i++){
            double a, v;
            scanf("%lf %lf", &a, &v);
            
            double vy = v * sin(a * PI/180);
            double vx = v * cos(a * PI / 180);

            double h2 = pow(vy, 2) / (2 * G);
            double t1 = vy / G;

            double t2 = sqrt( (h + h2) * (2 / G) );

            double x = vx * (t1 + t2);
            
            if(x >= p1 && x <= p2)
                printf("%.5lf -> DUCK\n", x);
            else
                printf("%.5lf -> NUCK\n", x);

            
        }
    }


    return 0;
}