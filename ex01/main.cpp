/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:55:11 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/13 16:21:54 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    Bureaucrat jonh("👱 jonh", 6);
    std::cout << BLUE << jonh << RESET << std::endl;
    
    try
    {
        jonh.incrementGrade();
        jonh.incrementGrade();
        std::cout << BLUE << jonh << RESET << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << "*---------------------------------------------------------------------------*" << std::endl;
    Form Solo("Soloo", 1, 1);
    Form aya("Ayaaa", 5, 1);
    Form benin("benin", 3, 3);
    
    std::cout << BLUE << jonh << RESET << std::endl;
    std::cout << MAGENTA << Solo << RESET << std::endl;
    std::cout << ORANGE << aya << RESET << std::endl;
    std::cout << ROSE << benin << RESET << std::endl;
    std::cout <<  "*---------------------------------------------------------------------------*" << std::endl;
    jonh.signForm(&Solo);
    jonh.signForm(&aya);
    jonh.signForm(&benin);
    std::cout << "*---------------------------------------------------------------------------*" << std::endl;
    try
    {
        jonh.decrementGrade();
        jonh.decrementGrade();
        jonh.decrementGrade();
        std::cout << BLUE << jonh << RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << MAGENTA << Solo << RESET << std::endl;
    std::cout << ORANGE << aya << RESET << std::endl;
    std::cout << ROSE << benin << RESET << std::endl;
    std::cout << "*------------------------------------------------------------------------------*" << std::endl;
}