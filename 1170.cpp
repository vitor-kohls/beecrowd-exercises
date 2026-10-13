#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

using namespace std;

int main() {


	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		float c;
		cin >> c;
		int dias = 0;
		while(c > 1){
			dias++;
			c/=2;
		}

		cout << dias << " dias" << endl;
	}
    


    return 0;
}
