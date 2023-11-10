#include <iostream>
#include "fordon.h"
#include "cykel.h"
#include "bil.h"

using namespace std;

void akEnRunda(Fordon &fordon){
    cout<< "Aker en runda_________" << endl;
    fordon.korFrammat(2);
    fordon.indekeraKommandeSvang();
    fordon.svangHogar();
    fordon.korFrammat(1.5);
    fordon.pakallaUppmarksamhet();
    fordon.korFrammat(0.5);
    fordon.svangVanster();
    fordon.korFrammat(0.1);
    fordon.skrivUtInfo();
    cout <<"avsluta ak." << endl;
}
void ingangTillTesetaFordon(){
    Cykel cykel;
    Bil bil;
    Fordon& refTillCykel=cykel;
    Fordon& ettFordon= cykel;
    akEnRunda(refTillCykel);
    akEnRunda(ettFordon);
    akEnRunda(bil);
    akEnRunda(cykel);
}

int main()
{
    cout << "hhhhhhhhh hhhhhhhh hhhhhhh hhhhhhh" << endl;
    Bil a;
    a.pakallaUppmarksamhet();
    Cykel b;
    b.korFrammat(4);
    a.korFrammat(7);
    ingangTillTesetaFordon();
    Cykel c1;


    return 0;
}
