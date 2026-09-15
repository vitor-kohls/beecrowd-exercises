#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

using namespace std;

int main() {

    int n;
    cin >> n;

	int a_win = 0, b_win = 0;
	
    for(int i = 0; i < n; i++){
		vector<int> a = {0, 0, 0};
		vector<int> b = {0, 0, 0};

		for(int j = 0; j < 3; j++){
			scanf("%d", &a[j]);
		}
		for(int j = 0; j < 3; j++){
			scanf("%d", &b[j]);
		}

		map<int, int> simbolico = {
			{4, 1},
			{5, 2},
			{6, 3},
			{7, 4},
			{12, 5},
			{11, 6},
			{13, 7},
			{1, 8},
			{2, 9},
			{3, 10}
		};
		
		int a_rod = 0, b_rod= 0;
		for(int j = 0; j < 3; j++){
			
			if(simbolico[a[j]] >= simbolico[b[j]])
				a_rod++;
			else
				b_rod++;
		}
		if(a_rod > b_rod){
			a_win++;
			//cout << "A ganhou!!" << endl;
		}else{
			b_win++;
			//cout << "B ganhou!!" << endl;
		}
				
    }
	cout << a_win << " " << b_win << endl;

    return 0;
}
