#include "../classes/passageiro.hpp"
#include <string>
// construtor
Passageiro::Passageiro(std::string nome, Cidade *localAtual) {
  this->nome = nome;
  this->localAtual = localAtual;
}
// função para obter nome do passageiro
std::string Passageiro::getNome() { return nome; }
// função para obter local atual do passageiro
Cidade *Passageiro::getLocalAtual() { return localAtual; }
// função para definir local altual do passageiro
void Passageiro::setLocalAtual(Cidade *local) { this->localAtual = local; }
