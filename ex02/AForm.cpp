/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:50:22 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/13 16:57:23 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("ouahdina"), _grade_exec(1), _grade_sign(1), status(false)
{
    
}

AForm::AForm(const std::string &name) : _name(name), _grade_exec(1), _grade_sign(1), status(false)
{
    
}

AForm::AForm(const std::string &name, int execGrade, int signGrade) : _name(name), _grade_exec(execGrade), _grade_sign(signGrade), status(false)
{
             
}

AForm::AForm(int exec, int sign) : _name("ouahdina"), _grade_exec(exec), _grade_sign(sign), status(false)
{
    
}

AForm::AForm(const AForm &objs) : _name(objs._name), _grade_exec(objs._grade_exec), _grade_sign(objs._grade_sign), status(objs.status)
{
    *this = objs;
}

AForm &AForm::operator=(const AForm &objs)
{
    this->status = objs.status;
    return (*this);
}

AForm::~AForm()
{
    
}

std::string AForm::getName() const
{
    return this->_name;
}

int AForm::getSign() const
{
    return this->_grade_sign;
}

int AForm::getExec() const
{
    return this->_grade_exec;
}

bool    AForm::isSigned() const 
{
    return this->status;
}

void    AForm::beSigned(const Bureaucrat &bureau)
{
    if (!this->status)
    { 
        if (bureau.getGrade() <= this->_grade_sign)
            this->status = true;
        else
            throw AForm::GradeTooLowException();
    }
}

const char* AForm::FormNotSignedException::what() const throw()
{
    return ("Form is not signed");
}

const char * AForm::GradeTooHightException::what() const throw()
{
    return ("Grade is too high for a Form !!!");
}

const char * AForm::GradeTooLowException::what() const throw()
{
    return ("Grade is too low for a Form !!!");
}

void    AForm::execute(const Bureaucrat& execu) const
{
    if (!this->isSigned())
        throw AForm::FormNotSignedException();
    if(execu.getGrade() > this->getExec())
        throw AForm::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &o, const AForm &objs)
{
    o << "\n{name :" << objs.getName() 
    << " || Grade exec : " << objs.getExec() 
    << " || Grade sign : " << objs.getSign() 
    << " || status : " << objs.isSigned() << "}\n";
    return (o);
}