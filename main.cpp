#include<iostream>
using namespace std;

int main() {
    int operation;
    cout<<"please enter the console to enter";
    cout<<"1 . College User"<<endl;;
    cout<<"2. MHRD Admin control "<<endl;
    switch (operation){
        case (1) : Userui();
                   break;
        case (2) : Adminui();
                   break;
    }
    return 0;
}
