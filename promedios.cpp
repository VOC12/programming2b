/*Calculate the first 3 notes of n students*/ 

#include "iostream"
#include "string"
#include <conio.h>
#include <stdio.h>

using namespace std;

int main ()
{
	int promedio2;
	
	cout<< "UPY GRADES "<< "In this section you will find your grades ";
	
    cout<< "\n" << " Please, enter yor name and your family name"; // identification.
	
	string sname1; //variable where the name of the student will be contained.
	getline(cin, sname1); //name of the student.
	
	cout << "\n"<< "Please insert the courses from 1 to 3" <<" and then insert "<< sname1 << "'s grades of this quarter by unit." << "\n"<<"at the end the average will be presented." << "\n";  
	
	int snumber;
	for (int snumber = 1; snumber<=3; snumber = snumber+1)
	{
		cout << "\n" << "Course n. : ";
		cin >> snumber;
		
		cout <<" Name of the subject: ";
		string cname1;
		cin>> cname1; //name of the course
	
		int x,y,z, promedio1; 

		printf(" 1st Unit: ");
		scanf("%d",&x);
		printf(" 2nd Unit: ");
		scanf("%d",&y);
		printf(" 3rd Unit: ");
		scanf("%d",&z);
		
		cout << "The college average of "<< sname1 << " in "<< cname1 << " course is: ";
		
		promedio1 =(x+y+z)/3; 	
		printf("%d", promedio1);
		getch();
	} 
	
	cout << "\n" << "GENERAL AVERAGE";
		
			int collavs1, collavs2, collavs3, resultado; 
			
			std::cout << "\n" << "course n.1: ";
			std::cin >> collavs1;
			
			std::cout << "course n.2: ";
			std:cin >> collavs2;
			
			std::cout << "course n.3: ";
			std::cin >> collavs3;
			
			resultado = (collavs1 + collavs2 + collavs3)/3;
			std:: cout << "\n" << sname1 << " got during this quarter: "<< resultado;
			cout << "\n" << "thank you fou using this calculator.";
	
return 0;
	
}