/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemirel <hdemirel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:50:53 by hdemirel          #+#    #+#             */
/*   Updated: 2024/08/12 15:45:35 by hdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// C++ Classes/Objects

class Student  // Class
{
    public:
        std::string name;
        int age;
};

int main()
{
    Student student; // Object

    student.name = "Ali";
    student.age = 15;
    
    std::cout << student.name << std::endl;
    std::cout << student.age;
}