# include <iostream>
using namespace std;

struct complexe {
float re_part , im_part ;
};

complexe somme_complex (complexe complex1,complexe complex2){
	float somme_re_part, somme_im_part;
	somme_re_part = complex1.re_part + complex2.re_part;
	somme_im_part = complex1.im_part + complex2.im_part;
	return {somme_re_part,somme_im_part};
	
}


void multiplie_complex(float a, complexe &c){
	c.re_part = a*c.re_part;
	c.im_part = a*c.im_part;
	
}

int main(){
	complexe cc1 = {1,3};
	complexe cc2 = {4,5};
	complexe cc = somme_complex(cc1,cc2);
	cout<< "La somme de ces 2 nbs complexs est " << cc.re_part <<"+"<<"i"<<cc.im_part<<endl;
	
	multiplie_complex(10,cc);
	cout<< "La somme de ces 2 nbs complexs est " << cc.re_part <<"+"<<"i"<<cc.im_part<<endl;
	
	
	
}
