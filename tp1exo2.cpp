#include <cmath>
#include <iostream>
using namespace std;

float somme=0.0;

float serieharmo(int n){
	for (float i=1;i<=n;i++){
		somme+=1/i;
	}
	return somme;
}

int main(){
	int n;
	cout<<"Entrez une valeur n : ";
	cin >>n;
	cout<<serieharmo(n);
	return 0;
}
