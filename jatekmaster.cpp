#include "jatekmaster.hpp"
#include <cstring>

JatekMester::JatekMester() : _aktJatekos(1) {
    memset(_tabla, 0, sizeof(_tabla));
}

int JatekMester::getCella(int sor, int oszlop) const {
    return _tabla[sor][oszlop];
}

int JatekMester::getAktualisJatekos() const {
    return _aktJatekos;
}
