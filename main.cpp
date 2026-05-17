#include "application.hpp"
#include "felirat.hpp"
#include "tabla.hpp"
#include "jatekmaster.hpp"
#include <string>

class AmobaApp : public Application {
public:
    AmobaApp() : Application(720, 530), _jm() {
        _tabla = new Tabla(this, 10, 10, &_jm);
        _allapotSor = new Felirat(this, 530, 10, 175, 35,
                                  "1. jatekos kovetkez");
        _cimke = new Felirat(this, 530, 55, 175, 35, "Amoba - 5 sorban");
    }

private:
    JatekMester _jm;
    Tabla* _tabla;
    Felirat* _allapotSor;
    Felirat* _cimke;
};

int main() {
    AmobaApp app;
    app.event_loop();
    return 0;
}
