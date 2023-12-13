/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:34:46 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/10 23:34:46 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}

const char* Intern::InvalidForm::what() const throw()
{
    return (" Intern cannot creates beacause Form is not valid ");
}

Form* Intern::makeForm(const std::string &bureau, const std::string &name)
{
    Form* stag = NULL;
    std::string _name[3] = {
    "shruberry request", 
    "robotomy request",
    "presidential request"
    };

    int i = 0;
    while (i < 3 && _name[i] != bureau)
        i++;
    try
    {
        switch (i)
        {
        case 0:
            stag = new ShruberryCreationForm(name);
            break;
        case 1:
            stag = new RobotomyRequestForm(name);
            break;
        case 2:
            stag = new PresedentialPardonForm(name);
            break;
        default:
            throw Intern::InvalidForm();
        }
        std::cout << GREEN << "Le stagiaire a crée : " << name << RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << name << e.what() << RESET <<  '\n';
    }
    return (stag);
}