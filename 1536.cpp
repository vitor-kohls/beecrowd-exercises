#include <bits/stdc++.h>

//g++ X.cpp && ./a.out

using namespace std;

int main() {

    int n;
    cin >> n;
	
    while(n--){
		int points_m = 0;
		int points_v = 0;


    	char bleh;
		// Casa do 1
    	int m,v;
    	cin >> m >> bleh >> v;	
		if(m > v)
			points_m += 3;
		else if(v > m)
			points_v += 3;
		else{
			points_v += 1;
			points_m += 1;
		}

    	int m2,v2;
		cin >> v2 >> bleh >> m2;	

		if(m2 > v2)
			points_m += 3;
		else if(v2 > m2)
			points_v += 3;
		else{
			points_v += 1;
			points_m += 1;
		}


		if(points_m > points_v)
			cout << "Time 1" << endl;
		else if(points_v > points_m)
			cout << "Time 2" << endl;
		else{
			int saldo_m = (m+m2) - (v+v2);
			int saldo_v = -(m+m2) + (v+v2);

			if(saldo_m > saldo_v)
				cout << "Time 1" << endl;
			else if(saldo_v << saldo_m)
				cout << "Time 2" << endl;
			else{
				if(v > m2)
					cout << "Time 2"<< endl;
				else if(v < m2)
					cout << "Time 1" << endl;
				else
					cout << "Penaltis" << endl;
			}
				
		}
    }


    return 0;
}
