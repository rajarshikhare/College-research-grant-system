#include"Usercredential.cpp"
#include"encryption.cpp"

void userui(){
    system("cls");
    cout<<"             ====================  Welcome to College/University Portal  ========================"<<endl<<endl<<endl<<endl<<endl;
    string collegename,password;
    cout<<"                                 Enter the college name : ";
    cin>>collegename;
    collegename = encryption::encrypt(collegename);
    cout<<"                                 Password : ";
    cin>>password;
    password = encryption::encrypt(password);
    Usercredential(collegename,password);
}
