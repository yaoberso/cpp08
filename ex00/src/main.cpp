#include "../include/easyfind.hpp"

#include <iostream>
#include <vector>
#include <list>

int main() {
    std::cout << "--- Test 1 : std::vector (Succès) ---" << std::endl;
    try {
        std::vector<int> numbers;
        for (int i = 0; i < 5; i++) {
            numbers.push_back(i * 10);
        }
        std::vector<int>::iterator it = easyfind(numbers, 20);
        std::cout << "Trouvé : " << *it << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }
    std::cout << "\n--- Test 2 : std::list (Succès) ---" << std::endl;
    try {
        std::list<int> lst;
        lst.push_back(1);
        lst.push_back(42);
        lst.push_back(3);
        std::list<int>::iterator it = easyfind(lst, 42);
        std::cout << "Trouvé : " << *it << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }
    std::cout << "\n--- Test 3 : Valeur introuvable (Doit planter) ---" << std::endl;
    try {
        std::vector<int> numbers;
        numbers.push_back(10);
        numbers.push_back(20);
        std::cout << "Recherche de 99..." << std::endl;
        easyfind(numbers, 99);
        std::cout << "ERREUR : L'exception n'a pas été lancée !" << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Succès ! Exception attrapée : " << "Element not found (ou message par defaut)" << std::endl;
    }

    return 0;
}
