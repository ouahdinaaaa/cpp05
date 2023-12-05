/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Gradetoohighexception.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:34:34 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/05 14:30:34 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADETOOHIGHEXCEPTION_HPP
#define GRADETOOHIGHEXCEPTION_HPP

#include <exception>
#include <string>

class GradeTooHightException : public std::exception
{
    private : 
        std::string _error_msg;

    public :
    GradeTooHightException();
    virtual ~GradeTooHightException()  noexcept;
    virtual const char* what() const  noexcept;
};


#endif