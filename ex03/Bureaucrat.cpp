/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:54:31 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/12 23:56:02 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : _name("ouahdina"), _grade(150)
{

} 

Bureaucrat::Bureaucrat(const std::string &name) : _name(name), _grade(150)
{

} 

Bureaucrat::Bureaucrat(const Bureaucrat &objs)
{
    *this = objs;
}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &objs)
{
    this->_grade = objs._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
    try
    {
        if (grade < 1)
            throw Bureaucrat::GradeTooLowException();
        if (grade > 150)
            throw Bureaucrat::GradeTooHightException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
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
    if (this->_grade <= 1)
        throw Bureaucrat::GradeTooHightException();
    else
        this->_grade--;
}

void    Bureaucrat::decrementGrade()
{
    if (this->_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
}


void    Bureaucrat::signForm(Form &a)
{
    try
    {
        a.beSigned(*this);
        std::cout << GREEN << this->_name << " signed " << a.getName() << RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->_name << " cannot signed " << a.getName() << " because " <<  e.what() << std::endl;
    }
}

void    Bureaucrat::executeForm(Form &a)
{
    try
    {
        a.Grade(*this); 
        std::cout << ROSE << this->_name << " executed " << a.getName() << RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->_name << " cannot execute " << a.getName() << " because " << e.what() << std::endl;
    }
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
