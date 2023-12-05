/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:23:57 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/05 20:31:29 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class   Form
{
    private : 

    const std::string _name;
    bool    status;
    const int   _grade_exec;
    const int   _grade_sign;

    public :

    Form(const std::string &name, int signGrade, int execGrade);
    std::string getName() const;
    bool isSigned()const;
};

#endif