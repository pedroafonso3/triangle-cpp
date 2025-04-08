#include <iostream>

int main() {
  int tamanho;

  std::cout << "Digite o tamanho do seu triangulo:\n";
  std::cin >> tamanho;

  for (int l = 0; l < tamanho; l++) {
    for (int t = 0; t <= l; t++) {
      std::cout << "-";
    }
    std::cout << std::endl;
  }

  return 0;
}
