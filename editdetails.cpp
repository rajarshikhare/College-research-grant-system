void csvedit(std::string);
class CollegeDetailslege_details;


class CollegeDetails{

public:
	std::string collegename,collegename1,password,confirmpassword,collegetype,state,researchfield,city;
	friend void csveditinput(std::string);
    CollegeDetails(std::string collegenametemp){
    		collegename = collegenametemp;
    		char *temp1;
            std::fstream fp;
            std::string filecollegename,filepassword;
            fp.open("csv files/colleges_details.csv",std::ios::in);
            while(!fp.eof()){
                getline(fp,filecollegename,',');
                if( filecollegename == collegename ){
                    system("cls");
                    std::cout << "\n          ===================  Overwrite your Details  ====================="<< std::endl<< std::endl<< std::endl<< std::endl << std::endl ;
                    //string CollegeDetailslegename,password,confirmpassword,CollegeDetailslegetype,state,researchfield,city;
                    std::cout << "    ----------------------"<< std::endl << std::endl ;
                    std::cout << "              College name : "<< filecollegename << std::endl << std::endl ;
                    std::cout << "    ----------------------"<< std::endl << std::endl ;
                    getline(fp,filecollegename,',');
                    std::cout << "                      City : "<<filecollegename<< std::endl << std::endl ;
                    std::cout << "    ----------------------"<< std::endl << std::endl ;
                    getline(fp,filecollegename,',');
                    std::cout << "                     State : "<<filecollegename<< std::endl << std::endl ;
                    std::cout << "    ----------------------"<< std::endl << std::endl ;
                    getline(fp,filecollegename,',');
                    std::cout << "              College Type : "<<filecollegename<< std::endl << std::endl ;
                    std::cout << "    ----------------------"<< std::endl << std::endl ;
                    getline(fp,filecollegename,'\n');
                    std::cout << "            Research Field : "<<filecollegename<< std::endl << std::endl ;
                    std::cout << "    ----------------------"<< std::endl << std::endl ;
                    std::cout << "                  Password : "<< std::endl << std::endl ;
                    std::cout << "    ----------------------"<< std::endl << std::endl ;
                    gotoxy(29,8);
                    getchar();
                    //gets(temp1);
                    std::cin>>collegename1;
                    //collegename = std::string(temp1);
                    gotoxy(29,12);
                    //gets(temp1);
                    std::cin>>city;
                    //city = std::string(temp1);
                    gotoxy(29,16);
                    //gets(temp1);
                    std::cin>>state;
                    //state = std::string(temp1);
                    gotoxy(29,20);
                    //gets(temp1);
                    std::cin>>collegetype;
                    //collegetype = std::string(temp1);
                    gotoxy(29,24);
                    //gets(temp1);
                    std::cin>>researchfield;
                    //researchfield = std::string(temp1);
                    gotoxy(29,28);
                    std::cin >> password;
                }
                getline(fp,filepassword,'\n');
            }
        }
};

csveditinput(CollegeDetails ob){
    std::string collegename,password,confirmpassword,collegetype,state,researchfield,city;
    std::fstream fpold,fpnew;
    fpold.open("csv files/colleges_details.csv",std::ios::in);
    fpnew.open("csv files/temp.csv",std::ios::out);
	getline(fpold,collegename,',');
	getline(fpold,city,',');
	getline(fpold,state,',');
	getline(fpold,collegetype,',');
	getline(fpold,researchfield,'\n');
    while(!fpold.eof()){
        if( collegename == ob.collegename){
            fpnew<<ob.collegename1<<","<<ob.city<<","<<ob.state<<","<<ob.collegetype<<","<<ob.researchfield<<std::endl;
        } else {
            fpnew<<collegename<<","<<city<<","<<state<<","<<collegetype<<","<<researchfield<<std::endl;
        }
		getline(fpold,collegename,',');
        getline(fpold,city,',');
        getline(fpold,state,',');
        getline(fpold,collegetype,',');
        getline(fpold,researchfield,'\n');
    }
	fpold.close();
	fpnew.close();
	remove("csv files/colleges_details.csv");
	rename("csv files/temp.csv","csv files/colleges_details.csv");
	fpold.open("csv files/usercredential.csv",std::ios::in);
    fpnew.open("csv files/temp.csv",std::ios::out);
	getline(fpold,collegename,',');
	getline(fpold,password,'\n');
    while(!fpold.eof()){
        if( collegename == ob.collegename){
            fpnew<<ob.collegename1<<","<<ob.password<<std::endl;
        } else {
            fpnew<<collegename<<","<<password<<std::endl;
        }
		getline(fpold,collegename,',');
        getline(fpold,password,'\n');
    }
	fpold.close();
	fpnew.close();
	remove("csv files/usercredential.csv");
	rename("csv files/temp.csv","csv files/usercredential.csv");

}

void csvedit(std::string collegename){
    system("cls");
	CollegeDetails c(collegename);
    csveditinput(c);
}
