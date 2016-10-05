#include"Usercredential.cpp"

void userui(){
    system("cls");
    cout<<"             ====================  Welcome to College/University Portal  ========================"<<endl<<endl<<endl<<endl<<endl;
    string collegename,password;
    cout<<"                                 Enter the college name : ";
    cin>>collegename;
    cout<<"                                 Password : ";
    cin>>password;
    Usercredential(collegename,password);
}
