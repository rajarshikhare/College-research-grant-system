void grant_edit(double g, std::string c, int f)
{
	std::string fileusername, str_grant, r;
	
	std::fstream fp1;
	std::fstream fp2;
	
	fp1.open("csv files/grant.csv",std::ios::in);
	fp2.open("csv files/temp.csv",std::ios::out);
	
	getline(fp1,fileusername,',');
    getline(fp1,str_grant,',');
    getline(fp1,r,'\n');
	
	while(!fp1.eof())
	{	
		if(f == 0)
		{
        	if( fileusername == c )
				fp2<<fileusername<<","<<g<<","<<r<<std::endl;
        	else
        		fp2<<fileusername<<","<<str_grant<<","<<r<<std::endl;
    	}
    	else
    	{
    		if( fileusername == c )
				fp2<<fileusername<<","<<g<<","<<r<<std::endl;
        	else
        		fp2<<fileusername<<","<<str_grant<<","<<r<<std::endl;
		}
        getline(fp1,fileusername,',');
        getline(fp1,str_grant,',');
        getline(fp1,r,'\n');
    }
    fp1.close();
    fp2.close();
    
	std::remove("csv files/grant.csv");
    std::rename("csv files/temp.csv", "csv files/grant.csv"); 
}

//void grant_edit_new(double g, std::string c, int p)
	
