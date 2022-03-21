#include <cmath>
#include <iostream>

using namespace std;

float calculatrice(float a, float b,char c ){
	float resu;
	if (c=='+'){
		resu = a+b;}
	else if(c=='-'){
		resu = a-b;}
	else if(c=='*'){
		resu=a*b;}
	else if (c=='/'){
		if(b==0){cout<<"Erreur";}
		else{resu=a/b;}
		
	}
	else{cout<< "Erreur! Veuillez donner un caractere entre +,-,*,/."; } // marche pas vraiment pb.
	return resu;	
}

int main(){
	cout<<calculatrice(2,6,'+')<<endl;
	cout<<calculatrice(2,6,'-')<<endl;
	cout<<calculatrice(2,6,'*')<<endl;
	cout<<calculatrice(2,6,'/')<<endl;
	return 0;}
