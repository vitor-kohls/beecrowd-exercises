#include <bits/stdc++.h>

#define MAX (int) pow(10,6)

//g++ X.cpp && ./a.out

using namespace std;

struct Cidade{
    int id;
    int pessoas;
    float consumopp;
};

bool compare(const Cidade& a, const Cidade& b){
    return a.consumopp < b.consumopp;
}

float trun(float x){
    return trunc(x * 100) / 100;
}

int main() {

    int n, x = 1;

    cin >> n;

    while(n){
        vector<Cidade> cidades;

        int sum = 0;
        int sum_p = 0;
        for(int i = 0; i < n; i++){
            int x, y;
            
            cin >> x >> y;
            // cout << y << endl;
            sum += y;
            sum_p += x;
            //cout << x << " " << y << endl;
            Cidade c;
            c.id = i;
            c.pessoas = x;
            c.consumopp = (float) y/x;
            cidades.push_back(c);
        }

        cout << "Cidade# " << x << ":" << endl;

        sort(cidades.begin(), cidades.end(), compare);

        vector<Cidade>::iterator it;

        for(it = cidades.begin(); it != cidades.end(); it++){
            //cout << it->pessoas << "-" << floor(it->consumopp) << " ";
            printf("%d-%d ", it->pessoas, (int)floor(it->consumopp));
        }

        cout << endl;


        printf("Consumo medio: %.2f m3.\n",trun((float) sum/sum_p));

        cin >> n;
        x++;
    }


    return 0;
}