
void adminoperation(){
    int operation;
    while(1){
        std::cin.ignore();
        system("cls");
        std::cout << "\n\t\t=======================  WELCOME TO Administrator PORTAL ==========================\n\n\n" << std::endl;
        std::cout << "     \t\t\t\t---------------------------------" << std::endl;
        std::cout << "     \t\t\t\t1. List of colleges" << std::endl;
        std::cout << "     \t\t\t\t---------------------------------" << std::endl;
        std::cout << "     \t\t\t\t2. Edit college Details" << std::endl;
        std::cout << "     \t\t\t\t---------------------------------" << std::endl;
        std::cout << "     \t\t\t\t3. change Administrator password" << std::endl;
        std::cout << "     \t\t\t\t---------------------------------" << std::endl;
        std::cout << "     \t\t\t\t4. Logout" << std::endl;
        std::cout << "     \t\t\t\t---------------------------------\n\n\n\n\n" << std::endl;

        std::cout << "\n\nEnter your choice : ";
        std::cin >> operation;
        std::cout<<operation;
        switch (operation){
            /*case (1) : grantincrease();
                       break;
            case (2) : newgrant();
                       break;
            case (3) : csvedit(collegename);
                       break;*/
            case (4) : return;
        }
    }
}
