#include "bil.h"
#include<iostream>
using namespace std;

Bil::Bil() : Fordon(4)
{

}

void Bil::pakallaUppmarksamhet()
{
    cout << "tuut tuuut " << __func__ << endl;

}

void Bil::indekeraKommandeSvang()
{
    cout << " det later att vi har korva till vanster " << __func__ << endl;

}

void Bil::svangVanster()
{
    cout << "har ska vi svanga till vanster " << __func__ << endl;

}

void Bil::svangHogar()
{
    cout << "har ska vi svanga till hoger " << __func__ << endl;

}

void Bil::korFrammat(float antalKm)
{
    cout << "kor frammat " << antalKm << "km " << __func__ << endl;

}
