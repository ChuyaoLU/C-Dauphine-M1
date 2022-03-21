#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    float a, racine;
    cout << "Entrer une valeur positive (0 pour terminer) : ";
    cin >>a;
    while (a!=0){
        if (a<0){
        cout << "Erreur, la valeur ne peut pas etre negative";
        cout << "Entrer une valeur positive (0 pour terminer) : ";
        cin >>a;}
        else{
        cout << "la racine de " << a << "est" <<sqrt(a)<< endl;
        cout << "Entrer une valeur positive (0 pour terminer) : ";
        cin >>a;}
        }
}

