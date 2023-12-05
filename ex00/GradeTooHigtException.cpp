/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHigtException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:49:41 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/05 14:32:28 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooHighException.hpp"

GradeTooHightException::GradeTooHightException()
{
    this->_error_msg = "Grade is too high for a Bureaucrat !!!";
}

GradeTooHightException::~GradeTooHightException()  noexcept
{
}

const char* GradeTooHightException::what()const  noexcept
{
    return this->_error_msg.c_str();
}