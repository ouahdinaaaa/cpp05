/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:50:22 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/13 16:20:15 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("ouahdina"), _grade_exec(1), _grade_sign(1), status(false)
{
    
}

Form::Form(const Form &objs) : _name(objs._name), _grade_exec(objs._grade_exec), _grade_sign(objs._grade_sign), status(objs.status) 
{
    *this = objs;
}

Form::Form(const std::string &name) : _name(name), _grade_exec(1), _grade_sign(1), status(false)
{
    
}

Form::Form(const std::string &name, int execGrade, int signGrade) : _name(name), _grade_exec(execGrade), _grade_sign(signGrade), status(false)
{
             
}

Form::Form(int exec, int sign) : _name("ouahdina"), _grade_exec(exec), _grade_sign(sign), status(false)
{
    
}

Form    &Form::operator=(const Form &objs)
{
    this->status = objs.status;
    return (*this);
}

Form::~Form()
{
    
}

std::string Form::getName() const
{
    return this->_name;
}

int Form::getSign() const
{
    return this->_grade_sign;
}

int Form::getExec() const
{
    return this->_grade_exec;
}

bool    Form::isSigned() const 
{
    return this->status;
}

void    Form::beSigned(const Bureaucrat &bureau)
{
    if (bureau.getGrade() >= this->getSign())
        this->status = true;
}

void    Form::PutSigned(bool res)
{
    this->status = res;
}

std::ostream &operator<<(std::ostream &o, const Form &objs)
{
    o << " 📃 " << objs.getName() 
    << " || Grade exec : " << objs.getExec() 
    << " || Grade sign : " << objs.getSign() 
    << " || status : " << std::boolalpha << objs.isSigned();
    return (o);
}