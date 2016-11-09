#include<iostream>
#include<cstring>
#include<fstream>
#include<conio.h>
#include "position.h"
#include "register.cpp"
#include "Loginoption.cpp"


int main() {
    system("mode 110,36");
    system("color 2E");
    system("cls");
    int operation;
    std::cout << " **************************  Ministry of Human Resource Development About MHRD  ***************************** \n" << std::endl;
    std::cout << "    The Ministry of Human Resource Development, formerly Ministry of Education (until 25 September 1985),\n    is responsible for the development of human resources in India. The Ministry is divided into two \n    departments: the Department of School Education and Literacy, which deals with primary, secondary and \n    higher secondary education, adult education and literacy, and the Department of Higher Education, which \n  \tdeals with university education, technical education, scholarship etc.\n\n\n" << std::endl;
    std::cout << "     -----------" << std::endl;
    std::cout << "     1. Login" << std::endl;
    std::cout << "     -----------" << std::endl;
    std::cout << "     2. Register" << std::endl;
    std::cout << "     -----------\n\n\n\n\n\n" << std::endl;
    while(1){
        std::cout << "\n\nEnter your choice : ";
        std::cin >> operation;
        switch (operation){
            case (1) : {loginoption();
                       break;}
            case (2) : {registeration r;
                       break;}
            default  : {std::cout << "\nwrong choice" << std::endl;
                       break;}
        }
    }
    //system("pause");
    return 0;
}
