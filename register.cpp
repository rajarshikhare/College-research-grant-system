
class registeration{
    std::string collegename,password,confirmpassword,collegetype,state,researchfield,city;
public:
    registeration(){
        system("cls");
        std::cout << "\n          ===================  Welcome to College/University Registeration Portal  ====================="<< std::endl<< std::endl<< std::endl<< std::endl << std::endl ;
        //string collegename,password,confirmpassword,collegetype,state,researchfield,city;
        std::cout << "    ----------------------"<< std::endl << std::endl ;
        std::cout << "    Enter the college name : "<< std::endl << std::endl ;
        std::cout << "    ----------------------"<< std::endl << std::endl ;
        std::cout << "                      City : "<< std::endl << std::endl ;
        std::cout << "    ----------------------"<< std::endl << std::endl ;
        std::cout << "                     State : "<< std::endl << std::endl ;
        std::cout << "    ----------------------"<< std::endl << std::endl ;
        std::cout << "              College Type : "<< std::endl << std::endl ;
        std::cout << "    ----------------------"<< std::endl << std::endl ;
        std::cout << "            Research Field : "<< std::endl << std::endl ;
        std::cout << "    ----------------------"<< std::endl << std::endl ;
        std::cout << "                  Passowrd : "<< std::endl << std::endl ;
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
        csvinput(*this);
        usercredential(*this);
    }
    friend void usercredential(registeration);
    friend void csvinput(registeration);
};

//#include"detailsentry.cpp"

void csvinput(registeration r){
    std::fstream fp;
    fp.open("csv files/colleges_details.csv",std::ios::app);
    fp<<r.collegename<<",";
    fp<<r.city<<",";
    fp<<r.state<<",";
    fp<<r.collegetype<<",";
    fp<<r.researchfield<<"\n";
    fp.close();
    fp.open("csv files/usercredential.csv",std::ios::app);
    fp<<r.collegename<<","<<r.password<<"\n";
    fp.close();
}
