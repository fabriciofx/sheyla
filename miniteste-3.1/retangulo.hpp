#include "ponto.hpp"

struct Retangulo {
    Ponto v1;
    Ponto v2;
};

Retangulo retangulo_do_usuario();
bool retangulo_contem(Retangulo retangulo, Ponto ponto);
