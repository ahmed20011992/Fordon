#include "fordon.h"
#include <iostream>
using namespace std;

Fordon::Fordon(int antalHjul) : m_antalHjul(antalHjul)
{

}

void Fordon::skrivUtInfo()
{
    cout << "Ett fordon med " << m_antalHjul << " hjul." << endl;

}

void Fordon::pakallaUppmarksamhet()
{
    cout << "titta nogrant framat " << __func__ << endl;

}

void Fordon::indekeraKommandeSvang()
{
    cout << "har ska vi svanga till" << __func__ << endl;

}

void Fordon::svangVanster()
{
    cout << "svang till vanster " << __func__ << endl;

}

void Fordon::svangHogar()
{
    cout << "svang till hoger " << __func__ << endl;

}

void Fordon::korFrammat(float antalKm)
{
    cout << "kor frammat " << antalKm << "km " << __func__ << endl;

}
