#include<iostream>
using namespace std;
#include<cstring>
#include<fstream>
#include<conio.h>
#include "position.h"
#include "Loginoption.cpp"
#include "register.cpp"

int main() {
    system("cls");
    int operation;
    cout<<"====================  Ministry of Human Resource Development About MHRD  ========================"<<endl<<endl;
    cout<<"The Ministry of Human Resource Development, formerly Ministry of Education (until 25 September 1985),\nis responsible for the development of human resources in India. The Ministry is divided into two \ndepartments: the Department of School Education and Literacy, which deals with primary, secondary and \nhigher secondary education, adult education and literacy, and the Department of Higher Education, which \ndeals with university education, technical education, scholarship etc."<<endl<<endl<<endl<<endl;
    cout<<"     -----------"<<endl;
    cout<<"     1. Login"<<endl;
    cout<<"     -----------"<<endl;
    cout<<"     2. Register"<<endl;
    cout<<"     -----------"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

    cout<<"\n\nEnter your choice : ";
    cin>>operation;
    switch (operation){
        case (1) : loginoption();
                   break;
        case (2) : registeration r;
                   break;
    }
    return 8;

}
