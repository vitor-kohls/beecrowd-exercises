#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

using namespace std;

bool is_vogal(char c){
    if(c <= 'Z' && c >= 'A')
        c += 32;

    switch (c)
    {
    case 'a':
        return true;
    case 'e':
        return true;
    case 'i':
        return true;
    case 'o':
        return true;
    case 'u':
        return true;

    }

    return false;
}

int main() {


    int n;
    cin >> n;

    char nome[50];
    for(int i = 0; i < n; i++){
        scanf("%s", nome);


        int consec = 0;
        for(int x = 0; nome[x] != '\0'; x++){
            //cout << "Letra: " << nome[x];
            if(is_vogal(nome[x]))
                consec = 0;
            else
                consec++;
            
            //cout << " Consec: " << consec << endl;

            if(consec == 3)
                break;
            
        }

        if(consec == 3)
            cout << nome << " nao eh facil" << endl;
        else
            cout << nome << " eh facil" << endl;

    }
    


    return 0;
}