//
//  Person.hpp
//  123
//
//  Created by Khaled  Nana  on 09/10/2022.
//

#ifndef Person_hpp
#define Person_hpp
#include <iostream>
#include <string>
#include <queue>
#define array 20
using namespace std;
#include <stdio.h>
using namespace std;
class Person{
protected:
    string Name;
    int ID;
    int Age;
public:
    Person(){};
    
    void SetName(string name);
    
    string GetName();
    
    void SetID(int id);
    
    int GetID();
    
    void SetAge(int age);
    
    int GetAge();
    
    void print();
};

#endif /* Person_hpp */
