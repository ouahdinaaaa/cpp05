/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:09:29 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/13 17:04:07 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : AForm("Robot", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(const std::string &name) : AForm(name, 72, 45), _name(name)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &objs) : AForm(objs), _name(objs._name)
{
    *this = objs;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &objs)
{
    this->_name = objs._name;
    return *this;
}

void    RobotomyRequestForm::Grade(const Bureaucrat &bureau) const
{
    this->execute(bureau);
    std::cout << ".............vroooooum vrouuuum vrouuum..............." << RESET << std::endl;
    if (rand() < RAND_MAX / 2)
        std::cout << ROSE << " Bruiiiiit de forage \n" << GREEN << this->_name << " A bien ete Robotise avec Succes !!! " << RESET << std::endl;
    else
        std::cout << RED << this->_name << " La Robotisation de cible a echouee !!!! " << RESET << std::endl;
}