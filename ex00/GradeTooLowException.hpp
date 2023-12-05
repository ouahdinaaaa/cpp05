/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:01:30 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/05 14:33:47 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADETOOLOWEXCEPTION_HPP
#define GRADETOOLOWEXCEPTION_HPP

#include "string"
#include "exception"

class GradeTooLowException : public std::exception
{
    private:
        std::string _error_msg;
        
    public:
    
    GradeTooLowException();
    virtual ~GradeTooLowException() noexcept ;
    virtual const char *what() const noexcept;
};


#endif