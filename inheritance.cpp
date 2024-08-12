/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inheritance.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemirel <hdemirel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:49:41 by hdemirel          #+#    #+#             */
/*   Updated: 2024/08/12 16:57:16 by hdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Person  //Base Class  
{
    public:
        std::string name; 
};

class Student: public Person // Derived Class
{
    public:
        std::string surname;
};

int main()
{
    Student student;

    student.name = "Ali";
    student.surname = "Can";

    std::cout << student.name + ' ' + student.surname;
}