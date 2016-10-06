string password();

string password(){
    int i = 0;
    char c,pass[10];
    while(1){
        c = getch();
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
        pass[i] = '\0';
    }
    string str = string(pass);
    return str;
}
