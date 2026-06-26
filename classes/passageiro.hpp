#pragma once
#include "cidade.hpp"
#include <string>
class Passageiro {
private:
  std::string nome;
  Cidade *localAtual;

public:
  Passageiro(std::string nome, Cidade *localAtual);
  std::string getNome();
  Cidade *getLocalAtual();
  void setLocalAtual(Cidade *local);
};
