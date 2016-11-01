void csvedit(std::string);
void colleges_details(std::string);

void useroperationui(std::string collegename){
    int operation;
    system("cls");
    std::cout << "=======================  WELCOME TO "<<collegename<<" PORTAL ==========================\n" << std::endl;
    std::cout << "     ---------------------------------" << std::endl;
    std::cout << "     1. Grant increasse" << std::endl;
    std::cout << "     ---------------------------------" << std::endl;
    std::cout << "     2. Apply for new research grant" << std::endl;
    std::cout << "     ---------------------------------" << std::endl;
    std::cout << "     3. Edit Details" << std::endl;
    std::cout << "     ---------------------------------\n\n\n\n\n\n" << std::endl;

    std::cout << "\n\nEnter your choice : ";
    std::cin >> operation;
    switch (operation){
        /*case (1) : loginoption();
                   break;
        case (2) : registeration r;
                   break;*/
        case (3) : csvedit(collegename);
    }
}

void csvedit(std::string collegename){
    system("cls");
    colleges_details(collegename);
}

void colleges_details(std::string collegename){
        std::string password,confirmpassword,collegetype,state,researchfield,city;
        std::fstream fp;
        std::string filecollegename,filepassword;
        fp.open("csv files/colleges_details.csv",std::ios::in);
        while(1){
            getline(fp,filecollegename,',');
            if( filecollegename == collegename ){
                system("cls");
                std::cout << "\n          ===================  Overwrite your Details  ====================="<< std::endl<< std::endl<< std::endl<< std::endl << std::endl ;
                //string collegename,password,confirmpassword,collegetype,state,researchfield,city;
                std::cout << "    ----------------------"<< std::endl << std::endl ;
                std::cout << "              college name : "<< filecollegename << std::endl << std::endl ;
                std::cout << "    ----------------------"<< std::endl << std::endl ;
                getline(fp,filecollegename,',');
                std::cout << "                      City : "<<filecollegename<< std::endl << std::endl ;
                std::cout << "    ----------------------"<< std::endl << std::endl ;
                getline(fp,filecollegename,',');
                std::cout << "                     State : "<<filecollegename<< std::endl << std::endl ;
                std::cout << "    ----------------------"<< std::endl << std::endl ;
                getline(fp,filecollegename,',');
                std::cout << "              College Type : "<<filecollegename<< std::endl << std::endl ;
                std::cout << "    ----------------------"<< std::endl << std::endl ;
                getline(fp,filecollegename,'\n');
                std::cout << "            Research Field : "<<filecollegename<< std::endl << std::endl ;
                std::cout << "    ----------------------"<< std::endl << std::endl ;
                std::cout << "                  Passowrd : "<<"Type new password"<< std::endl << std::endl ;
                std::cout << "    ----------------------"<< std::endl << std::endl ;
                gotoxy(29,8);
                std::cin >> collegename;
                gotoxy(29,12);
                std::cin >> city;
                gotoxy(29,16);
                std::cin >> state;
                gotoxy(29,20);
                std::cin >> collegetype;
                gotoxy(29,24);
                std::cin >> researchfield;
                gotoxy(29,28);
                std::cin >> password;
            }
            getline(fp,filepassword,'\n');
        }
    }
