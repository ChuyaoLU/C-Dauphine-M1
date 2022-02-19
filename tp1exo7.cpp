#include <cmath>
#include <iostream>
#include <stdio.h>

using namespace std;


int pgcd(int a,int b){
	int temp;
	while(b!=0){
		temp=b;
		b=a%b; // % : la reste apres la divison.
		a=temp;
	}
	return a;}
	
	
int main(){
	
	int a,b;
	cout<<"Le 1er entier est : ";
	cin>>a;
	cout<<"Le 2nd entier est : ";
	cin>>b;
	cout<<pgcd(a,b);
	return 0;
}







