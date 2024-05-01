#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class task
{
	public:
		char tasks[20][100],status[20][10];
		int compt,a,nott;
		task()
		{
			a=0;
		}
		void crtask()
		{
			cout<<"\nEnter the no.of tasks to include : ";
			cin>>nott;
			cin.ignore();
			for(int i=0;i<nott;i++)
			{
				cout<<"Enter the task "<<i+1<<" : ";
				gets(tasks[i]);
				strcpy(status[i],"Pending");
				a++;
			}
		}
		void view()
		{
			if(a>0)
			{
				for(int i=0;i<a;i++)
				{
					cout<<i+1<<". "<<tasks[i]<<" - "<<status[i]<<endl;
				}
			}
			else
			{
				cout<<"There is no task given. Enter atleast one task";
			}
		}
		void delet()
		{
			if(a>0)
			{
				int delrow;
				for(int i=0;i<a;i++)
				{
					cout<<i+1<<". "<<tasks[i]<<endl;
				}
				cout<<"Enter the task to be deleted : ";
				cin>>delrow;
				for(int i=delrow-1;i<a;i++)
				{
					strcpy(tasks[i],tasks[i+1]);
				}
				for(int i=0;i<a-1;i++)
				{
					cout<<i+1<<". "<<tasks[i]<<endl;
				}
			}
			else
			{
				cout<<"There is no task given. Enter atleast one task  ";
			}
		}
		void markcomp()
		{
			for(int i=0;i<a;i++)
			{
				cout<<i+1<<". "<<tasks[i]<<" - "<<status[i]<<endl;
			}
			cout<<"\nEnter the task that is completed : ";
			cin>>compt;	
			cout<<endl;
			strcpy(status[compt-1],"Completed");
			for(int i=0;i<a;i++)
			{
				cout<<i+1<<". "<<tasks[i]<<" - "<<status[i]<<endl;
			}
		}
};
int main()
{
	task t;
	int task;
	cout<<"-------- To Do List --------\n1. Enter a task\n2. View a task\n3. Delete a task\n4. Mark a task a completed\n5. Exit";
	do
	{
		cout<<"\n----------------------------\nEnter the work to be done : ";
		cin>>task;
		switch(task)
		{
			case 1:
			{
				t.crtask();
				break;
			}
			case 2:
			{
				t.view();
				break;
			}
			case 3:
			{
				t.delet();
				break;
			}
			case 4:
			{
				t.markcomp();
				break;
			}	 
		}	
	}while((task>=1)&&(task<=5));
	return 0;
}
