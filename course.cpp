#include "course.h"

#include<iostream>
#include<string>

using namespace std;

course::course (string dept, int number, int time){
    
    m_dept = dept;
    m_number = number;
    m_time = time;

}

void course::print(){
    
    cout << m_dept << " " << m_number << " at " << m_time << endl;

}
