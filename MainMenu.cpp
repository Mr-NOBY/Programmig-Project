//
// Created by Ahmed Essam on 5/16/2024.
//

#include "MainMenu.h"
#include <cstdlib>

vector<Student> MainMenu::students;
vector<Course> MainMenu::courses;
vector<AcademicStaff> MainMenu::acads;
User MainMenu::admin;
Uni MainMenu::uni;
File MainMenu::file;

MainMenu::MainMenu() {
    file = File();
    courses.emplace_back();
    courses.emplace_back();

}
void MainMenu::displayMenu() {
    cout << "\n MAIN MENU" << endl << "__________________________" <<
             endl << "Select Menu For:       " << endl <<
             "[1]\tADMIN" << endl <<
             "[2]\tACADEMIC STAFF" << endl <<
             "[3]\tSTUDENT" << endl <<
             "[4]\tNEW STUDENT" << endl <<
             "[5]\tNEW ACADEMIC STAFF" << endl <<
             "[6]\tEXIT" << endl;
    do {
        cin >> choice;
        cin.ignore();
        switch(choice) {
            case 1:
                uMenu();
            break;
            case 2:
                acMenu();
            break;
            case 3:
                sMenu();
            break;
            case 4:
                newStudent();
            break;
            case 5:
                newAcademicStuff();
            break;
            case 6:
                cout << "Exiting program. Goodbye!" << endl;
            exit(0);
            default:
                cout << "Enter a correct choice! \n" << endl;
            break;
        }
    } while (choice < 1 || choice > 6);
}

void MainMenu::studentIndex() {
    int temp_id;
    bool id_found = false;
    do {
        cout << "\nPlease enter your ID: ";
        cin >> temp_id;
        cin.ignore();
        for (int i=0; i<students.size(); i++) {
            if (temp_id == students[i].getID()) {
                index = i;
                id_found = true;
                break;
            }
        }
        if (!id_found) {
            cout << "The ID you entered is incorrect. Please try again.\n";
        }
    } while (!id_found);
}

void MainMenu::displaySMenu() {
    cout << "\nWelcome Back!" << endl;
cout << "__________________________" << endl;
cout << "Select Option:       " << endl;
cout << "[1]\tCHANGE PASSWORD" << endl;
cout << "[2]\tGET ID" << endl;
cout << "[3]\tGET NAME" << endl;
cout << "[4]\tGET EMAIL" << endl;
cout << "[5]\tGET NUMBER OF ENROLLED COURSES" << endl;
cout << "[6]\tCALCULATE GPA" << endl;
cout << "[7]\tUPDATE GRADE" << endl;
cout << "[8]\tENROLL COURSE" << endl;
cout << "[9]\tVIEW TRANSCRIPT" << endl;
cout << "[10]\tLOGOUT" << endl;
cout << "[11]\tEXIT" << endl;

string new_password = "new_password";
int choice;
do {
    cin >> choice;
    cin.ignore();
    switch(choice) {
        case 1:
            cout << "\nEnter the new Password: ";
            getline(cin, new_password);
            students[index].changePassword(new_password);
            displaySMenu();
            break;
        case 2:
            cout <<"\nID: " << students[index].getID() << endl;
            displaySMenu();
            break;
        case 3:
            cout <<"\nName: " << students[index].getName() << endl;
            displaySMenu();
            break;
        case 4:
            cout <<"\nEmail: "<< students[index].getEmail() << endl;
            displaySMenu();
            break;
        case 5:
            cout <<"\nNo. of Courses enrolled is "<< students[index].noOfEnrolledcourses() << endl;
            displaySMenu();
            break;
        case 6:
            cout <<"\nYour GPA is "<< students[index].calculateGPA() << endl;
            displaySMenu();
            break;
        case 7:
            students[index].updateGrade();
            displaySMenu();
            break;
        case 8:
            students[index].enrollCourse(courses, 1);
            displaySMenu();
            break;
        case 9:
            students[index].viewTranscript();
            displaySMenu();
            break;
        case 10:
            students[index].logout();
            displayMenu();
            break;
        case 11:
            cout << "Exiting program. Goodbye!" << endl;
        exit(0);
            break;
        default:
            cout << "Enter a correct choice! \n" << endl;
            break;
    }
} while (choice < 1 || choice > 11);
}

