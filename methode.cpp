
#include"class.cpp"
#include<iostream>
#include<string>
float Voiture :: accelerer(float valeur){
  return vitesse=vitesse+valeur;
  
}
float Voiture::freinage(float valeur){
   
    (vitesse=vitesse-valeur);
 if (vitesse < 0){
     vitesse=0;
 }
 return vitesse ;
}
void Voiture :: afficherInfo(){
    std::cout << "Marque: " << marque << ", Modele:" << modele <<" , annee:" << annee << " , kilometrage:"<< kilometrage <<" , Vitesse:"<<vitesse<< std::endl;
}
float Voiture :: avancer(float distance){
    return kilometrage=kilometrage + distance;
}
