void csvedit(std::string);
void CollegeDetailsleges_details(std::string);

void useroperationui(std::string collegename){
    int operation;
    system("cls");
    std::cout << "\n\t\t=======================  WELCOME TO "<<collegename<<" PORTAL ==========================\n\n\n" << std::endl;
    std::cout << "     \t\t\t\t---------------------------------" << std::endl;
    std::cout << "     \t\t\t\t1. Grant increasse" << std::endl;
    std::cout << "     \t\t\t\t---------------------------------" << std::endl;
    std::cout << "     \t\t\t\t2. Apply for new research grant" << std::endl;
    std::cout << "     \t\t\t\t---------------------------------" << std::endl;
    std::cout << "     \t\t\t\t3. Edit Details" << std::endl;
    std::cout << "     \t\t\t\t---------------------------------\n\n\n\n\n\n" << std::endl;

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

class CollegeDetailslege_details;



class CollegeDetails{

public:
	friend void csvedit(std::string);
    CollegeDetails(std::string CollegeDetailslegename){
            std::string password,confirmpassword,CollegeDetailslegetype,state,researchfield,city;
            std::fstream fp;
            std::string fileCollegeDetailslegename,filepassword;
            fp.open("csv files/CollegeDetailsleges_details.csv",std::ios::in);
            while(1){
                getline(fp,fileCollegeDetailslegename,',');
                if( fileCollegeDetailslegename == CollegeDetailslegename ){
                    system("cls");
                    std::cout << "\n          ===================  Overwrite your Details  ====================="<< std::endl<< std::endl<< std::endl<< std::endl << std::endl ;
                    //string CollegeDetailslegename,password,confirmpassword,CollegeDetailslegetype,state,researchfield,city;
                    std::cout << "    ----------------------"<< std::endl << std::endl ;
                    std::cout << "              CollegeDetailslege name : "<< fileCollegeDetailslegename << std::endl << std::endl ;
                    std::cout << "    ----------------------"<< std::endl << std::endl ;
                    getline(fp,fileCollegeDetailslegename,',');
                    std::cout << "                      City : "<<fileCollegeDetailslegename<< std::endl << std::endl ;
                    std::cout << "    ----------------------"<< std::endl << std::endl ;
                    getline(fp,fileCollegeDetailslegename,',');
                    std::cout << "                     State : "<<fileCollegeDetailslegename<< std::endl << std::endl ;
                    std::cout << "    ----------------------"<< std::endl << std::endl ;
                    getline(fp,fileCollegeDetailslegename,',');
                    std::cout << "              CollegeDetailslege Type : "<<fileCollegeDetailslegename<< std::endl << std::endl ;
                    std::cout << "    ----------------------"<< std::endl << std::endl ;
                    getline(fp,fileCollegeDetailslegename,'\n');
                    std::cout << "            Research Field : "<<fileCollegeDetailslegename<< std::endl << std::endl ;
                    std::cout << "    ----------------------"<< std::endl << std::endl ;
                    std::cout << "                  Passowrd : "<< std::endl << std::endl ;
                    std::cout << "    ----------------------"<< std::endl << std::endl ;
                    gotoxy(29,8);
                    std::cin >> CollegeDetailslegename;
                    gotoxy(29,12);
                    std::cin >> city;
                    gotoxy(29,16);
                    std::cin >> state;
                    gotoxy(29,20);
                    std::cin >> CollegeDetailslegetype;
                    gotoxy(29,24);
                    std::cin >> researchfield;
                    gotoxy(29,28);
                    std::cin >> password;
                }
                getline(fp,filepassword,'\n');
            }
        }
};

csveditinput(CollegeDetails ob){
    


}

void csvedit(std::string collegename){
    system("cls");
	CollegeDetails c(collegename);
}
