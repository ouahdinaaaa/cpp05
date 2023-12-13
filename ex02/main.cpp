/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:55:11 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/13 17:01:57 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

#include "ShruberryCreationForm.hpp"
#include "PresedentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    srand(time(NULL));
    Bureaucrat jonh("👱 jonh", 5);
    Bureaucrat jim("👱 jim", 3);
    Bureaucrat Lam("👱 Lam");

    RobotomyRequestForm Robot("🤖 Pluto");
    PresedentialPardonForm  Pres(" Prez");
    ShruberryCreationForm   home("🌳 home");
    
    std::cout << GREEN << jonh << RESET << std::endl;
    std::cout << MAGENTA << jim << RESET << std::endl;
    std::cout << ROSE << Lam << RESET << std::endl;
    std::cout << "*-------------------------------------------------------------------*" << std::endl;
    jonh.executeForm(Robot);
    jim.executeForm(Robot);
    Lam.executeForm(Robot);
    std::cout << "*-------------------------------------------------------------------*" << std::endl;
    jonh.signForm(Robot);
    jim.signForm(Robot);
    Lam.signForm(Robot);
    std::cout << "*-------------------------------------------------------------------*" << std::endl;
    jonh.executeForm(Robot);
    jim.executeForm(Robot);
    Lam.executeForm(Robot);

    std::cout << "\n\n*----------------------------NEXT PART ------------------------------*\n\n" << std::endl;
    std::cout << GREEN << jonh << RESET << std::endl;
    std::cout << MAGENTA << jim << RESET << std::endl;
    std::cout << ROSE << Lam << RESET << std::endl;
    std::cout << "*-------------------------------------------------------------------*" << std::endl;
    
    jonh.executeForm(Pres);
    jim.executeForm(Pres);
    Lam.executeForm(Pres);
    std::cout << "*-------------------------------------------------------------------*" << std::endl;
    jonh.signForm(Pres);
    jim.signForm(Pres);
    Lam.signForm(Pres);
    std::cout << "*\n-------------------------------------------------------------------*" << std::endl;
    jonh.executeForm(Pres);
    jim.executeForm(Pres);
    Lam.executeForm(Pres);
    std::cout << "*\n-------------------------------------------------------------------*" << std::endl;
    std::cout << "\n\n*----------------------------NEXT PART ------------------------------*\n\n" << std::endl;

    jonh.executeForm(home);
    jim.executeForm(home);
    Lam.executeForm(home);
    std::cout << "*-------------------------------------------------------------------*" << std::endl;
    jonh.signForm(home);
    jim.signForm(home);
    Lam.signForm(home);
    std::cout << "*-------------------------------------------------------------------*" << std::endl;
    jonh.executeForm(home);
    jim.executeForm(home);
    Lam.executeForm(home);
    std::cout << "*-------------------------------------------------------------------*" << std::endl;

    // faire bureaucrat puis chacun faire une action
}


// try sur execute
// creer plusieurs bureaucrate
// creer chaque classe pour tester

/* ShruberryCreation : "home"
    
    Pressiend : "wilson"

    Robotomy : "pluto"

    faire des test en mode 
    execute 
    "pas signee donc pas possible msg derreur"
    puis faire signe bureaucrate
    refaire un execute
*/