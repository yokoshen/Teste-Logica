//teste1
#include <iostream>
int main() {
    int INDICE = 13, SOMA = 0, K = 0;

    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }

    std::cout << "Valor da soma dos numeros de 1 a " << INDICE << " eh: " << SOMA << std::endl;

    return 0;
}

//teste2
/*/
#include <iostream>

bool pertenceFibonacci(int numero) {
    if (numero <= 1) {
        return true;
    }

    int a = 0, b = 1, c = a + b;
    while (c <= numero) {
        if (c == numero) {
            return true;
        }
        a = b;
        b = c;
        c = a + b;
    }

    return false;
}

int main() {
    int numero;
    std::cout << "Informe um numero: ";
    std::cin >> numero;

    if (pertenceFibonacci(numero)) {
        std::cout << "O numero " << numero << " pertence a sequencia de Fibonacci." << std::endl;
    } else {
        std::cout << "O numero " << numero << " nao pertence a sequencia de Fibonacci." << std::endl;
    }

    return 0;
}

*/

//teste3
/*
#include <iostream>
#include <vector>
#include <algorithm>

// Função para calcular estatísticas de faturamento
void calcularEstatisticas(const std::vector<double>& faturamentoDiario) {
    // Encontrar menor e maior faturamento
    double menor = *std::min_element(faturamentoDiario.begin(), faturamentoDiario.end());
    double maior = *std::max_element(faturamentoDiario.begin(), faturamentoDiario.end());

    // Calcular média mensal
    double soma = 0.0;
    int diasValidos = 0;
    for (double valor : faturamentoDiario) {
        if (valor > 0) {
            soma += valor;
            diasValidos++;
        }
    }
    double media = soma / diasValidos;

    // Contar dias com faturamento superior à média
    int acimaMedia = 0;
    for (double valor : faturamentoDiario) {
        if (valor > media) {
            acimaMedia++;
        }
    }

    // Exibir resultados
    std::cout << "Menor faturamento diario: " << menor << std::endl;
    std::cout << "Maior faturamento diario: " << maior << std::endl;
    std::cout << "Dias com faturamento acima da media mensal: " << acimaMedia << std::endl;
}

int main() {
    // Exemplo de vetor de faturamento diario
    std::vector<double> faturamentoDiario = {1500.0, 2300.0, 0.0, 1800.0, 2500.0, 0.0, 2100.0};

    calcularEstatisticas(faturamentoDiario);

    return 0;
}

*/

//teste4
/*
#include <iostream>

int main() {
    double faturamentoTotal = 181759.98; // Faturamento total mensal da distribuidora
    double faturamentosEstados[] = {67836.43, 36678.66, 29229.88, 27165.48, 19849.53};
    const char* estados[] = {"SP", "RJ", "MG", "ES", "Outros"};
    int numEstados = sizeof(faturamentosEstados) / sizeof(faturamentosEstados[0]);

    std::cout << "Percentual de representacao de cada estado:" << std::endl;
    for (int i = 0; i < numEstados; ++i) {
        double percentual = (faturamentosEstados[i] / faturamentoTotal) * 100.0;
        std::cout << estados[i] << " - R$ " << faturamentosEstados[i] << " (" << percentual << "%)" << std::endl;
    }

    return 0;
}
*/

//teste 5
/*
#include <iostream>
#include <string>

void inverterString(std::string& str) {
    int tamanho = str.size();
    for (int i = 0; i < tamanho / 2; ++i) {
        std::swap(str[i], str[tamanho - i - 1]);
    }
}

int main() {
    std::string texto = "Hello, world!";

    std::cout << "Texto original: " << texto << std::endl;

    inverterString(texto);

    std::cout << "Texto invertido: " << texto << std::endl;

    return 0;
}

*/