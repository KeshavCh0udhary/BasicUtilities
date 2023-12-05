#include<iostream>
/*
class FileHandling {
	public:
		void writeInFile(const char* file_name, const char* data) {
			std::ofstream fout;
			fout.open(file_name,std::ios::app);
			fout << data << "\n";
			fout.close();
	    }

		void readInFile(const char* file_name) {
			std::ifstream fin;
			fin.open(file_name, std::ios::in);
			char data;
			if (fin.is_open()) {
				
				while(!fin.eof()) {
					fin >> data;
					std::cout << data;
				}
			}
			else {
				std::cout << "Error in file opning";
			}

			fin.close();
		}
};
*/
class InvalidInputException : public std::exception {
public:
    explicit InvalidInputException(const char* m) : message(m) {}

    const char* what() const noexcept override {
        return message;
    }

private:
    const char* message;
};

class Student {
	int roll;
	std::string name;
public:

	static int numberOfStudent;
	Student() {
		 roll=0;
		 name="";
	}
	Student(std::string name) {
		this->name = name;
		numberOfStudent++;
		roll = numberOfStudent;
	}

	void printDetails() {
		std::cout <<"Name of the student is : " << name<<"\nRoll number : "<<roll<<"\n";
	}
};

int Student::numberOfStudent = 0;

int main() {
	/*std::cout << "Krishna keshav";
	FileHandling f;
	f.writeInFile("file.txt", "and added this line by appending in it");
	f.readInFile("file.txt");
	*/
	
	Student CSE[10];
	std::string name;
	for(int i = 0; i < 10; i++) {
		std::cout << "Enter the name of student\n";
		std::cin >> name;
		CSE[i] = Student(name);
	}
    
    try{
       
       int n;
       while(1){
          std::cout<<"Enter the number of students to get details\n";
          std::cin>>n;
          if(n<=0 || n>10){
            throw InvalidInputException("Roll number is not valid\n");
          }
          CSE[n-1].printDetails();
       }
    }catch (const InvalidInputException& e) {
       std::cerr << "Invalid input: " << e.what() << std::endl;
    }

}