void MainMenu::sMenu() {
    studentIndex();
    students[index].login();
    displaySMenu();
}

void MainMenu::acadIndex() {
    string temp_id;
    bool id_found = false;
    do {
        cout << "\nPlease enter your ID: ";
        getline(cin, temp_id);
        cin.ignore();
        for (int i=0; i<acads.size(); i++) {
            if (temp_id == acads[i].getStaffID()) {
                index = i;
                id_found = true;
                break;
            }
        }
        if (!id_found) {
            cout << "The ID you entered is incorrect. Please try again.\n";
        }
    } while (!id_found);
}

void MainMenu::displayAMenu() {
    cout << "\nWelcome Back!" << endl;
    cout << "__________________________" << endl;
    cout << "Select Option:       " << endl;
    cout << "[1]\tCHANGE PASSWORD" << endl;
    cout << "[2]\tGET STAFF ID" << endl;
    cout << "[3]\tGET NAME" << endl;
    cout << "[4]\tGET DEPARTMENT" << endl;
    cout << "[5]\tGET COURSES TAUGHT" << endl;
    cout << "[6]\tTEACH COURSE" << endl;
    cout << "[7]\tGRADE ASSIGNMENT" << endl;
    cout << "[8]\tVIEW STUDENT LIST" << endl;
    cout << "[9]\tSCHEDULE OFFICE HOURS" << endl;
    cout << "[10]\tLOGOUT" << endl;
    cout << "[11]\tEXIT" << endl;

    string new_password = "new_password";
    int choice;
    do {
        cin >> choice;
        cin.ignore();
        switch(choice) {
            case 1: {
                cout << "\nEnter the new Password: ";
                getline(cin, new_password);
                acads[index].changePassword(new_password);
                displayAMenu();
                break;
            }
            case 2: {
                cout <<"\nStaff ID: " << acads[index].getStaffID() << endl;
                displayAMenu();
                break;
            }
            case 3: {
                cout <<"\nName: " << acads[index].getName() << endl;
                displayAMenu();
                break;
            }
            case 4: {
                cout <<"\nDepartment: "<< acads[index].getDepartment() << endl;
                displayAMenu();
                break;
            }
            case 5: {
                cout <<"\nCourses Taught: ";
                acads[index].getCoursesTaught();
                displayAMenu();
                break;
            }
            case 6: {
                acads[index].teachCourse(courses);
                displayAMenu();
                break;
            }
            case 7: {
                acads[index].gradeAssignment();
                displayAMenu();
                break;
            }
            case 8: {
                vector<int> studentList;
                vector<string> cTaught = acads[index].coursesTaught();
                for(int i =0; i < cTaught.size(); i++) {
                    for(int j =0; j<courses.size(); j++) {
                        if (cTaught[i] == courses[j].getCourseID()) {
                            vector<int> enrStudents = courses[j].getEnrolledStu();
                            for (int l = 0; l<enrStudents.size(); l++) {
                                bool previouslyAdded = false;
                                for (int k = 0; k<studentList.size(); k++) {
                                    if (studentList[k] == enrStudents[l]) {
                                        previouslyAdded = true;
                                        break;
                                    }
                                }
                                if (!previouslyAdded) {
                                    studentList.push_back(enrStudents[l]);
                                }
                            }
                        }
                    }
                }
                acads[index].viewStudentList(studentList);
                displayAMenu();
                break;
            }
            case 9: {
                string officeHours;
                cout << "\nEnter the office hours: ";
                getline(cin, officeHours);
                acads[index].scheduleOfficeHours(officeHours);
                displayAMenu();
                break;
            }
            case 10: {
                acads[index].logout();
                displayMenu();
                break;
            }
            case 11: {
                cout << "Exiting program. Goodbye!" << endl;
                exit(0);
                break;
            }
            default: {
                cout << "Enter a correct choice! \n" << endl;
                break;
            }
        }
    } while (choice < 1 || choice > 11);
}

