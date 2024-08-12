/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   encapsulation.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemirel <hdemirel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:29:44 by hdemirel          #+#    #+#             */
/*   Updated: 2024/08/12 16:32:29 by hdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Student
{
    private:
        int age;
    public:
        void setAge(int a)
        {
            age = a;
        }
        int getAge()
        {
            return age;
        }
};

int main()
{
    Student student;
    student.setAge(15);
    std::cout << student.getAge();
}