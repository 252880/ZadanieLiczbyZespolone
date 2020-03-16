#ifndef WYRAZENIEZESP_HH
#define WYRAZENIEZESP_HH
#include <cstdlib>


#include "LZespolona.hh"


/*!
 * Modeluje zbior operatorow arytmetycznych.
 */
enum Operator { Op_Dodaj, Op_Odejmij, Op_Mnoz, Op_Dziel};
enum Numer {a,b,c,d,e};


/*
 * Modeluje pojecie dwuargumentowego wyrazenia zespolonego
 */
class WyrazenieZesp {
public:
  Numer zad;
  LZespolona   Arg1;   // Pierwszy argument wyrazenia arytmetycznego
  Operator     Op;     // Opertor wyrazenia arytmetycznego
  LZespolona   Arg2;   // Drugi argument wyrazenia arytmetycznego
};

/*
 * Funkcje ponizej nalezy zdefiniowac w module.
 *
 */


#endif
