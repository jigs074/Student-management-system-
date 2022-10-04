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
	 
	int grade; 

public: 

	void set_data() {
		 student s; 


		cout << "Enter the grade of a student you are looking for " << endl; 
		cin >> grade; 
		
		if (grade == 10) {
			 

			studentId = rand() % ((30 - 1)+1)  ; 
			cout << studentId << endl; 

		}
		if (grade == 11) {
			//int Grade_11id = 0; 
			studentId = rand() % ((60 - 31) + 31); 
			cout << studentId << endl; 

		}
		if (grade == 12) {
			//int Grade_12i = 0; 
			studentId = rand() % ((90 - 61) + 61); 
			cout << studentId << endl; 

		}
		if (grade != 10 && grade != 11 && grade != 12) {
			cout << "Invalid input , This program is only for high school students" << endl;

		}
		cout << "Student's first name :" << endl;
		cin >> firstName; 
		cout << "Student last name : " << endl; 
		cin >> lastName; 
		
	}
	// fees will increase to 5 % every year 
	// grade 10 will get student id  from 1 to 30
	// grade 11 will get student id from  31 to 60 
	// grade 12 student will be having id from 61 to 90
	// grade 10 tution fees - $ 3000 
	// grade 11 tution fees - $ 3500 
	// grade 12 tution fees- $ 4000 

	void  fees() {
		student s; 

		long int Tutionfees =0 ; 
		
		cout << "Fees Information for St Mary's high school :  " << endl; 
		if (s.studentId <= 30) {
			Tutionfees = 3000; 
			cout << "Fees for grade 10 is :  " << Tutionfees << endl; 

	   }
		if (s.studentId <= 60 || s.studentId >= 30) {
			Tutionfees = 3500; 
			cout << "Fees for grade 11 is :  " << Tutionfees << endl; 

		}
		if (s.studentId <= 90 || s.studentId >= 60) {
			Tutionfees = 4000; 
			cout << "Fees for grade 12 is : " << Tutionfees << endl; 

		}
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
	student s; 
	s.set_data(); 
	s.fees(); 



}