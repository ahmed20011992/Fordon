#ifndef FORDON_H
#define FORDON_H


class Fordon
{
public:
    Fordon(int antalHjul);
    virtual void pakallaUppmarksamhet()=0;
    virtual void indekeraKommandeSvang()=0;
    virtual void svangVanster()=0;
    virtual void svangHogar()=0;
    virtual void korFrammat(float antalKm)=0;
    virtual void skrivUtInfo();
protected:
    int m_antalHjul;
};

#endif // FORDON_H
