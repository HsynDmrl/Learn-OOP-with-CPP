/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classMethod3.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemirel <hdemirel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:54:26 by hdemirel          #+#    #+#             */
/*   Updated: 2024/08/12 15:56:40 by hdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Student
{
    public:
        int age(int maxAge);
};

int Student::age(int maxAge){
    return maxAge;
}

int main()
{
    Student student;

    std::cout << student.age(20);
    
    return 0;
}