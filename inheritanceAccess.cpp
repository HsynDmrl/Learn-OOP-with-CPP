/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inheritanceAccess.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemirel <hdemirel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:13:00 by hdemirel          #+#    #+#             */
/*   Updated: 2024/08/12 17:18:31 by hdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Person
{
    protected:
        int salary;
};

class Programmer: public Person
{
    public:
        int bonus;
        void setSalary(int s){
            salary = s;
        }
        int getSalary(){
            return salary;
        }
};

int main()
{
    Programmer programmer;

    programmer.setSalary(40000);
    programmer.bonus = 10000;

    std::cout << "Salary: " << programmer.getSalary() << ' ' << "Bonus: " << programmer.bonus;
}