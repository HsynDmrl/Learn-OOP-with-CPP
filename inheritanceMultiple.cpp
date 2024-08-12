/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inheritanceMultiple.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemirel <hdemirel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:06:28 by hdemirel          #+#    #+#             */
/*   Updated: 2024/08/12 17:10:33 by hdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class MyClass // Base Class
{
    public:
        void myFunction()
        {
            std::cout << "Coming from Parent Class" << std::endl;
        }
};

class MyAnotherClass // Another Base Class
{
    public:
        void myAnotherFunction()
        {
            std::cout << "Coming from Another Class" << std::endl;
        }
};

class MyChildClass: public MyClass, public MyAnotherClass
{
    
};

int main()
{
    MyChildClass myObj;

    myObj.myFunction();
    myObj.myAnotherFunction();

    return 0;
}