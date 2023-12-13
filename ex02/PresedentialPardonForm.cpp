/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresedentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:59:56 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/13 11:52:59 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresedentialPardonForm.hpp"

PresedentialPardonForm::PresedentialPardonForm() : AForm("Jonh bendi", 25, 5), _name("ouahdina")
{

}

PresedentialPardonForm::PresedentialPardonForm(const std::string &name) : AForm(name, 25, 5), _name(name) 
{

}

PresedentialPardonForm::PresedentialPardonForm(const PresedentialPardonForm &objs) : AForm(objs), _name(objs._name)
{
    *this = objs;
}

PresedentialPardonForm &PresedentialPardonForm::operator=(const PresedentialPardonForm &objs)
{
    this->_name = objs._name;
    return (*this);
}

PresedentialPardonForm::~PresedentialPardonForm()
{
    
}

void    PresedentialPardonForm::Grade(const Bureaucrat &bureau) const
{
    this->execute(bureau);
    std::cout << CYAN << this->_name << " A ete gracie par Zaphod Beeblebrox !!!" << RESET << std::endl;
}
