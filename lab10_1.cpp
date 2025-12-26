#include<iostream>
using namespace std;

int main(){
	char grade;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;
    int studentNum = 1;
    
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << studentNum << "]: ";
        cin >> grade; 
		
		if (grade == '0') {
            break;
        }
		
		if (grade == 'A' || grade == 'a') {
            countA++;
            studentNum++;
        } else if (grade == 'B' || grade == 'b') {
            countB++;
            studentNum++;
        } else if (grade == 'C' || grade == 'c') {
            countC++;
            studentNum++;
        } else if (grade == 'D' || grade == 'd') {
            countD++;
            studentNum++;
        } else if (grade == 'F' || grade == 'f') {
            countF++;
            studentNum++;
        } else {
            cout << "Wrong input. Please input again." << endl;
        }
	}while(true);
	
	int totalStudents = studentNum - 1;
	cout << "In total " << totalStudents << " students." << endl;
	cout << "A = " << countA << ", B = " << countB << ", C = " << countC 
         << ", D = " << countD << ", F = " << countF << endl;	
	
	return 0;
}
