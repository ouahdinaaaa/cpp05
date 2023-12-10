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

Intern::Intern()
{

}

Intern::~Intern()
{

}

const char* Intern::InvalidForm::what() const throw()
[
    return ("Invalid Form for type !!!");
]

Form *makeForm(const std::string &bureau, const std::string &name) const
{
    Form* stag = NULL;
    std::string name[3] = {
        "shruberry", "robot", "presidential";
    }
    int i = 0;
    while (i < 3 && name[i] != name)
        i++;
    switch (i)
    {
    case 0
        tmp = new ShruberryCreationForm(name);
        break;
    case 1
        tmp = new RobotomyRequestForm(name);
        break;
    case 2
        tmp = new PresedentialPardonForm(name);
        break;
    default:
        break;//appel exception pour form invalide puis try \catch vers ou cets appelee
    }
    std::cout << "Le stagiaire créer : " << name << std::endl;
    return (stag);
}