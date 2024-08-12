/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classMethod.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdemirel <hdemirel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:46:47 by hdemirel          #+#    #+#             */
/*   Updated: 2024/08/12 15:50:03 by hdemirel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class MyClass // Class
{
    public:
        void myMethod()  //Method/Function
        {
            std::cout << "Hello C++!" << std::endl;
        }
};

int main()
{
    MyClass myObj; // Object
    
    myObj.myMethod(); // Call Method/Function

    return 0;
}