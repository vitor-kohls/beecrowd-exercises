#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

using namespace std;

int r(int x, int y){
	return (3*x*3*x) + (y*y);
}

int b(int x, int y){
	return (2 * x*x) + (5*y*5*y);
}

int c(int x, int y){
	return (-100*x) + (y*y*y);
}

int main() {

	int n;

	cin >> n;

	for(int i = 0; i < n; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		
		int r_res = r(x,y);
		int b_res = b(x,y);
		int c_res = c(x,y);

		if(r_res > b_res && r_res > c_res)
			cout << "Rafael ganhou" << endl;
		else if(b_res > r_res && b_res > c_res)
			cout << "Beto ganhou" << endl;
		else
			cout << "Carlos ganhou" << endl;
	}
	
    


    return 0;
}
