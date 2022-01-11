#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        Student(string firstName, string lastName, int id, vector<int> testScores) : Person(firstName, lastName, id){
            this->testScores = testScores;
        }
        char calculate(){
            double average;
            int sum = 0;
            for(int i = 0; i < testScores.size(); i++){
                sum += testScores[i];
            }
            average = (double)(sum / testScores.size());
            if(90 <= average) return 'O';
            else if(80 <= average) return 'E';
            else if(70 <= average) return 'A';
            else if(55 <= average) return 'P';
            else if(40 <= average) return 'D';
            else return 'T';
        }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}