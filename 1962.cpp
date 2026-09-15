#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

using namespace std;


int main() {

	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int t;
		cin >> t;

		if(t > 2014)
			cout << t - 2014 << " A.C." << endl;
		else
			cout << fabs(2015 - t) << " D.C." << endl;

	}
	
	    


    return 0;
}
