#ifndef PLANTE_H
#define PLANTE_H

#include <string>

class Plante {
    private:
        int _nbrSante;
        int _nbrEau;
        bool _boolEngrais;
        std::string _nomPlante;

    public:

        Plante(); 
        Plante (int nbrSante, int nbrEau, bool boolEngrais, std::string nomPlante);


        int getNbrSante();
        int getNbrEau();
        bool getBoolEngrais();
        std::string getNomPlante();
        void inspecter();


        void tailler();
        void pousse();
        void mettreEngrais();
        void resetEngrais();
        void arroser();
        void deshydratation();
        void setNomPlante(std::string nomPlante);

        };

#endif