# include <iostream>
using namespace std;

void ajouter(int p,int &n){
n = p;}

int main(){
    int p,n;
    cout<< "Entrer une valeur enti�re p :";
    cin>> p;
    cout << "Entrer une autre valeur enti�re n :";
    cin >>n;
    ajouter(2*p,n);
    cout << "La valeur de la variable n est"  << n;

}
