# include <iostream>
using namespace std;


struct complexe {
float re_part , im_part ;
};


complexe somme_tab_complexe(complexe tab[], int taille){
	complexe c = {0,0};
	for (int i=0;i<taille;i++){
		c.re_part = c.re_part + tab[i].re_part;
		c.im_part = c.im_part + tab[i].im_part;
		}
	return c;
	
	
}

int main(){
	complexe tab1[]={{1,-3},{3,5},{-2,1},{4,7}};
	int taille = sizeof(tab1)/sizeof(tab1[0]);
	complexe cc = somme_tab_complexe(tab1,taille);
	cout<< "La somme des elements est : " << cc.re_part <<" + "<<"i"<<cc.im_part;
	return 0;
	

}


