#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите оценку:";
    int grade;
    std::cin >> grade;
    switch (grade) {
        case 5:
            std::cout << "отлично";
            break;
        case 4: 
            std::cout << "хорошо";
            break;
        case 3:
            std::cout << "средне";
        default: 
            std::cout << "хуже среднего";
            
    }
}