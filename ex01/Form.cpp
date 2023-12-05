/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:50:22 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/05 20:58:27 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string &name, int signGrade, int execGrade)
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