#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

using namespace std;

int led_count(char n){
    switch(n){
        case '0': return 6;
        case '1': return 2;
        case '2': return 5;
        case '3': return 5;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 3;
        case '8': return 7;
        case '9': return 6;
    }
    return 0;
}

int main() {

    int c;

    scanf("%d", &c);
    string n;

    for(int i = 0; i < c; i++){

        cin >> n;

        int sum = 0;
        for(int i = 0; i < n.length(); i++){
            sum += led_count(n[i]);
        }
        printf("%d leds\n", sum);
    }
    
    return 0;
}