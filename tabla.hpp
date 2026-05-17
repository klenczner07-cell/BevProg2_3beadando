#ifndef TABLA_HPP
#define TABLA_HPP

#include "widgets.hpp"
#include "jatekmaster.hpp"

class Tabla : public Widget {
public:
    Tabla(Application* szulo, int x, int y, JatekMester* jm);
    void draw() const override;
    void handle(genv::event esem) override;
private:
    static const int CELL = 34;
    JatekMester* _jm;
    int _hovSor;
    int _hovOszlop;
};

#endif
