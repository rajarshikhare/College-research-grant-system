#include "useroperationui.cpp"

int usercredential(credentials c){
    std::fstream fp;
    std::string fileusername,filepassword;
    fp.open("csv files/usercredential.csv",std::ios::in);
    while(1){
        getline(fp,fileusername,',');
        getline(fp,filepassword,'\n');
        if( fileusername == c.username && filepassword == c.password ){
            fp.close();
            useroperationui(c.username);
            return 1;
        }
        if( fp.eof() ){
            fp.close();
            return 0;
        }
    }
    return 0;
}


int usercredential(registeration r){
    std::fstream fp;
    std::string fileusername,filepassword;
    fp.open("csv files/usercredential.csv",std::ios::in);
    while(1){
        getline(fp,fileusername,',');
        getline(fp,filepassword,'\n');
        if( fileusername == r.collegename && filepassword == r.password ){
            fp.close();
            useroperationui(r.collegename);
            return 1;
        }
        if( fp.eof() ){
            fp.close();
            std::cout <<"\nPassword and Username combination not found\n"<< std::endl;
            break;
        }
    }
    return 0;
}
