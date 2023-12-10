/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:09:29 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/09 23:19:46 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : AForm("Robot", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(const std::string &name) : AForm(name, 72, 45), _name(name)
{
    // on a nb dnas struct   
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

void    RobotomyRequestForm::Robotomy(const Bureaucrat &bureau) const
{
    this->Form::execute(bureau);
    if (this->nb >= 0.5)
        std::cout << "Bruiiiiit de forage \n" << this->_name << " A bien ete Robotise avec Succes !!! " << std::endl;
    else
        std::cout << this->_name << "La Robotisation de cible a echouee !!!! " << std::endl;
}