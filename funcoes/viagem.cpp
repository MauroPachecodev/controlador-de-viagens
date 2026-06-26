#include "../classes/viagem.hpp"
#include "../classes/cidade.hpp"
#include "../classes/passageiro.hpp"
#include "../classes/transporte.hpp"
#include <iostream>
#include <vector>
Viagem::Viagem(Transporte *transporte, std::vector<Passageiro *> passageiros,
               Cidade *origem, Cidade *destino) {
  this->transporte = transporte;
  this->passageiros = passageiros;
  this->origem = origem;
  this->destino = destino;
}

void Viagem::iniciarViagem() {
  // falta as etapas de verificações
  emAndamento = true;
}

void Viagem::avancarHoras(int horas) { horasEmTransito *= horas; }

void Viagem::relatarEstado() {
  if (emAndamento) {
    std::cout << "A sua viagem está em adamento" << std::endl;
  }
  if (!emAndamento) {
    std::cout << "sua viagem não estrá em andamento" << std::endl;
  }
}

bool Viagem::isEmAndamento() { return emAndamento; }