void MainMenu::acMenu() {
    acadIndex();
    acads[index].login();
    displayAMenu();
}
void MainMenu::displayUMenu() {
    cout << "\nWelcome Back!" << endl;
    cout << "__________________________" << endl;
    cout << "Select Option:       " << endl;
    cout << "[1]\tCHANGE PASSWORD" << endl;
    cout << "[2]\tADD COLLEGE" << endl;
    cout << "[3]\tADD DEPARTMENT" << endl;
    cout << "[4]\tGET COLLEGE" << endl;
    cout << "[5]\tGET DEPARTMENT" << endl;
    cout << "[6]\tREAD COURSES FROM FILE" << endl;
    cout << "[7]\tWRITE COURSES TO FILE" << endl;
    cout << "[8]\tREAD STUDENTS FROM FILE" << endl;
    cout << "[9]\tWRITE STUDENTS TO FILE" << endl;
    cout << "[10]\tCOURSE MANAGER" << endl;
    cout << "[11]\tADD COURSE" << endl;
    cout << "[12]\tLOGOUT" << endl;
    cout << "[13]\tEXIT" << endl;

    string new_password;
    do {
        cin >> choice;
        cin.ignore();
        switch(choice) {
            case 1: {
                cout << "\nEnter the new Password: ";
                getline(cin, new_password);
                admin.changePassword(new_password);
                displayUMenu();
                break;
            }
            case 2: {
                uni.addCollege();
                displayUMenu();
                break;
            }
            case 3: {
                uni.addDepartment();
                displayUMenu();
                break;
            }
            case 4: {
                uni.getColleges();
                displayUMenu();
                break;
            }
            case 5: {
                uni.getDeparments();
                displayUMenu();
                break;
            }
            case 6: {
                vector<string> courseFile = file.readData();
                variant<vector<Course>, vector<Student>> n = file.parseData(courseFile, courses);
                if (holds_alternative<vector<Course>>(n)) {
                        vector<Course> newCourses = get<vector<Course>>(n);
                        for(int i =0; i < newCourses.size(); i++) {
                            bool isNew = true;
                            for(int j =0; j<courses.size(); j++) {
                                if(newCourses[i].getCourseID() == courses[j].getCourseID()) {
                                    isNew = false;
                                    break;
                                }
                            }
                            if (isNew) {
                                courses.push_back(newCourses[i]);
                            }
                        }
                        for (int k = 0; k< courses.size(); k++) {
                            courses[k].viewCourseDetails();
                        }
                } else {
                    cout << "\ncheck the if condition\n";
                        vector<Student> newStudents = get<vector<Student>>(n);
                        for(int i =0; i < newStudents.size(); i++) {
                            bool isNew = true;
                            for(int j =0; j<students.size(); j++) {
                                if(newStudents[i].getID() == students[j].getID()) {
                                    isNew = false;
                                    break;
                                }
                            }
                            if (isNew) {
                                students.push_back(newStudents[i]);
                            }
                        }
                        for (int s = 0 ; s< students.size();s++) {
                            students[s].viewTranscript();
                        }

                }
                displayUMenu();
                break;
            }
            case 7: {
                string courseData = file.formatData(courses);
                file.writeData(courseData);
                displayUMenu();
                break;
            }
            case 8: {
                vector<string> studentFile = file.readData();
                variant<vector<Course>, vector<Student>> n = file.parseData(studentFile, courses);
                if (holds_alternative<vector<Course>>(n)) {
                        vector<Course> newCourses = get<vector<Course>>(n);
                        for(int i =0; i < newCourses.size(); i++) {
                            bool isNew = true;
                            for(int j =0; j<courses.size(); j++) {
                                if(newCourses[i].getCourseID() == courses[j].getCourseID()) {
                                    isNew = false;
                                    break;
                                }
                            }
                            if (isNew) {
                                courses.push_back(newCourses[i]);
                            }
                        }
                        for (int k = 0; k< courses.size(); k++) {
                            courses[k].viewCourseDetails();
                        }
                } else {
                    // cout << "\ncheck the if condition\n";
                        vector<Student> newStudents = get<vector<Student>>(n);
                        for(int i =0; i < newStudents.size(); i++) {
                            bool isNew = true;
                            for(int j =0; j<students.size(); j++) {
                                if(newStudents[i].getID() == students[j].getID()) {
                                    isNew = false;
                                    break;
                                }
                            }
                            if (isNew) {
                                students.push_back(newStudents[i]);
                            }
                        }
                        for (int s = 0 ; s< students.size();s++) {
                            students[s].viewTranscript();
                        }

                }
                displayUMenu();
                break;
            }
            case 9: {
                string studentData = file.formatData(students);
                file.writeData(studentData);
                displayUMenu();
                break;
            }
            case 10: {
                cMenu();
                displayUMenu();
                break;
            }
            case 11: {
                courses.emplace_back();
                displayUMenu();
                break;
            }
            case 12: {
                admin.logout();
                displayMenu();
                break;
            }
            case 13: {
                cout << "Exiting program. Goodbye!" << endl;
                exit(0);
                break;
            }
            default: {
                cout << "Enter a correct choice! \n" << endl;
                break;
            }
        }
    } while (choice < 1 || choice > 13);
}

