#include"Usercredential.cpp"
#include"encryption.cpp"

string getpassword();

void userui(){
    system("cls");
    cout<<"\n             ====================  Welcome to College/University Portal  ========================"<<endl<<endl<<endl<<endl<<endl;
    string collegename,password;
    cout<<"                                 Enter the college name : ";
    cin>>collegename;
    //collegename = encryption::encrypt(collegename);
    cout<<"                                 Password : ";
    password = getpassword();
    //password = encryption::encrypt(password);
    Usercredential(collegename,password);
}



string getpassword(){
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
    return str;
}
