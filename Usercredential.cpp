#include<encryption.cpp>

void Usercredential(string username,string password){
    username = encryption::encyrpt(username);
    password = encryption::decrypt(password);
    fstream f;
    f.open("csv files/usercredential.csv",ios::in);
    string fileusername
}