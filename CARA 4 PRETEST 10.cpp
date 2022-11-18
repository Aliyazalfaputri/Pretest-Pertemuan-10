#include <iostream>
using namespace std;

// CARA KE EMPAT
double rata(double nilai[5]){
	double total = 0,n;
	for(int i = 0; i < 5; i++){

		total+=nilai[i];
	}
	return total / n;
}

int main(){
	double nilai[5];
	for(int i = 0; i<5; i++){
		cin>> nilai[i];
	}
	cout<<rata(nilai);
}


