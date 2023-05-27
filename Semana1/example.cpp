#include <iostream>

int calcularCiclo(long long n) {
    int contador = 1; // Contador para el ciclo
    while (n != 1) {
        if (n % 2 == 1) {
            n = 3 * n + 1;
        } else {
            n = n / 2;
        }
        contador++;
    }
    return contador;
}

int main() {
    long long a, b;
    while (std::cin >> a >> b) {
        int maxCiclo = 0;
        int inicio = std::min(a, b);
        int fin = std::max(a, b);
        
        for (int i = inicio; i <= fin; i++) {
            int ciclo = calcularCiclo(i);
            maxCiclo = std::max(maxCiclo, ciclo);
        }
        
        std::cout << a << " " << b << " " << maxCiclo << std::endl;
    }
    
    return 0;
}