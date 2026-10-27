#include <bits/stdc++.h>
#define MAX 500


//g++ X.cpp && ./a.out

using namespace std;

vector<string> cache = {"1", "2"};



string sum(string a, string b){
    string res = "";
    int carry = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;
    
    while (i >= 0 || j >= 0 || carry > 0) {
        int aux = carry;

        if (i >= 0) {
            aux += a[i] - '0';
            i--;
        }
        
        if (j >= 0) {
            aux += b[j] - '0';
            j--;
        }
        
        carry = aux / 10;
        aux = aux % 10;
        
        res = (char)(aux + '0') + res;
    }
    
    return res;
}

void fibo(int n){
    for(int i = cache.size(); i <= n; i++){
        string proximo = sum(cache[i - 1], cache[i - 2]);
        cache.push_back(proximo);
    }
}

int compare_str(string a, string b){
    if(a.size() < b.size())
        return -1;
    if(a.size() > b.size())
        return 1;

    if(a < b)
        return -1;
    if(a > b)
        return 1;
    return 0;
}


int main() {
    fibo(MAX);

    string a, b;
    cin >> a >> b;
    while(a != "0" || b != "0"){
        int init_pos = 1;
        for(int i = 0; i <= MAX; i++){
            if(compare_str(cache[i], a) >= 0){
                init_pos = i;
                break;
            }
        }

        int count = 0;
        
        for(int i = init_pos; i <= MAX; i++){
            if(compare_str(cache[i], b) <= 0)
                count++;
            else
                break;
        }

        cout << count << endl;


        cin >> a >> b;
    }

    return 0;
}