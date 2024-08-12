/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classMethod2.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemirel <hdemirel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:51:25 by hdemirel          #+#    #+#             */
/*   Updated: 2024/08/12 15:54:04 by hdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class MyClass // Class
{
    public:
        void myMethod(); //Method/function declaration
};

void MyClass::myMethod() // Method/function definition outside the class
{
    std::cout << "Hello C++!" << std::endl;
}

int main()
{
    MyClass myObj; // Object
    
    myObj.myMethod(); // Call Method/Function

    return 0;
}