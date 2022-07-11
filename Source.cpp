#include<iostream>
using namespace std;
void main() {
	int m, n;
	cin >> m >> n;
	int** p = new int* [m]; // for each array we set a type of int* ( that is It self a ref of the second array )
	for (int i = 0; i < m; i++) {
		p[i] = new int[n];
		for (int j = 0; j < n; j++) {
			cin >> p[i][j];
		}
	}
	cout << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << " | " << p[i][j] << " | ";
		}
		cout << endl;
	}
	for (int i = 0; i < m; i++) {
		delete[]p[i];
	}
	delete[]p;
}