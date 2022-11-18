#include <iostream>
using namespace std;


// CARA PERTAMA
double rata(double a){
	return a / 5;
}

int main(){
	int nilai[5];
	int total = 0;
	for(int i = 0; i < 5; i++){
		cin>> nilai[i];
		total+=nilai[i];
	}
	
	cout<<rata(total);
}
