#include <iostream>
#include <fstream>
#include <string>


int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Uso: " << argv[0] << " archivo.txt" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::ifstream file(filename);

    if (!file) {
        std::cout << "No se pudo abrir el archivo: " << filename << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) {
        // Procesar cada línea del archivo
        std::cout << line << std::endl;
    }

    file.close();
    return 0;
}