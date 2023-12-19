#include<iostream>
using namespace std;

int number = 1;
char grade;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << number << "]: ";
		cin >> grade; 
		
		if(grade == '0') {
		    break;
		} //The loop must be terminated when grade = '0'
		
		if(grade == 'A'){ // if grade is A
		    count[0] += 1;  
			number++;
		}else if(grade == 'B'){
		    count[1] += 1;
			number++;
		}else if(grade == 'C'){
		    count[2] += 1;
			number++;
		}else if(grade == 'D'){
		    count[3] += 1;
			number++;
		}else if(grade == 'F'){
		    count[4] += 1;
			number++;
		}else{ // grade is wrong input
			cout << "Wrong input. Please input again.\n";
            grade = ' ';
		}
	}while(grade != '0');
	
	
	cout << "In total " << number-1 << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];	
	
	return 0;
}
