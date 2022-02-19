#include <cmath>
#include <iostream>
using namespace std;


int main(){
	int h;
	cout<< "Hauteur de l'arbre : ";
	cin>> h;
	for(int i=1;i<=h;i++){
		for(int t=1; t<=h-i;t++){
			cout << "=";}
		for(int e=1;e<=2*i-1;e++){
			cout <<"*";}
		for(int t=1;t<=h-i;t++){
			cout<<"=";}
		cout<< endl;
	}
	return 0;
}
