#include<iostream>
#include <vector>
#include "File.h"
#include "Student.h"
#include "User.h"
#include "Uni.h"
#include "Menu.h"
#include "AcademicStaff.h"
#include "Student.h"
#include "Uni.h"
using namespace std;

//   int main()
//   {
//       User user;
//       Uni uni;
//        vector<Course> course ;
//        vector<Student> student;
// //      AcademicStaff staff;
//       Menu menu;
//       user.login();
//       menu.displayMenu(&user);
// //      user.displayEncryptedPassword();
//       return 0;
//   }


// int main() {
//     Uni msa;
//     msa.addCollege();
//     msa.addCollege();
//     msa.addDepartment();
//     msa.addDepartment();
//     vector<string> collgs = msa.getColleges();
//     vector<string> departs = msa.getDeparments();
//     for(int i=0; i<collgs.size();i++) {
//         cout << collgs[i] << " / ";
//     }
//     for(int i=0; i<departs.size(); i++) {
//         cout << departs[i] <<" / ";
//     }
// }

// int main() {
//     Student ahmed;
//     Course c1;
//     ahmed.viewTranscript();
//     ahmed.enrollCourse(c1); //not working properly
//     ahmed.viewTranscript();
//     ahmed.updateGrade();
//     ahmed.viewTranscript();
//     c1.viewCourseDetails();
//     c1.listEnrolledStu();
//     c1.updateCredits();
//     c1.viewCourseDetails();
// }

// int main() {
//     vector<Course> courses;
//     Course c1;
//     Course c2;
//     courses.push_back(c1);
//     courses.push_back(c2);
//     courses[0].viewCourseDetails();
//     courses[1].viewCourseDetails();
//     vector<Student> students;
//     Student s1(courses);
//     Student s2(courses);
//     students.push_back(s1);
//     students.push_back(s2);
//     courses[0].viewCourseDetails();
//     courses[1].viewCourseDetails();
//     for (int s = 0 ; s< students.size();s++) {
//         students[s].viewTranscript();
//     }
//     courses[0].listEnrolledStu();
//     courses[1].listEnrolledStu();
//     File course;
//     string courseInfo = course.formatData(courses);
//     course.writeData(courseInfo);
//     string studentInfo = course.formatData(students);
//     course.writeData(studentInfo);
//     vector<string> courseData = course.readData();
//     // vector<string> studenntData = course.readData();
//     variant<vector<Course>, vector<Student>> n = course.parseData(courseData, courses);
//     if (holds_alternative<vector<Course>>(n)) {
//             vector<Course> newCourses = get<vector<Course>>(n);
//             for(int i =0; i < newCourses.size(); i++) {
//                 bool isNew = true;
//                 for(int j =0; j<courses.size(); j++) {
//                     if(newCourses[i].getCourseID() == courses[j].getCourseID()) {
//                         isNew = false;
//                         break;
//                     }
//                 }
//                 if (isNew) {
//                     courses.push_back(newCourses[i]);
//                 }
//             }
//             for (int k = 0; k< courses.size(); k++) {
//                 courses[k].viewCourseDetails();
//             }
//     } else {
//         cout << "\ncheck the if condition\n";
//             vector<Student> newStudents = get<vector<Student>>(n);
//             for(int i =0; i < newStudents.size(); i++) {
//                 bool isNew = true;
//                 for(int j =0; j<students.size(); j++) {
//                     if(newStudents[i].getID() == students[j].getID()) {
//                         isNew = false;
//                         break;
//                     }
//                 }
//                 if (isNew) {
//                     students.push_back(newStudents[i]);
//                 }
//             }
//             for (int s = 0 ; s< students.size();s++) {
//                 students[s].viewTranscript();
//             }
//
//     }
//
//
//     // courses.push_back(n);
//     // course.parseData<Student>(studenntData);
// }