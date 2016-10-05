#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int i = 0;
    char c,pass[10];
    while(c != '\n'){
        c = getch();
        if(c == '\n'){
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
    cout<<pass;
}
