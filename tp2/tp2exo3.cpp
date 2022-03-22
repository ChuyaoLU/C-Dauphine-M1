# include <iostream>
using namespace std;

void somme_tab(float tab[], int taille,float &somme){
	somme=0;
	for(int i=0; i<taille; i++){
		somme+= tab[i];}
	
}

int main(){
	float tab1[10]={-1.2,0.5,3.3,-5.2,9.0,3.2,-5,7.6,7.3,2.8};
	float somme;
	int taille = sizeof(tab1)/sizeof(tab1[0]);
	somme_tab(tab1,taille,somme);
	cout << "La somme des elements du tableau est " << somme << endl;
	return 0;
	
}
