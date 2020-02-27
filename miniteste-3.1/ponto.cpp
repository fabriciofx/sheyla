#include <iostream>
#include "ponto.hpp"

Ponto ponto_do_usuario(string msg1, string msg2)
{
    Ponto ponto;
    cout << msg1;
    cin >> ponto.x;
    cout << msg2;
    cin >> ponto.y;
    return ponto;
}
