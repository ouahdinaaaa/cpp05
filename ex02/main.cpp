/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:55:11 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/09 23:36:00 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main(void)
{
    Bureaucrat jonh("jonh", 5);
    std::cout << jonh << std::endl;
    
    try
    {
        jonh.incrementGrade();
        jonh.incrementGrade();
        std::cout << jonh << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    Form Solo("solo");
    Form aya("aya", 3, 3);
    Form benin("benin", 2, 20);
    
    std::cout << jonh << std::endl;
    std::cout << Solo << std::endl;
    std::cout << aya << std::endl;
    std::cout << benin << std::endl;
    jonh.signForm(&Solo);
    jonh.signForm(&aya);
    jonh.signForm(&benin);
    
    try
    {
        jonh.decrementGrade();
        std::cout << jonh << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    jonh.signForm(&aya);
    std::cout << Solo << std::endl;
    std::cout << aya << std::endl;
    std::cout << benin << std::endl;
}