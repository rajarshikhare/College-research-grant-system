

class registeration{
public:
    registeration(){
        system("cls");
        cout<<"\n             ====================  Welcome to College/University Registeration Portal  ======================="<<endl<<endl<<endl<<endl<<endl;
        string collegename,password,confirmpassword,collegetype,state,researchfield;
        cout<<"    ----------------------"<<endl<<endl;;
        cout<<"    Enter the college name : "<<endl<<endl;
        cout<<"    ----------------------"<<endl<<endl;;
        cout<<"                     State : "<<endl<<endl;
        cout<<"    ----------------------"<<endl<<endl;
        cout<<"              College Type : "<<endl<<endl;
        cout<<"    ----------------------"<<endl<<endl;;
        cout<<"            Research Field : "<<endl<<endl;
        cout<<"    ----------------------"<<endl<<endl;
        cout<<"                  Passowrd : "<<endl<<endl;
        cout<<"    ----------------------"<<endl<<endl;;
        cout<<"           Confirm Pasword : "<<endl<<endl;
        cout<<"    ----------------------"<<endl<<endl;
        gotoxy(29,8);
        cin>>collegename;
        gotoxy(29,12);
        cin>>state;
        gotoxy(29,16);
        cin>>collegetype;
        gotoxy(29,20);
        cin>>researchfield;
        gotoxy(29,24);
        cin>>password;
        gotoxy(29,28);
        cin>>confirmpassword;
        csvinput(this);
        usercredential(collegename,password);
    }
    friend 
    freind usercredential(registeration);
}

#include"detailsentry.cpp"
#include"usercredential.cpp"
