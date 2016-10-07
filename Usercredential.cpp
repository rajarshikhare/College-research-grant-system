#include "useroperationui.cpp"


void usercredential(credentials c){
    string username = c.username;
    string password = c.password;
    fstream fp;
    string fileusername,filepassword;
    fp.open("csv files/usercredential.csv",ios::in);
    getline(fp,fileusername,',');
    getline(fp,filepassword,',');
    if(fileusername == username && filepassword == password){
        useroperationui();
    } else {
        cout<<"\nPassword and Username combination not found\n"<<endl;
    }
}

void usercredential(string username, string password){
    fstream fp;
    string fileusername,filepassword;
    fp.open("csv files/usercredential.csv",ios::in);
    getline(fp,fileusername,',');
    getline(fp,filepassword,',');
    if(fileusername == username && filepassword == password){
        useroperationui();
    } else {
        cout<<"\nPassword and Username combination not found\n"<<endl;
    }
}
