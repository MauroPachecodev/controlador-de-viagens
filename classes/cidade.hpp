#pragma once
#include <string>

class Cidade {
protected:
  std::string nome;

public:
  Cidade(std::string nome);
  std::string getNome();
};
