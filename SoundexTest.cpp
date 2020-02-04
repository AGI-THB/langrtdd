#include "gtest/gtest.h"

class Soundex {

};



/* Three Rules of TDD:
    1) Produktionscode nur schreiben, um fehlgeschlagene Tests zu bestehen
    2) Schreibe einen Unit-Test maximal soweit, wie nötig ist, um ihn fehlschlagen zu lassen!
       Compilationsfehler sind auch Fehler!
    3) NUR DEN Produktionscode schreiben, der zum bestehen des Tests gebraucht wird*/

/*Bevor mit weiteren Tests fortgefahren wird, sollte man sich
  erstmal nur soweit vorarbeiten, bis der Code nichtmehr kompiliert.
  Das ist der Fall, wenn z.B. Klassen noch nicht existieren */

/*[02.01]*/
TEST(SoundexEncoding, RetainSoleLetterOfOneLetterWord){

    Soundex soundex;
}

