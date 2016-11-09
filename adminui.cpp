#include "adminoperationui.cpp"

void adminui(){
    system("cls");
    credentials c;
    std::cout << "\n             ====================  Welcome to College/University Portal  ========================"<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl;
    std::string collegename,password;
    std::cout << "                                 ----------------------" << std::endl;
    std::cout << "                                 Enter the college name : "<<std::endl;;
    std::cout << "                                 ----------------------"<<std::endl;
    std::cout << "\n                                               Password : ";
    std::cout << "\n                                 ----------------------"<<std::endl;
    gotoxy(58,7);
    c.getusername();
    std::cout << "\n\n                                               Password : ";
    gotoxy(58,10);
    c.getpassword();
    adminkey(c);
}


int adminkey(credentials c){
    std::fstream fp;
    std::string fileusername,filepassword;
    fp.open("csv files/admincredentials.csv",std::ios::in);
    getline(fp,fileusername,',');
    getline(fp,filepassword,'\n');
    if( fileusername == c.username && filepassword == c.password ){
        fp.close();
        adminoperation();
        return 1;
    }
    if( fp.eof() ){
        fp.close();
        std::cout <<"\nPassword and Username combination not found\n"<< std::endl;
    }
    return 0;
}
