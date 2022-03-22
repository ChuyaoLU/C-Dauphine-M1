# include <iostream>
using namespace std;

float trouver_max(float tab[],int taille){
	float max= tab[0];
	for (int i=1;i<taille; i++ ){
		if (tab[i]>max){
			max=tab[i];
		}
	}
	return max;
}

float trouver_min(float tab[],int taille){
	float min= tab[0];
	for (int i=1;i<taille; i++ ){
		if (tab[i]<min){
			min=tab[i];
		}
	}
	return min;
}

float completer_positif(float tab1[],float tab2[],int taille){
	for (int i=0;i<taille; i++){
		if (tab2[i]>0){
			tab1[i]=tab2[i];}
		else{
			tab1[i]=0;}}
			
	for (int i=0;i<taille; i++)	{cout<<tab1[i]<<endl;
	}	

}
	

int main(){
	
	float t1[10] = {1.0, -3.2, 2.4,-6.4,1.5,4.7,6.0,4.2,6.2,8.0};
	float t2[10] = {-1.4, 6.9, -11.7,5.2,2.2,-7.4,3.0,2.1,-5.1,3.5};
	int taille = sizeof(t2)/sizeof(t2[0]);
	cout <<"Le min de t1 est : " << trouver_min(t1,10)<< endl;
	cout <<"Le max de t1 est : " << trouver_max(t1,10)<< endl;
	completer_positif(t1,t2,taille);
	return 0;
}
