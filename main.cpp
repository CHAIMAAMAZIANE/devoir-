
#include "class.h"
#include <iostream>
#include <string>
using namespace std ;
int main(){
    Voiture V;
    float valeurfrein,distanceavanc;
    cout<<"Veuillez entrer la valeur pour freinage : "<<endl;
    cin>>valeurfrein;
    cout<<"Veuillez entrer la distance pour avancer  : "<<endl;
    cin>>distanceavanc;
    
    cout<<"Veuillez entrer le modele de la voiture :"<<endl;
    cin>>V.modele;
    cout<<"Veuillez entrer la marque de la voiture :"<<endl;
    cin>>V.marque;
    cout<<"Veuillez entrer l'annee de la voiture :"<<endl;
    cin>>V.annee;
    cout<<"Veuillez entrer le kilometrage de la voiture:" <<endl;
    cin>>V.kilometrage;
    cout<<"Veuillez entrer la  vitesse de la voiture :"<<endl;
    cin>>V.vitesse;
    V.accelerer (valeurfrein);
    V.afficherInfo();
    V.avancer ( distanceavanc);
    V.afficherInfo();
    V.freinage(valeurfrein);
    V.afficherInfo();
    return 0;