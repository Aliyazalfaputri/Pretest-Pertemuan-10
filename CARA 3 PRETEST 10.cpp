#include <iostream>
using namespace std;

// CARA KETIGA 

double rata(double nilai[], int n){
	double total = 0;
	for(int i = 0; i < n; i++){

		total+=nilai[i];
	}
	return total / n;
}

int main(){
	int n;
	cin >> n;
	double nilai[n];
	for(int i = 0; i<n; i++){
		cin>> nilai[i];
	}
	
	cout<<rata(nilai, n);
}
