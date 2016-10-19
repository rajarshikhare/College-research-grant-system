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

void adminkey(credentials c){
    if( c.username == "admin" && c.password == "password"){
        adminoperation();
    } else {
        std::cout  << "Wrong username and password combination" << std::endl;
    }
}
