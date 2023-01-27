#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdio.h>

using namespace std ;
 
void showmenu() ;
void addrecord() ; 
void viewrecord() ; 
void searchrecord() ; 
void deleterecord() ;  

struct Professor
{
		string name ; 
		string id ; 
		string designation ; 
		string department ; 
		string experience ; 
		string education ; 	
} ; 
 

int main()
{
	char c[10] ; 
	char c1 ; 
	int i = 0 ; 
	int temp1 = 0 ; 
	
	//setting our password 
	
	char c2[10] ; 
	c2[0] = 'u' ; 
	c2[1] = 's' ; 
	c2[2] = 'm' ; 
	c2[3] = 'a' ; 
	c2[4] = 'n' ; 
	c2[5] = '1' ; 
	c2[6] = '2' ; 
	c2[7] = '3' ; 
	c2[8] = '\0' ; 	
	 			
	cout<<"Please Enter Password  :- " ; 
	
	while(1)
	{
		c1 = getch() ;
		
		
		if ( c1 == 13 )
		{
			c[i]  = '\0' ; 
			break ; 
		} 
		
		if ( c1 == 8 )
		{
			if ( i>0 )
			{
				i-- ; 
				cout << "\b \b";
			} 
		} 
		
		else 
			{
				c[i++] = c1 ; 
				cout<<"*" ;
			}
 	}
	 
	 for ( int k = 0 ; k<10 ; k++)
	 {
	 		if( c[k] == c2[k] ) 
			{
				temp1++ ; 
			}	
	 }	
	 	
	 	if ( temp1 == 9 )
	 	{
	 		cout<<endl<<"C O R R E C T	P A S S W O R D ... ! ! !" ; 
			 showmenu() ; 	
		}
		
		
		if ( temp1 < 9 )
		{
				cout<<endl<<"WRONG PASSWORD...! 2 ATTEMPTS LEFT ... "<<endl ;
				i = 0 ; 
				temp1 = 0 ; 
				
				cout<<endl<<"Please Enter Password Again  :- " ; 
				
				while(1)
				{
					c1 = getch() ;
					
					
					if ( c1 == 13 )
					{
						c[i]  = '\0' ; 
						break ; 
					} 
					
					if ( c1 == 8 )
					{
						if ( i>0 )
						{
							i-- ; 
							cout << "\b \b";
						} 
					} 
					
					else 
						{
							c[i++] = c1 ; 
							cout<<"*" ;
						}
			 	}
			 	
				 for ( int k = 0 ; k<10 ; k++)
				 {
				 		if( c[k] == c2[k] ) 
						{
							temp1++ ; 
						}	
				 }	
				 	
				 	if ( temp1 == 9 )
				 	{
				 			cout<<endl<<"C O R R E C T	P A S S W O R D ... ! ! !" ; 
							 showmenu() ; 		
					}
					
				///////////////////////
				
				
		if ( temp1 < 9 )
		{
				cout<<endl<<"WRONG PASSWORD...! 1 ATTEMPT LEFT ... "<<endl ;
				i = 0 ; 
				temp1 = 0 ; 
				
				cout<<endl<<"Please Enter Password Again  :- " ; 
				
				while(1)
				{
					c1 = getch() ;
					
					
					if ( c1 == 13 )
					{
						c[i]  = '\0' ; 
						break ; 
					} 
					
					if ( c1 == 8 )
					{
						if ( i>0 )
						{
							i-- ; 
							cout << "\b \b";
						} 
					} 
					
					else 
						{
							c[i++] = c1 ; 
							cout<<"*" ;
						}
			 	}
				 
				 
				for ( int k = 0 ; k<10 ; k++)
				 {
				 		if( c[k] == c2[k] ) 
						{
							temp1++ ; 
						}	
				 }	
				 	
				if ( temp1 == 9 )
			 	{
			 			cout<<endl<<"C O R R E C T	P A S S W O R D ... ! ! !" ; 
						 showmenu() ; 		
				}
				
				if ( temp1 < 9 )
				{
					cout<< endl <<"E X C E S S	B L O C K E D . . . ! ! ! " ; 
				}	
										
	}
		}
		
	////// Actual system ... !
} 

	
void showmenu()
{
	int choice ; 
	system("cls") ; 
	cout<<endl<<"WELCOME TO THE RECORD MANAGEMENT SYSTEM DESIGNED BY MUHAMMAD BILAL ...!" ; 
	
	cout<<endl<<endl<<endl ; 
	
	cout<<"Enter 1 to view the previous record saved... ! \n" ; 
	cout<<"Enter 2 to add new Proffesor...! \n" ; 
	cout<<"Enter 3 to search a proffesor...!\n" ; 
	cout<<"Enter 4 to delate record ... !\n";
	cout<<"Enter 5 to exit ... !\n";
	
	
	cout<<"\nENTER YOUR CHOICE :- " ;
	cin>>choice ;   
	
	if( choice == 1 )
	{
		viewrecord() ; 		
	}
	
	if( choice == 2 )
	{
		addrecord() ; 
	}
	
	if( choice == 3 )
	{
		searchrecord() ; 
	}
	
	if( choice == 4 )
	{
		deleterecord() ; 
	}
	
	if ( choice == 5 )
	{
		
	}
	
	
}

