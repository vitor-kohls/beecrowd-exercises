#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

using namespace std;

int cat(int n){
	if(n <= 1)
		return 1;
	if(n <= 3)
		return 3;
	if(n <= 5)
		return 5;
	if(n <= 10)
		return 10;
	if(n <= 25)
		return 25;
	if(n <= 50)
		return 50;
	return 100;
}

int main() {

    int k;
	cin >> k;
	cout << "Top " << cat(k) << endl;

    return 0;
}
