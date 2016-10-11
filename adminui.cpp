#include "adminoperationui.cpp"

void adminui(){
    system("cls");
    credentials c;
    cout<<"\n             ====================  Welcome to College/University Portal  ========================"<<endl<<endl<<endl<<endl<<endl;
    string collegename,password;
    cout<<"                                 ----------------------"<<endl;
    cout<<"                                 Enter the college name : "<<endl;;
    cout<<"                                 ----------------------"<<endl;
    cout<<"\n                                               Password : ";
    cout<<"\n                                 ----------------------"<<endl;
    gotoxy(58,7);
    c.getusername();
    cout<<"\n\n                                               Password : ";
    gotoxy(58,10);
    c.getpassword();
    adminkey(c);
}

void adminkey(credentials c){
    if( c.username == "admin" && c.password == "password"){
        adminoperation();
    } else {
        std::cout << "Wrong username and password combination" << std::endl;
    }
}
