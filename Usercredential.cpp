#include<fstream>
#include "useroperationui.cpp"

void Usercredential(string username,string password){
    fstream fp;
    string fileusername,filepassword;
    fp.open("csv files/usercredential.csv",ios::in);
    fp>>fileusername;
    fp>>filepassword;
    if(fileusername == username && filepassword == password){
        useroperationui();
    } else {
        cout<<"Password and Username combination not found"<<endl;
    }
}
