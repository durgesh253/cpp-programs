#include <iostream>
#include <string>

using namespace std;

// Class to represent lecture details
class Lecture {
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int numLectures;

public:
    // Constructor to initialize lecture details
    Lecture(string lecturer, string subject, string course, int num) {
        lecturerName = lecturer;
        subjectName = subject;
        courseName = course;
        numLectures = num;
    }

    // Function to add lecture details
    void addLecture(string lecturer, string subject, string course, int num) {
        lecturerName = lecturer;
        subjectName = subject;
        courseName = course;
        numLectures = num;
    }

    // Function to display lecturer name and lecture details
    void displayDetails() {
        cout << "Lecturer Name: " << lecturerName << endl;
        cout << "Subject Name: " << subjectName << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Number of Lectures: " << numLectures << endl;
    }
};

int main() {
    // Create objects for 5 lecturers
    Lecture lecturer1("Srikant chavan", "Mathematics", "Math101", 20);
    Lecture lecturer2("Smita pandya", "Physics", "Phys101", 18);
    Lecture lecturer3("sachin gaikwad", "Chemistry", "Chem101", 22);
    Lecture lecturer4("ashwini more", "Biology", "Bio101", 16);
    Lecture lecturer5("devendr mhatre", "History", "Hist101", 15);

    // Display lecture details
    cout << "Lecturer 1 Details:" << endl;
    lecturer1.displayDetails();
    cout << endl;

    cout << "Lecturer 2 Details:" << endl;
    lecturer2.displayDetails();
    cout << endl;

    cout << "Lecturer 3 Details:" << endl;
    lecturer3.displayDetails();
    cout << endl;

    cout << "Lecturer 4 Details:" << endl;
    lecturer4.displayDetails();
    cout << endl;

    cout << "Lecturer 5 Details:" << endl;
    lecturer5.displayDetails();

    return 0;
}
