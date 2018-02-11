
#ifndef COURSE_H
#define COURSE_H

// put any includes here (such as #include <iostream>)

#include<iostream>
#include<string>

using namespace std;

class course
{
    public:
        // public member functions go here
        course (string dept, int number, int time);
        void print();
    private:
        // member variables go here
        // member function used only by other member functions go here
        string m_dept;
        int m_number;
        int m_time;

}; // don't forget this ;

#endif
