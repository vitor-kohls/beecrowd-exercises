#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

using namespace std;


int main() {

	int n, d;

	cin >> n >> d;
	
	while(n || d){
		int graph[d][n];    
		bool found = false;
		
		for(int i = 0; i < d; i++){
			for(int j = 0; j < n; j++){
				scanf("%d", &graph[i][j]);
			}
		}

		for(int j = 0; j < n; j++){
			int sum = 0;
			for(int i = 0; i < d; i++){
				sum += graph[i][j];
			}
			if(sum == d){
				found = true;
				break;
			}
		}
		if(found)
			cout << "yes" << endl;
		else
			cout << "no" << endl;

		cin >> n >> d;		
	}
    return 0;
}