void addrecord()
{
	system("cls") ; 
	cout<<endl<<"MENU TO ADD A PROFESSOR ... !\n\n" ;  
	
	Professor p ; 
	ofstream write ; 
	write.open( "record.txt" , ios::app) ; 
	
	cout << "Enter the name of professor :  " ; 
	cin>>p.name; 
	write<<p.name; 	
	write<<" " ; 
	cout<<endl ; 
	
	cout << "Enter the id of professor :  " ; 
	cin>>p.id; 
	write<<p.id;
	write<<" " ;
	cout<<endl ; 
	
	cout << "Enter the department of professor :  " ; 
	cin>>p.department; 
	write<<p.department;
	write<<" " ;
	cout<<endl ;  
	
	cout << "Enter the designation of professor :  " ; 
	cin>>p.designation; 
	write<<p.designation;
	write<<" " ;
	cout<<endl ; 
	
	cout << "Enter the education of professor :  " ; 
	cin>>p.education; 
	write<<p.education;
	write<<" " ;
	cout<<endl ;  
	
	cout << "Enter the experience of professor :  " ; 
	cin>>p.experience; 
	write<<p.experience;
	write<<endl ;
	cout<<endl ; 
	
	write.close() ; 
	
	showmenu() ; 
	
}

void viewrecord()
{
	system("cls") ; 
	string s ; 
	cout<<endl<<"RECORD OF PROFESSORS ... !\n\n" ;
	
	Professor p ; 
	int count = 1 ; 
	int choice1 ; 
	
	ifstream read ; 
	read.open( "record.txt") ; 
	
	while(read>>s)
	{
			cout<<endl<<"PROFFESSOR "<<count<<" :- \n"; 
			
			cout<<"Name of professor : " ; 
			//read>>p.name; 
			cout<<s<<endl ; 
			
			cout<<"ID of professor : " ; 
			read>>p.id; 
			cout<<p.id<<endl ; 
			
			cout<<"Department of professor : " ; 
			read>>p.department; 
			cout<<p.department<<endl ;
			
			cout<<"Designation of professor : " ; 
			read>>p.designation; 
			cout<<p.designation<<endl ;  
			
			cout<<"Education of professor : " ; 
			read>>p.education; 
			cout<<p.education<<endl ; 
			
			cout<<"Experience of professor : " ; 
			read>>p.experience; 
			cout<<p.experience<<endl<<endl ; 
			
			
			count++ ; 
	}
	
	read.close() ; 
	
	
	cout<<endl<<"\nPRESS 1 FOR MAIN MENU ...! " <<endl ; 
	cout<<"PRESS 2 TO EXIT ...!"<<endl<<endl ;  
	cout<<"ENTER A KEY :- ";
	cin>>choice1 ; 
	
	if( choice1 == 1 )
	{
		showmenu() ; 		
	}
	
	if( choice1 == 2 )
	{
	 
	}
}

void searchrecord()
{
	system("cls") ; 
	string a ; 
	bool yes=0 ; 
	
	cout<<"\n\nEnter name of the professor you want to find :- " ; 
	cin>>a ; 
	cout<<endl ; 
	
	Professor p ; 
	int count = 1 ; 
	int choice1 ; 
	
	ifstream read ; 
	read.open( "record.txt") ; 
	
	while(!read.eof() )
	{
		read>>p.name ; 
		
		if ( a == p.name)
		{
			cout<<endl<<"PROFFESSOR DETAILS :- \n"; 
			
			cout<<"Name of professor : " ; 
			cout<<p.name<<endl ; 
			
			cout<<"ID of professor : " ; 
			read>>p.id; 
			cout<<p.id<<endl ; 
			
			cout<<"Department of professor : " ; 
			read>>p.department; 
			cout<<p.department<<endl ;
			
			cout<<"Designation of professor : " ; 
			read>>p.designation; 
			cout<<p.designation<<endl ;  
			
			cout<<"Education of professor : " ; 
			read>>p.education; 
			cout<<p.education<<endl ; 
			
			cout<<"Experience of professor : " ; 
			read>>p.experience; 
			cout<<p.experience<<endl<<endl ; 
			
			yes = 1 ; 		
		}
	}
	
	if( yes==0)
	{
			cout<<endl<<"NO RECORD FOUND...!" ; 
	}
	
		read.close() ; 
	
	
	cout<<endl<<"\nPRESS 1 FOR MAIN MENU ...! " <<endl ; 
	cout<<"PRESS 2 TO EXIT ...!"<<endl<<endl ;  
	cout<<"ENTER A KEY :- ";
	cin>>choice1 ; 
	
	if( choice1 == 1 )
	{
		showmenu() ; 		
	}
	
	if( choice1 == 2 )
	{
	 
	}
	
}

void deleterecord()
{
	system("cls") ; 
	
	string a,b ;
	int choice1 ; 
	
	cout<<"\n\nEnter name of the professor you want to delete :- " ; 
	cin>>b ; 
	cout<<endl ; 
	
	Professor p ; 
	
	ifstream file ; 
	file.open("record.txt") ; 
	
	ofstream outfile ;
	outfile.open("new.txt") ; 
	
	while( file>>a )
    {
            if( a==b )
            {
            	file>>a>>a>>a>>a>>a ; 
        	}
        	
        	else
        	{
        		 	outfile<<a<<" ";
					file>>a ; 
					
					outfile<<a<<" ";
					file>>a ;
					
					outfile<<a<<" ";
					file>>a ; 
					
					outfile<<a<<" ";
					file>>a ; 
					
					outfile<<a<<" ";
					file>>a ; 
					
					outfile<<a<<"\n";					 
			}
    }
    
    outfile.close() ;
    file.close() ;
	
	remove("record.txt");
    rename("new.txt","record.txt");
    
    
	cout<<endl<<"\nPRESS 1 FOR MAIN MENU ...! " <<endl ; 
	cout<<"PRESS 2 TO EXIT ...!"<<endl<<endl ;  
	cout<<"ENTER A KEY :- ";
	cin>>choice1 ; 
	
	if( choice1 == 1 )
	{
		showmenu() ; 		
	}
	
	if( choice1 == 2 )
	{
	 
	}
    
    
}
