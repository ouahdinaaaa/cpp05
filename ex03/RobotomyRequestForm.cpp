/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:09:29 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/11 20:26:58 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : Form("Robot", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(const std::string &name) : Form(name, 72, 45), _name(name)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

void    RobotomyRequestForm::Grade(const Bureaucrat &bureau) const
{
    this->Form::execute(bureau);
    std::cout << ".............vroooooum vrouuuum vrouuum...............\n" << std::endl;
    if (rand() < RAND_MAX / 2)
        std::cout << ORANGE << "Bruiiiiit de forage \n" << GREEN << this->_name << " A bien ete Robotise avec Succes !!! \n" << std::endl;
    else
        std::cout << RED << this->_name << "\033[31m La Robotisation de cible a echouee !!!! \033[1;97m \n" << std::endl;
}