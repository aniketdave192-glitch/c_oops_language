#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
class game //creact a class
{
	int round;// its a privet data type.
	string name;
	public://its a public data. 
		void startgame()//create function
		{
			int userchoice, computerchoice;
			int userscore=0 ,computerscore=0;
			
			//input from user 
			
			cout<<"enter your name:";
			getline(cin, name);
			cout<<"how many rounds you play:";
			cin>>round;
			
			//its for intell
			srand(time(0));
			//looping 
			for(int i=1;i<=round;i++)
			{
				cout<<"\n=============================";
				cout<<"\n1.rock";
				cout<<"\n2.paper";
				cout<<"\n3.sessor";
				cout<<"\n";
				cout<<"what is your choice:";
				cin>>userchoice;
				
				computerchoice=(rand()%3)+1;
				
				//conditational flow
				if(computerchoice==1)
				{
					cout<<"computer chose:rock";
				}
				else if(computerchoice==2)
				{
					cout<<"computer chose:paper";
				}
				else
				{
					cout<<"computer chose:sessor";
				}
				cout<<endl;
				if(computerchoice==userchoice)
				{
					cout<<"\nmache is drew.........";
				}
				else if(computerchoice==3 && userchoice==1 ||
				computerchoice==1 && userchoice==2||
				computerchoice==2 && userchoice==3)
				{
					cout<<"\nresult:you are win............";
					userscore++;
				}
				else
				{
					cout<<"\nresult:computer is win............";
					computerscore++;
				}
				cout<<endl;
				
				//its for final out put 
		
				cout<<"\n==================================";
				cout<<"\nfinal score:";
				cout<<"\n"<<name<<": "<<userscore;
				cout<<"\ncomputer:"<<computerscore;
				
				if(userscore>computerscore)
				{
					cout<<"\n"<<name<<" is a winner";
				}
				
				else if(userscore<computerscore)
				{
					cout<<"\ncomputer is a winner";
				}
				else 
				{
					cout<<"\nmatch is drwa....";
				}
				
			}
		}
};
int main()
{
	game g;//create object 
	g.startgame();//call function
	return 0;
}
