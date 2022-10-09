//
//  Person.cpp
//  123
//
//  Created by Khaled  Nana  on 09/10/2022.
//
#include <iostream>
#include <string>
#include <queue>
#define array 20
#include "Person.hpp"

    void Person::SetName(string name)
    {
        Name=name;
    };
    
    string Person::GetName()
    {
        return  Name;
    };
    
    void Person::SetID(int id)
    {
        ID=id;
    };
    
    int Person::GetID()
    {
        return ID;
    };
    
    void Person::SetAge(int age)
    {
        Age=age;
    };
    
    int Person::GetAge()
    {
        return Age;
    };
    
    void Person::print()
    {
        cout<<"Name: "<<Name<<endl<<"Age: "<<Age<<endl<<"ID: "<<ID<<endl;
    };





