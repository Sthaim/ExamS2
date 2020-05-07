#ifndef PLANTE_CPP
#define PLANTE_CPP
#include "Plante.h"
#include <string>
#include <iostream>

Plante::Plante() : _nbrSante(5), _nbrEau(5), _boolEngrais(false), _nomPlante("Orchidee") {}
Plante::Plante(int nbrSante, int nbrEau, bool boolEngrais, std::string nomPlante) : _nbrSante(nbrSante), _nbrEau(nbrEau), _boolEngrais(boolEngrais), _nomPlante(nomPlante){}

int Plante::getNbrSante(){
    return _nbrSante;
}

int Plante::getNbrEau(){
    return _nbrEau;
}

bool Plante::getBoolEngrais(){
    return _boolEngrais;
}

std::string Plante::getNomPlante(){
    return _nomPlante;
};

void Plante::inspecter(){
    std::cout<<Plante::getNbrSante()<<" "<<Plante::getNbrEau()<<" "<<Plante::getNomPlante()<<std::endl;
};

void Plante::tailler(){
    _nbrSante++;
};

void Plante::pousse(){
    _nbrSante--;
};

void Plante::mettreEngrais(){
    _boolEngrais=true;
};

void Plante::resetEngrais(){
    _boolEngrais=false;
};

void Plante::arroser(){
    _nbrEau++;
};

void Plante::deshydratation(){
    _nbrEau--;
};

void Plante::setNomPlante(std::string nomPlante){
    _nomPlante=nomPlante;
};


#endif