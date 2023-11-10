#include "cykel.h"
#include <iostream>
using namespace std;

Cykel::Cykel() : Fordon(2)
{

}

void Cykel::pakallaUppmarksamhet()
{
    cout << "pling pling " << __func__ << endl;

}

void Cykel::indekeraKommandeSvang()
{
    cout << "det later att vi ska svanga " << __func__ << endl;

}

void Cykel::svangVanster()
{
    cout << "har ska vi svanga till vanster " << __func__ << endl;

}

void Cykel::svangHogar()
{
    cout << "har ska vi svanga till hoger " << __func__ << endl;

}

void Cykel::korFrammat(float antalKm)
{
    cout << "kor frammat " << antalKm << "km " << __func__ << endl;

}
void Cykel::skrivUtInfo(){
cout << "Fordonet är en cykel." << endl;
Fordon::skrivUtInfo();
}
