#ifndef BIL_H
#define BIL_H
#include"fordon.h"



class Bil : public Fordon
{
public:
Bil();

// Fordon interface
public:
void pakallaUppmarksamhet() override;
void indekeraKommandeSvang() override;
void svangVanster() override;
void svangHogar() override;
void korFrammat(float antalKm) override;
};


#endif // BIL_H
