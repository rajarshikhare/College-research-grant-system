
#include"encryption.cpp"

string gethiddenpassword();

class credentials{
    string username,password;
public:
    void getusername(){
        cin>>username;
    }
    void getpassword(){
        password = gethiddenpassword();
    }
    friend void usercredential(credentials);
};

#include"usercredential.cpp"

void userui(){
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
    usercredential(c);
}



string gethiddenpassword(){
    int i = 0;
    char c,pass[10];
    while(1){
        c = getch();
        if(c == '\b' && i == 0){
            continue;
        }
        if(c == 13){
            break;
        } else if(c == '\b'){
            cout<<"\b";
            cout<<" ";
            cout<<"\b";
            i--;
        } else {
            cout<<"*";
            pass[i++] = c;
        }
    }
    pass[i] = '\0';
    string str = string(pass);
    cout<<"\n";
    return str;
}
