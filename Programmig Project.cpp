#include<iostream>
#include "Student.h"
#include "User.h"
#include "Uni.h"
#include "Menu.h"
using namespace std;

 int main()
 {
     User user;
     Menu menu;
     user.login();
     menu.displayMenu(&user);

     return 0;
 }


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
//  Course courses[2];
//  courses[0].viewCourseDetails();
//  courses[1].viewCourseDetails();
//  Student a(courses, 2);
//  courses[0].viewCourseDetails();
//  courses[1].viewCourseDetails();
//  a.viewTranscript();
// }