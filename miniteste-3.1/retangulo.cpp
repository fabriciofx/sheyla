#include "retangulo.hpp"

Retangulo retangulo_do_usuario()
{
    Retangulo retangulo;
    retangulo.v1 = ponto_do_usuario(
        "Digite a coord. X do vértice 1: ",
        "Digite a coord. Y do vértice 1: "
    );
    retangulo.v2 = ponto_do_usuario(
        "Digite a coord. X do vértice 2: ",
        "Digite a coord. Y do vértice 2: "
    );
    return retangulo;
}

bool retangulo_contem(Retangulo retangulo, Ponto ponto)
{
    bool resultado = false;
    if ((retangulo.v1.x <= ponto.x && ponto.x <= retangulo.v2.x) &&
        (retangulo.v1.y <= ponto.y && ponto.y <= retangulo.v2.y)) {
            resultado = true;
    }
    return resultado;
}
