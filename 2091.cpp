#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    
    long long x;
    long long res = 0;

    while(n){
        res = 0;
        for(long long i = 0; i < n; i++){
            cin >> x;
            res ^= x;
        }

        cout << res << endl;

        cin >> n;
    }
    


    return 0;
}