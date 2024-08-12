/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor3.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemirel <hdemirel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:13:01 by hdemirel          #+#    #+#             */
/*   Updated: 2024/08/12 16:14:12 by hdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Student                   // The class
{
    public:                     // Access specifier
        std::string name;       // Attribute
        std::string surname;    // Attribute
        int age;                // Attribute
        Student(std::string n, std::string s, int a); // Constructor declaration
        
};

// Constructor definition outside the class
Student::Student(std::string n, std::string s, int a)
{
    name = n;
    surname = s;
    age = a;
}

int main()
{
    Student student("Ali", "Can", 15); // Object and call the constructor with different values

    std::cout << student.name << " " << student.surname << " " << student.age; 
}
