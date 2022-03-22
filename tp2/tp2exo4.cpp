//// PB ////
# include <iostream >
# include <algorithm>
using namespace std;


int occurence_caractere(char cdc[],char c[]){
	int taille = sizeof(cdc)/sizeof(cdc[0]);
	int nb=0;
	for (int i=0; i<taille; i++){
		if(cdc[i]==c[0]){nb+=1;}
		}
	return nb;
}

int main(){
	
	char cdc1[] = "J aaaaime beaucoup";
	char c1[]="a";
	cout << occurence_caractere(cdc1,c1);
	return 0;
}
