#include <iostream>
using namespace std;

class student
{
public:
	string name;
	double score1; 
	double score2;
	double training_point;

	void setName(string studentName);
	void setScore(double s1, double s2);
	void setTrainingpoint(double tp);
	double getAveragescore(void);
	char Scholarship(void);
};


 
void student::setName(string studentName)
{
	name = studentName;
}	

void student::setScore(double s1, double s2)
{
	score1 = s1;
	score2 = s2;
}

void student::setTrainingpoint(double tp)
{
	training_point = tp;
}

double student::getAveragescore(void)
{
	double avg;
	avg = (score1 + score2) / 2.0;

	return avg;
}

char student::Scholarship(void) {
	char schor[1];
	if (getAveragescore() > 9.0 && training_point > 80) {
		schor[0] = 'y';
		return schor[0];
	}
	else
		return 0;
}

int main(void)
{
	student s1;
	student s2; 
	int i;

	s1.setName("Junha");
	s1.setScore(7.0, 10.0);
	s1.setTrainingpoint(90);

	s2.setName("Theo");
	s2.setScore(9.0, 10.0);
	s2.setTrainingpoint(85);

	cout << s1.name << " has a average score : " << s1.getAveragescore() << endl;
	cout << s1.name << " has a training point : " << s1.training_point << endl;
	cout << "The student ";
	if (s1.Scholarship() == 'y')
		cout << "has";
	else
		cout << "hasn't";
	cout << " a scolarship." << endl << endl;

	cout << s2.name << " has a average score : " << s2.getAveragescore() << endl;
	cout << s2.name << " has a training point : " << s2.training_point << endl;
	cout << "The student ";
	if (s2.Scholarship() == 'y')
		cout << "has";
	else
		cout << "hasn't";
	cout << " a scolarship." << endl << endl;

}
