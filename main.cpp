#include<iostream>
#include<cstring>
#include<fstream>
#include<conio.h>
#include "position.h"
#include "register.cpp"
#include "Loginoption.cpp"



int main() {
    system("cls");
    int operation;
    std::cout << "====================  Ministry of Human Resource Development About MHRD  ========================\n" << std::endl;
    std::cout << "The Ministry of Human Resource Development, formerly Ministry of Education (until 25 September 1985),\nis responsible for the development of human resources in India. The Ministry is divided into two \ndepartments: the Department of School Education and Literacy, which deals with primary, secondary and \nhigher secondary education, adult education and literacy, and the Department of Higher Education, which \ndeals with university education, technical education, scholarship etc.\n\n\n" << std::endl;
    std::cout << "     -----------" << std::endl;
    std::cout << "     1. Login" << std::endl;
    std::cout << "     -----------" << std::endl;
    std::cout << "     2. Register" << std::endl;
    std::cout << "     -----------\n\n\n\n\n\n" << std::endl;

    std::cout << "\n\nEnter your choice : ";
    std::cin >> operation;
    switch (operation){
        case (1) : loginoption();
                   break;
        case (2) : registeration r;
                   break;
    }
    system("pause");
    return 0;
}
