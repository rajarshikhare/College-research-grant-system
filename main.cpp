#include<iostream>
#include"Adminui.cpp"
#include "userui.cpp"
using namespace std;

int main() {
    int operation;
    cout<<"please enter the console to enter"<<endl;
    cout<<"1 . College User"<<endl;;
    cout<<"2. MHRD Admin control "<<endl;
    cin>>operation;
    switch (operation){
        case (1) : Userui();
                   break;
        case (2) : //Adminui();
                   break;
    }
    return 0;
}
