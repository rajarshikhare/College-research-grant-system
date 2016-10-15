

class registeration{
    string collegename,password,confirmpassword,collegetype,state,researchfield,city;
public:
    registeration(){
        system("cls");
        cout<<"\n             ====================  Welcome to College/University Registeration Portal  ======================="<<endl<<endl<<endl<<endl<<endl;
        //string collegename,password,confirmpassword,collegetype,state,researchfield,city;
        cout<<"    ----------------------"<<endl<<endl;;
        cout<<"    Enter the college name : "<<endl<<endl;
        cout<<"    ----------------------"<<endl<<endl;;
        cout<<"                      City : "<<endl<<endl;
        cout<<"    ----------------------"<<endl<<endl;;
        cout<<"                     State : "<<endl<<endl;
        cout<<"    ----------------------"<<endl<<endl;
        cout<<"              College Type : "<<endl<<endl;
        cout<<"    ----------------------"<<endl<<endl;;
        cout<<"            Research Field : "<<endl<<endl;
        cout<<"    ----------------------"<<endl<<endl;
        cout<<"                  Passowrd : "<<endl<<endl;
        cout<<"    ----------------------"<<endl<<endl;;
        gotoxy(29,8);
        cin>>collegename;
        gotoxy(29,12);
        cin>>city;
        gotoxy(29,16);
        cin>>state;
        gotoxy(29,20);
        cin>>collegetype;
        gotoxy(29,24);
        cin>>researchfield;
        gotoxy(29,28);
        cin>>password;
        csvinput(*this);
        //usercredential(collegename,password);
        usercredential(*this);
    }
    friend void usercredential(registeration);
    friend void csvinput(registeration);
};

//#include"detailsentry.cpp"
//#include"usercredential.cpp"

void csvinput(registeration r){
    fstream fp;
    fp.open("csv files/colleges_details.csv",ios::app);
    fp<<r.collegename<<",";
    fp<<r.city<<",";
    fp<<r.state<<",";
    fp<<r.collegetype<<",";
    fp<<r.researchfield<<","<<"\n";
    fp.close();
    fp.open("csv files/usercredential.csv",ios::app);
    fp<<r.collegename<<","<<r.password<<","<<"\n";
    fp.close();
}
