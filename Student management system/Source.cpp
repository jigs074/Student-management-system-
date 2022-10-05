#include <iostream>
#include <fstream>
using namespace std;
// Jignesh Patel : project - "Student Management system "



class student {


	string firstName; 
	string lastName; 
	int studentId; 
	 
	int grade;
	int marks[3];
	double percentage_Marks;


public: 

	void set_data() {
		 student s; 
		 int n; 
		 long int tutionfees = 0;
		 cout << "Type in for how many students you are looking data for" << endl; 
		 cin >> n;

		
		 
			 cout << "Student's first name :" << endl;
			 cin >> s.firstName;
			 cout << "Student last name : " << endl;
			 cin >> s.lastName;
			 cout << "Enter the student id of a student" << endl;
			 cin >> s.studentId;

			 


			 // s.set_data(); 


			 if (s.studentId <= 30) {
				 s.grade = 10;
				 tutionfees = 3000;

				 cout << "Tution fees of student in grade : " << s.grade << " is" << tutionfees << endl;

			 }

			 else if (s.studentId <= 60 && s.studentId >= 30) {
				 s.grade = 11;
				 tutionfees = 3500;

				 cout << "Tution fees of student in grade : " << s.grade << " is" << tutionfees << endl;

			 }

			 else if (s.studentId >= 60 && s.studentId <= 90) {
				 s.grade = 12;
				 tutionfees = 4000;

				 cout << "Tution fees of student in grade : " << s.grade << " is" << tutionfees << endl;

			 }
		 

		ofstream read;
		read.open("sourceFile.txt", fstream::app);
		read << "First Name: " << s.firstName << endl;
		read << "Last Name " << s.lastName << endl;

		read << "Student Id: " << s.studentId << endl;
		read << "Grade: " << s.grade << endl;
		read << "Tution fees of student is " << tutionfees << endl; 
		read.close();
	

	}

		
	double get_AverageMarks() {
		student s; 
		// s.set_data(); 

		int sum = 0;
		int Max_Marks = 300;


		cout << "Enter physics marks " << endl;
		cin >> s.marks[0];
		cout << "Enter chemistry marks " << endl;
		cin >> s.marks[1];
		cout << "Enter maths marks " << endl;
		cin >> s.marks[2];
		for (int i = 0; i <= 2; i++) {
			sum += s.marks[i];
		}


		cout << "The sum of marks of student is : " << endl;
		cout << sum << endl;

		// 40 + 40 + 40 = 120 120/3 =40 120 *100/150
		cout << "Maximum marks of student is " << Max_Marks << endl;
		s.percentage_Marks = sum * 100 / Max_Marks;


		cout << "The percentage of student is:" << s.percentage_Marks << "%";
		ofstream read;
		read.open("sourceFile.txt",fstream::app);
		read << s.percentage_Marks << endl;
		read.close();

		return s.percentage_Marks;



	}
	
	int Emailid() {
		
		string Email;

		cout << "Enter your email id " << endl;
		cin >> Email;
		if (!isalpha(Email[0])) {
			// if the first element of a string is not character then it will be invalid 
			// if email is not valid it will return 0 

			return 0;
		}
		int at = -1; 
		int dot = -1; 
		int i = 0;

		for (i = 0; i < Email.length();i++) {
			 

			if (Email[i] = '@') {
				at = i;
				return 1; 
			}
			else if (Email[i] = '.') {
				dot = i;
				return 1; 
			}
			
			if (at == -1 || dot == -1) {
				return 0;

			}
			if (dot > at) {
				return 0;
			}
		}
		

			}

};




	void main() {

		cout << "Welcome to the student management system :  " << endl;
		string userName; 
		string password;
		int n;
		cout << "Enter userName :"; 
		cin >> userName;
		cout << "Enter password : "; 
		cin >> password; 
		cout << "Type in for how many students you are looking data for" << endl;
		cin >> n;


		
		if (userName == "JigneshPatel" && password == "Jp12567")
		{
			int choice;
			cout << "1 : Press 1 if you are looking for a student's information " << endl;
			cout << "2 : Press 2 for verifying student's  contact info  " << endl;
			cout << "Press 3 to exit the program " << endl;
			cin >> choice;

			student s;
			int k;
			for (int i = 0; i < n; i++) {
				switch (choice) {
				case 1:
					s.set_data();
					s.get_AverageMarks();
					break;

				case 2:

					k = s.Emailid();
					if (k == 1) {
						cout << "Valid";
						break;
					}
					else {
						cout << "Invalid";
						break;
					}

				case 3:
					break;
				}

			}
		}

		else {
			cout << "Acess denied Try again "<<endl; 

		}

		}


	


		
	

