#include<iostream>
#include<string>

#include "course.h"

using namespace std;

int main(){
    
    course programming("CSCI", 211 , 1000);
    course english("ENGL", 130, 1400);
    course physics("PHYS", 204, 800);
    programming.print();
    english.print();
    physics.print();

}
