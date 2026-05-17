#ifndef JATEKMASTER_HPP
#define JATEKMASTER_HPP

class JatekMester {
public:
    static const int SOROK = 15;
    static const int OSZLOPOK = 15;

    JatekMester();

    int getCella(int sor, int oszlop) const;
    int getAktualisJatekos() const;

private:
    int _tabla[SOROK][OSZLOPOK];
    int _aktJatekos;
};

#endif
