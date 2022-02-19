#include <cmath>
#include <iostream>
#include <stdio.h>

using namespace std;

int counter; // variable globale
void compteur(void){

	counter=counter+1;
}


int main(){
	compteur();
	compteur();
	compteur();
	compteur();
	cout<<"Le nb d'appel de la fonction est : "<<counter;
	return 0;
}
