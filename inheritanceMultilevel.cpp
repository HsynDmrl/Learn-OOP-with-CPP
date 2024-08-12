/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inheritanceMultilevel.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemirel <hdemirel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:01:02 by hdemirel          #+#    #+#             */
/*   Updated: 2024/08/12 17:05:01 by hdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class MyClass // Parent Class
{
    public:
        void myFunction()
        {
            std::cout << "Coming from parent class.";
        }
};

class MyChild: public MyClass // Child Class
{
    
};

class MyGrandChild: public MyChild // GrandChild Class
{
    
};

int main()
{
    MyClass myObj;
    myObj.myFunction();
}