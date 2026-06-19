#pragma once
#include "cidade.hpp"
class Trajeto {
protected:
  Cidade *origem;
  Cidade *destino;
  char tipo; // A para aquatico e T para terrestre//
  int distancia;

public:
  Trajeto(Cidade *origem, Cidade *destino, char tipo, int distancia);
  Cidade *getOrigem();
  Cidade *getDestino();
  char getTipo();
  int getDistancia();
};