void MainMenu::cIndex() {
    string temp_id;
    bool id_found = false;
    do {
        cout << "\nPlease enter Course ID: ";
        getline(cin, temp_id);
        cin.ignore();
        for (int i=0; i<courses.size(); i++) {
            if (temp_id == courses[i].getCourseID()) {
                courseIndex = i;
                id_found = true;
                break;
            }
        }
        if (!id_found) {
            cout << "The ID you entered is incorrect. Please try again.\n";
        }
    } while (!id_found);
}

void MainMenu::displayCMenu() {
    cout << "\nWelcome Back!" << endl;
    cout << "__________________________" << endl;
    cout << "Select Option:       " << endl;
    cout << "[1]\tGET COURSE ID" << endl;
    cout << "[2]\tGET COURSE NAME" << endl;
    cout << "[3]\tGET COURSE DEPARTMENT" << endl;
    cout << "[4]\tGET CREDIT HOURS" << endl;
    cout << "[5]\tUPDATE CREDITS" << endl;
    cout << "[6]\tVIEW COURSE DETAILS" << endl;
    cout << "[7]\tLIST ENROLLED STUDENTS" << endl;
    cout << "[8]\tENROLL STUDENT" << endl;
    cout << "[9]\tBACK" << endl;
    cout << "[10]\tEXIT" << endl;

    int choice;
    do {
        cin >> choice;
        cin.ignore();
        switch(choice) {
            case 1: {
                cout <<"\nCourse ID: " << courses[courseIndex].getCourseID() << endl;
                displayCMenu();
                break;
            }
            case 2: {
                cout <<"\nCourse Name: " << courses[courseIndex].getCourseName() << endl;
                displayCMenu();
                break;
            }
            case 3: {
                cout <<"\nCourse Department: "<< courses[courseIndex].getCourseDepartment() << endl;
                displayCMenu();
                break;
            }
            case 4: {
                cout <<"\nCredit Hours: "<< courses[courseIndex].getCredHours() << endl;
                displayCMenu();
                break;
            }
            case 5: {
                courses[courseIndex].updateCredits();
                displayCMenu();
                break;
            }
            case 6: {
                courses[courseIndex].viewCourseDetails();
                displayCMenu();
                break;
            }
            case 7: {
                courses[courseIndex].listEnrolledStu();
                displayCMenu();
                break;
            }
            case 8: {
                int studentId;
                cout << "\nEnter the student ID to enroll: ";
                cin >> studentId;
                cin.ignore();
                courses[courseIndex].enrollStudent(studentId);
                displayCMenu();
                break;
            }
            case 9: {
                displayUMenu();
                break;
            }
            case 10: {
                cout << "Exiting program. Goodbye!" << endl;
                exit(0);
                break;
            }
            default: {
                cout << "Enter a correct choice! \n" << endl;
                break;
            }
        }
    } while (choice < 1 || choice > 10);
}

void MainMenu::cMenu() {
    cIndex();
    displayCMenu();
}

void MainMenu::uMenu() {
    admin.login();
    displayUMenu();
}

void MainMenu::newStudent() {
    students.emplace_back(courses);
    displayMenu();
}

void MainMenu::newAcademicStuff() {
    acads.emplace_back();
    displayMenu();
}

void MainMenu::clearScreen() {
#ifdef WINDOWS
    std::system("cls");
#else
    std::system("cls");
#endif
}