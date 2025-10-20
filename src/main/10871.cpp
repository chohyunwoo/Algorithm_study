#include <bits/stdc++.h>
using namespace std;

int main(){
	int A, X;
	cin >> A >> X;
	
	vector<int> numbers(A);
	
	for(int i= 0 ; i < A; i ++){
		cin >> numbers[i];
	}
	
	for(int i=0; i<A; i++){
		if(numbers[i] < X){
			cout << numbers[i] << " " ;
		}
	}
}
