#include "../classes/controladordetransito.hpp"
#include "../classes/cidade.hpp"
#include "../classes/passageiro.hpp"
#include "../classes/trajeto.hpp"
#include "../classes/transporte.hpp"
#include "../classes/viagem.hpp"
#include <iostream>
#include <string>
#include <vector>

Cidade *ControladorDeTransito::buscarcidade(std::string nome) {
  for (const auto &c : cidades) {
    if (c->getNome() == nome) {
      return c;
    }
  }
  return nullptr;
}
void ControladorDeTransito::cadastrarCidade(std::string nome) {
  if (buscarcidade(nome) == nullptr) {
    cidades.push_back(new Cidade(nome));
  } else {
    std::cout << "cidade já registrada" << std::endl;
  }
}

void ControladorDeTransito::cadastrarTrajeto(std::string nomeOrigem,
                                             std::string nomeDestino, char tipo,
                                             int distancia) {
  Cidade *cidadeorigem = buscarcidade(nomeOrigem);
  Cidade *cidadedestino = buscarcidade(nomeDestino);
  if (cidadedestino == nullptr || cidadeorigem == nullptr) {
    std::cout << "você está usando cidades não cadastradas, falha ao cadastrar "
                 "trajeto"
              << std::endl;
    return;
  }
  if (tipo != 'A' && tipo != 'T') {
    std::cout << "tipo de trajeto não disponivel, tente 'A' para aquático e "
                 "'T' para terrestre"
              << std::endl;
    return;
  }
  if (distancia <= 0) {
    std::cout << "você está tentando cadastrar uma distância menor ou igual a "
                 "zero, !!!erro!!!"
              << std::endl;
    return;
  }
  trajetos.push_back(new Trajeto(cidadeorigem, cidadedestino, tipo, distancia));
}
