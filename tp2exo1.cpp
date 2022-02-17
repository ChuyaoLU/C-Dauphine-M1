# include <iostream>
using namespace std;

void ajouter(int p,int &n){
n = p;}

int main(){
    int p,n;
    cout<< "Entrer une valeur entière p :";
    cin>> p;
    cout << "Entrer une autre valeur entière n :";
    cin >>n;
    ajouter(2*p,n);
    cout << "La valeur de la variable n est"  << n;

}
