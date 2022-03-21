# include <iostream>
using namespace std;

const int NMOIS = 12 ;

struct enreg{
	int stock;
	float prix;
	int ventes[NMOIS];
};

void zero(enreg &tab){
	tab.stock=0;
	tab.ventes[NMOIS]=0;
}

int main(){
	enreg enreg1;
	const int NMOIS = 12 ;
	zero(enreg1);
	cout << "Stock: " << enreg1.stock << endl;
	cout << "Vente: " << enreg1.ventes[NMOIS];
	return 0;
}


