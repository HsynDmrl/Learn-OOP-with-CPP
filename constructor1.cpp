/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemirel <hdemirel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:58:14 by hdemirel          #+#    #+#             */
/*   Updated: 2024/08/12 16:06:25 by hdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Student
{
    public:
        Student()
        {
            std::cout << "Hello C++!" << std::endl;
        }
};

int main()
{
    Student student; // Object (this will call the constructor)

}