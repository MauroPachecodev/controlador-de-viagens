#pragma once
#include "../classes/cidade.hpp"
#include <iostream>

Cidade::Cidade(std::string nome) {
  this->nome = nome;
  std::cout << "cidade: " << this->nome << " criada com sucesso!" << std::endl;
};

std::string Cidade::getNome() { return nome; }
