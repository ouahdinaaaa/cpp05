/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:19:36 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/10 20:00:11 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
#define SHRUBERRYCREATIONFORM_HPP

#include "AForm.hpp"

class ShruberryCreationForm : public AForm
{
    private:
        std::string _name;
    
    public:
        ShruberryCreationForm(const std::string &name);
        ShruberryCreationForm();
        ~ShruberryCreationForm();

        virtual void    Grade(const Bureaucrat &bureau) const;
};

#endif