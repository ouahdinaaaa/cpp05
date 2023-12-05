/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:54:31 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/05 20:13:53 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : _name("ouahdina"), _grade(150)
{

} 

Bureaucrat::~Bureaucrat()
{
    
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooLowException();
    if (grade > 150)
        throw Bureaucrat::GradeTooHightException();
    else
        this->_grade = grade;
}

std::string Bureaucrat::getName()const
{
    return this->_name;
}

int    Bureaucrat::getGrade()const
{
    return this->_grade;
}

void    Bureaucrat::incrementGrade()
{
    if (this->_grade > 150)
        throw Bureaucrat::GradeTooHightException();
    else
        this->_grade--;
}

void    Bureaucrat::decrementGrade()
{
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& objs)
{
	o << objs.getName() << ", bureaucrat grade " << objs.getGrade();
	return o;
}

const char * Bureaucrat::GradeTooHightException::what() const throw()
{
    return ("Grade is too high for a Bureaucrat !!!");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low for a Bureaucrat !!!");
}