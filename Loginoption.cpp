#include"Userui.cpp"

loginoption(){
    system("cls");
    int operation;
    cout<<"====================  Ministry of Human Resource Development About MHRD  ========================"<<endl<<endl;
    cout<<"The Ministry of Human Resource Development, formerly Ministry of Education (until 25 September 1985),\nis responsible for the development of human resources in India. The Ministry is divided into two \ndepartments: the Department of School Education and Literacy, which deals with primary, secondary and \nhigher secondary education, adult education and literacy, and the Department of Higher Education, which \ndeals with university education, technical education, scholarship etc."<<endl<<endl<<endl<<endl;
    cout<<"     -----------"<<endl;
    cout<<"     *  Login ----------------> Login as"<<endl;
    cout<<"     -----------               ----------------------"<<endl;
    cout<<"     *  Register                1. MHRD Administrator"<<endl;
    cout<<"     -----------               ----------------------"<<endl;
    cout<<"                                2. College/university"<<endl;
    cout<<"                               ----------------------"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    //cout<<"Contact us at : mhrd.gov.in"<<endl;
    cout<<"Enter your choice : ";
    cin>>operation;
    switch (operation){
        case (1) : //Admin();
                   break;
        case (2) : userui();
                   break;
    }
    return 0;
}
hjgjkjh
