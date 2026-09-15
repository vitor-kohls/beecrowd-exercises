#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

const char* get_range(float num){
    if(num > 100 || num < 0)
        return "Fora de intervalo";
    
    if(num <= 25)
        return "Intervalo [0,25]";
    if(num <=50)
        return "Intervalo (25,50]";
    if(num <=75)
        return "Intervalo (50,75]";
    return "Intervalo (75,100]";
}

int main() {

    float num;
    scanf("%f",&num);    

    printf("%s\n",get_range(num));

    return 0;
}