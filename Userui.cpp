#include"Usercredential.cpp"

void Userui(){
    system("cls");
    string collegename,password;
    cout<<"Enter the college name : ";
    cin>>collegename;
    cout<<"Password : ";
    cin>>password;
    Usercredential(collegename,password);
}
