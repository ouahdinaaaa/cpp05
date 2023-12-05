/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:05:22 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/05 14:32:46 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooLowException.hpp"

GradeTooLowException::GradeTooLowException()
{
    this->_error_msg = "Grade is too low for a Bureaucrat !!!";
}

GradeTooLowException::~GradeTooLowException() noexcept
{
    
}

const char * GradeTooLowException::what() const noexcept
{
    return this->_error_msg.c_str();
}