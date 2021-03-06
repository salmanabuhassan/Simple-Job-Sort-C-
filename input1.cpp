//INPUT
#include <iostream>
#include <climits>
#include <iomanip>
#include <fstream>

using namespace std;

class Data
{
	private:
		string name;
		int space;
		int age;
		double cgpa;
		string gender;
		int course;
		int workplace;
		string uni;
		
	public:
	void setName(string set)
	{name=set;}
	
	string getName()const
	{return name;}	
	
	void setSpace(int spa)
	{space=spa;}
	
	int getSpace()const
	{return space;}	
	
	void setAge(int y)
	{age=y;}
	int getAge()const
	{return age;}
	
	void setCGPA(double c)
	{cgpa=c;}
	double getCGPA()const
	{return cgpa;}
	
	void setGender(string g)
	{gender=g;}
	string getGender()const
	{return gender;}
	
	void setCourse(int s)
	{course=s;}
	int getCourse()const
	{return course;}
	
	void setWorkplace(int work)
	{workplace=work;}
	int getWorkplace()const
	{return workplace;}
	
	void setUni(string U)
	{uni=U;}
	string getUni()const
	{return uni;}	

};
int main()
{
	int students, i=0;
	cout << "How many students are there?" << endl;
	cin >> students;
	
	while (i<students)
  {
	
	ofstream outputFile;
	Data info;
	
	
	cout<<"\t\t\t\t\tJob Applicant Data Form"<<endl;
	cout<<"\t\t\t\t\t-------------------------"<<endl;
	
	outputFile.open("name.txt", ios::app);
	cout<<"Please enter your name:";
	cin.sync();
	string applicant;
	getline(cin,applicant);
	info.setName(applicant);
	outputFile<<info.getName()<<endl;
    outputFile.close();
    
    int count =0;
	outputFile.open("noname.txt",ios::app);
	for(int tab=0;tab<applicant.length();tab++)
	{
		if(applicant[tab]==' ')
		++count;
	}
	count=count+1;
	info.setSpace(count);
	outputFile<<info.getSpace()<<endl;
    outputFile.close();


	
	outputFile.open("age.txt", ios::app);
	cout<<"Age:";
	int year;
	cin>>year;
	 while(year<=18 || year>45 || cin.fail() )
	         {
	         	cin.clear();
	         	cin.ignore(INT_MAX,'\n');
	      	 cout<<"You don't enter a digit or within the appropriate age,Please enter again."<<endl;
	         cin>>year;
	         }
	info.setAge(year);
	outputFile<<info.getAge()<<endl;
    outputFile.close();

	
	outputFile.open("grade.txt", ios::app);
	double grade;
	cout<<"Please enter your CGPA(2.00-4.00):";
	cin>>grade;
	while(grade<2.00 || grade>4.00 || cin.fail() )
	         {
	         	cin.clear();
	         	cin.ignore(INT_MAX,'\n');
	      	 cout<<"You don't enter an appropriate grade,Please enter again."<<endl;
	         cin>>grade;
	         }
	info.setCGPA(grade);
	outputFile<<info.getCGPA()<<endl;
    outputFile.close();

	outputFile.open("gender.txt", ios::app);
	int gen;string gend;
	cout<<"Please state your gender by inputing 1 for male and 2 for female:";
	cin>>gen;
	while(gen<1 || gen>2 || cin.fail() )
	         {
	         	cin.clear();
	         	cin.ignore(INT_MAX,'\n');
	      	 cout<<"You don't enter 1 for male or 2 for female.Please enter again"<<endl;
	         cin>>gen;
	         }
	switch(gen)
	{
		case 1:gend="1";break;
		case 2:gend="2";break;
	}
	info.setGender(gend);
	outputFile<<info.getGender()<<endl;
    outputFile.close();
	
	outputFile.open("course.txt", ios::app);
	int kos;
	cout<<"Please enter the number based on your course:"<<endl;
	cout<<"1-Engineeering\t        2-Medicine & Healthcare\t        3-Architecture\t 4-Laws"<<endl;
	cout<<"5-Computer Science\t6-Islamic & Human Science\t7-Economics\t 8-Science"<<endl;
	cin>>kos;
	 while(kos<=0 || kos>14 || cin.fail() )
	         {
	         	cin.clear();
	         	cin.ignore(INT_MAX,'\n');
	      	 cout<<"You do not select your programme.Please enter again"<<endl;
	         cin>>kos;
	         }
	
	info.setCourse(kos);
    outputFile<<info.getCourse()<<endl;
    outputFile.close();

	
	outputFile.open("work.txt", ios::app);
	int fav;string work;
	cout<<"Please enter your preferred workplace"<<endl;
	cout<<"1-Selangor\t2-Kuala Lumpur\t3-Perak\t        4-Melaka\t5-Perlis\t6-Kedah\t        7-Negeri Sembilan"<<endl;
	cout<<"8-Terengganu\t9-Kelantan\t10-Pahang\t11-Johor\t12-Sabah\t13-Sarawak\t14-Pulau Pinang"<<endl;
	cin>>fav;
	 while(fav<=0 || fav>14 || cin.fail() )
	         {
	         	cin.clear();
	         	cin.ignore(INT_MAX,'\n');
	      	 cout<<"You do not select your preferred workplace.Please enter again"<<endl;
	         cin>>fav;
	         }
	info.setWorkplace(fav);
    outputFile<<info.getWorkplace()<<endl;
    outputFile.close();

   outputFile.open("uni.txt", ios::app);
   string univ;
   cout<<"Previous Institution(Full Name):";
   cin.ignore();
   getline(cin,univ);
   info.setUni(univ);
   outputFile<<info.getUni()<<endl;

   outputFile.close();

   
	
	
	cout<<"\t\t\t\t\t\tApplicant Data"<<endl;
    cout<<"\t\t\t\t\t\t--------------"<<endl;
	cout<<"Name      :"<<info.getName()<<endl;
	cout<<"Gender    :"<<info.getGender()<<endl;
	cout<<"Age       :"<<info.getAge()<<endl;
	cout<<"Course    :"<<info.getCourse()<<endl;
	cout<<setprecision(2)<<showpoint<<fixed;
	cout<<"Grade     :"<<info.getCGPA()<<endl;
	cout<<"University:"<<info.getUni()<<endl;
	cout<<"Preffered :"<<info.getWorkplace()<<endl;
	cout<<"Workplace"<<endl;

    
    
    outputFile<<setprecision(2)<<showpoint<<fixed;
    i++;
 }
  //  system("pause");
	return 0;
}



