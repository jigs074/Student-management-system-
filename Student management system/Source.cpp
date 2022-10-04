#include <iostream>
using namespace std;
// Jignesh Patel : project - "Student Management system "


/* student records - sid , first name , last name , program they are enrolled in  
* inherited class marks 
* report card 
* */
class student {
	string firstName; 
	string lastName; 
	int studentId; 
	long int ProgramCode; 

public: 

	void set_data() {
		cout << "Student's first name :" << endl;
		cin >> firstName; 
		cout << "Student last name : " << endl; 
		cin >> lastName; 
		cout << "Student Id :" << endl;
		cin >> studentId; 
		cout << "Program code : "; 
          cin >> ProgramCode; 
	}
};
class Academics : public  student {
	// after getting marks of student program should be able to calculate the average percentage 
	// of student and we can also find out which student has highest percentage 
	int marks [3];
	// string subject[3] = { "physics" ,"Chemistry", "Maths " };
	
	double percentage_Marks; 
public : 

	Academics() {

	}
	double get_AverageMarks() {
		int sum = 0;
		int Max_Marks = 300;


		cout << "Enter physics marks " << endl;
		cin >> marks[0];
		cout << "Enter chemistry marks " << endl;
		cin >> marks[1];
		cout << "Enter maths marks " << endl;
		cin >> marks[2];
		for (int i = 0; i <=2; i++){
			sum += marks[i];
	}

		
		cout << "The sum of marks of student is : " << endl; 
		cout << sum << endl; 

		// 40 + 40 + 40 = 120 120/3 =40 120 *100/150
		cout << "Maximum marks of student is " << Max_Marks << endl; 
		 percentage_Marks = sum * 100 / Max_Marks; 
		

		 cout << "The percentage of student is:" << percentage_Marks<<"%";


		 return percentage_Marks; 


		
	}

};

void main() {
	//student s; 
	Academics a;
	// a.set_data(); 
	a.get_AverageMarks(); 



}