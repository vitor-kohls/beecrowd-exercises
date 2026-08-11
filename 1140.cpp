#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

bool is_padrao(char a, char b){
    return a == b || a+32 == b || a == b+32;
}

int main() {
    int max_frase_size = 50 * 20 + 1;
    char frase[max_frase_size];


    scanf(" %[^\n]", frase);
    int count = 0;
    while(frase[0] != '*'){
        char primeira_letra = frase[0];
        bool padrao = true;
        // Processa a frase
        for(int i =0; i<strlen(frase); i++){
            char c = frase[i];
            if(c == ' '){ //separação de palavras
                //printf("Comparando %c com %c\n",primeira_letra, frase[i+1]);
                padrao = is_padrao(primeira_letra, frase[i+1]);
                if(!padrao){
                    break;
                }
            }   
        }
        if(padrao)
            printf("Y\n");
        else
            printf("N\n");
        
        scanf(" %[^\n]", frase);
    }
    
    return 0;
}