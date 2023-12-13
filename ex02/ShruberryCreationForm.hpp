/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:19:36 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/13 11:56:59 by ayael-ou         ###   ########.fr       */
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
        ShruberryCreationForm(const ShruberryCreationForm &objs);
        ShruberryCreationForm &operator=(const ShruberryCreationForm &objs);
        ~ShruberryCreationForm();

        virtual void    Grade(const Bureaucrat &bureau) const;
};

#endif