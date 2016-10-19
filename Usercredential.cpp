#include "useroperationui.cpp"


void usercredential(credentials c){
    std::string username = c.username;
    std::string password = c.password;
    std::fstream fp;
    std::string fileusername,filepassword;
    fp.open("csv files/usercredential.csv",std::ios::in);
    while(1){
        getline(fp,fileusername,',');
        getline(fp,filepassword,'\n');
        if( fileusername == username && filepassword == password ){
            useroperationui();
            return;
        }
        if( fp.eof() ){
            std::cout <<"\nPassword and Username combination not found\n"<< std::endl;
            break;
        }
    }
}

void usercredential(std::string username, std::string password){
    std::fstream fp;
    std::string fileusername,filepassword;
    fp.open("csv files/usercredential.csv",std::ios::in);
    getline(fp,fileusername,',');
    getline(fp,filepassword,'\n');
    while(1){
        getline(fp,fileusername,',');
        getline(fp,filepassword,'\n');
        if( fileusername == username && filepassword == password ){
            useroperationui();
            return;
        }
        if( fp.eof() ){
            std::cout <<"\nPassword and Username combination not found\n"<< std::endl;
            break;
        }
    }
}

void usercredential(registeration r){
    std::string username = r.collegename;
    std::string password = r.password;
    std::fstream fp;
    std::string fileusername,filepassword;
    fp.open("csv files/usercredential.csv",std::ios::in);
    while(1){
        getline(fp,fileusername,',');
        getline(fp,filepassword,'\n');
        if( fileusername == username && filepassword == password ){
            useroperationui();
            return;
        }
        if( fp.eof() ){
            std::cout <<"\nPassword and Username combination not found\n"<< std::endl;
            break;
        }
    }
}
