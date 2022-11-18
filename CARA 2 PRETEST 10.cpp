#include <iostream>
using namespace std;



// CARA KEDUA
int n;

double rata(double nilai[]){
	double total = 0;
	for(int i = 0; i < n; i++){

		total+=nilai[i];
	}
	return total / n;
}
int main(){
	cin >> n;
	double nilai[n];
	for(int i = 0; i<n; i++){
		cin>> nilai[i];
	}
	
	cout<<rata(nilai);
}
