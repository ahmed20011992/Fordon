#ifndef CYKEL_H
#define CYKEL_H
#include "fordon.h"


class Cykel : public Fordon
{
public:
    Cykel();

    // Fordon interface
public:
    void pakallaUppmarksamhet() override;
    void indekeraKommandeSvang() override;
    void svangVanster() override;
    void svangHogar() override;
    void korFrammat(float antalKm) override;
    void skrivUtInfo() override;
protected:
   int m_antalHjul;
};

#endif // CYKEL_H
