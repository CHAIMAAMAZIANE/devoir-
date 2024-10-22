
#ifndef CLASS_CPP_INCLUDED
#define CLASS_CPP_INCLUDED

class Voiture{
    public:
 std::string marque;
 std::string modele;
 int annee;
 float kilometrage;
 float vitesse ;
 float valeur , distance ;
    Voiture(){
        marque = "Inconnue";
        modele = "Inconnu";
        annee = 0;
        kilometrage = 0.0f;
        vitesse = 0.0f;
        valeur =0.0f;
        distance=0.0f;
    }
    Voiture(std::string mrq ,std::string mdl ,int ans ,float km,float vit):marque(mrq),modele(mdl),annee(ans),kilometrage(km),vitesse(vit){}
    float accelerer(float valeur);
    float freinage(float valeur);
    void afficherInfo();
    float avancer(float distance);
    ~Voiture(){
        std::cout<<"Voiture Detruite"<<std::endl;
    }
    
};
#endif