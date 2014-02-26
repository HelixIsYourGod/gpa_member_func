#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include "gradeValue.h"
#include "gradeValue.cpp"

class Student
{
public:
    struct Student {
        string name;
        int credits;
        double qualityPoints;
        Student(){
        name = "";
        credits = 0;
        qualityPoints = 0;
        }
    //const GradeValue gradeValues;
    //functions
    //std::string student(std::string name,int credits, double qp);
    void addGrade(std::string grade, int credits);
    double computeGPA();

};




#endif // STUDENT_H_INCLUDED
//*std::string student(std::string name, int credits, double qp);
//void addGrade(struct Student& , std::string grade, int credits);
//double computeGPA (struct Student&);

//#endif // STUDENT_H_INCLUDED

