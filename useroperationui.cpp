#include"editdetails.cpp"


void useroperationui(std::string collegename){
    int operation;
    while(1){
        std::cin.ignore();
        system("cls");
        std::cout << "\n\t\t=======================  WELCOME TO "<<collegename<<" PORTAL ==========================\n\n\n" << std::endl;
        std::cout << "     \t\t\t\t---------------------------------" << std::endl;
        std::cout << "     \t\t\t\t1. Grant increasse" << std::endl;
        std::cout << "     \t\t\t\t---------------------------------" << std::endl;
        std::cout << "     \t\t\t\t2. Apply for new research grant" << std::endl;
        std::cout << "     \t\t\t\t---------------------------------" << std::endl;
        std::cout << "     \t\t\t\t3. Edit Details" << std::endl;
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
                       break;*/
            case (3) : csvedit(collegename);
                       break;
            case (4) : return;
        }
    }
}
