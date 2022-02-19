#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int tribonacci(int n){
	vector<int> v (n);//creation d'une vecteur d'entier vide
	v[0]=0;
	v[1]=0;
	v[2]=1;
	for (int i=3; i<=n;i++){
		v[i]=v[i-1]+v[i-2]+v[i-3];
	}
	return v[n];
	
}

int main(){
	int n;
	cout<<"Entrez une valeur entiere : ";
	cin>> n;
	cout<<tribonacci(n);
	return 0;
}
