#include<iostream>
#include"GitHubUser.h"
#include<string>
#include<fstream>
using namespace std;
void setEduBckGrnd(GitHubUser &user);

int menu()
{

	int a;
	cout << "This is menu" << endl;
	cout << "Press 1 to take input from the files"<<endl<<"Press 2 to add Eductional information"<<endl<<"Press 3 to print all the information"<<endl<<"Press 4 to delete the educational information"<<endl;
	cout <<"press 5 to backup your data"<<endl<< "press 0 to exit the programme";
	cin >> a;

	
	return a;
}
void readdata(GitHubUser *& users, string location)
{
	int noofusers,countoffolders;
	ifstream fin;
	fin.open(location);
	fin>>noofusers;
	users = new GitHubUser[noofusers];
	for(int i=0;i<noofusers;i++)
	{
		fin>>users[i].Firstname;
		fin>>users[i].username;
		fin>>users[i].email;
		fin>>countoffolders;
		users[i].foldername = new string [countoffolders];
		for(int j=0;j<countoffolders;j++)
		{
			fin>>users[i].foldername[j];
		}
		
	}
}
void setEduBckGrnd(GitHubUser *& user)
{
	for(int i=0;i<2;i++)
	{
		user[i].institutename=new string;
		user[i].qualificationlevel=new string;
	}
	for(int i=0;i<2;i++)
	{cout<<user[i].username<<"enter the institue name";
	
	cin>>*user[i].institutename;
	cout<<user[i].username<<"Enter your qualification level";
	cin>>*user[i].qualificationlevel;
	}

}
void print(GitHubUser *& user)
{int a=0;
	for(int i=0;i<2;i++)
	{
		cout<<"first name of "<<i+1<<"user is :"<<user[i].Firstname<<endl;
		cout<<"User name of "<<i+1<<"user is :"<<user[i].username<<endl;
		cout<<"Emailof "<<i+1<<"user is :"<<user[i].email<<endl;
		for(int j=0;j<2;j++)
			{cout<<"folder name is : "<<user[i].foldername[j]<<endl;
	}
		
		cout<<"Did you want to check the educational information of student"<<endl<<endl<<endl<<"If yes press 1 else press 0";
		cin>>a;
		if(a==1 && user[i].institutename != nullptr)
			{cout<<"Institue name is "<<*user[i].institutename<<endl;
		cout<<"Qualification level is"<<*user[i].qualificationlevel<<endl;
		}


	}
}
void remove(GitHubUser *&user)
{
	for(int i=0;i<2;i++)
	{	user[i].institutename=nullptr;
	user[i].qualificationlevel=nullptr;
	}


}
void backup(GitHubUser *&originalArry, GitHubUser *& backupArry, int userCount)
{
	backupArry =new GitHubUser[userCount];
	for(int i=0;i<userCount;i++)
		{backupArry[i].foldername=new string [2];

}
	
	for(int i=0;i<userCount;i++)
	{
		backupArry[i].Firstname=originalArry[i].Firstname;
		backupArry[i].username=originalArry[i].username;
		backupArry[i].email=originalArry[i].username;
		backupArry[i].countoffolders=originalArry[i].countoffolders;
		backupArry[i].qualificationlevel=originalArry[i].qualificationlevel;
		backupArry[i].institutename=originalArry[i].institutename;
		for(int j=0;j<2;j++)
			backupArry[i].foldername[j]=originalArry[i].foldername[i];
	}
	

}
void end(GitHubUser *&p,GitHubUser *& q)
{
	for (int i = 0;i < 2;i++)
	{
		p[i].foldername = nullptr;
		q[i].foldername = nullptr;
		}
	//for (int i = 0;i < 2;i++)
	//{
	//	delete[]p;
	//	delete[]q;
	//}
}
int main()
{
	int a = 1;
	
	string location;
	cout << endl << "enter the location of your file" << endl;
	cin >> location;

	GitHubUser *Backup;
	GitHubUser *users;
	while (a != 0)
	{
		a = menu();
		if (a == 1)
		{
			cout << endl;
			readdata(users, location);

		}if (a == 2)
		{
			cout << endl;
			cout << "set the educational background" << endl;
			setEduBckGrnd(users);
			cout << endl;
		}
		if (a == 3)

		{
			cout << endl;
			print(users);
			cout << endl;
		}
		if (a == 4)
		{
			cout << endl;
			remove(users);
			cout << endl;
		}
	
		if (a == 5)
		{
			cout << endl;
			
			backup(users, Backup, 2);
			cout << endl;
		}
		
	}
	end(users, Backup);
}
