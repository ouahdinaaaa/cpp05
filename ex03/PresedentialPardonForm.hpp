/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresedentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:58:09 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/13 15:24:47 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESEDENTIALPARDONFORM_HPP
#define PRESEDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresedentialPardonForm : public Form
{
    private:
        std::string _name;

    public:
        PresedentialPardonForm();
        PresedentialPardonForm(const PresedentialPardonForm &objs);
        PresedentialPardonForm(const std::string &name);
        ~PresedentialPardonForm();
        virtual void    Grade(const Bureaucrat &bureau) const;
        PresedentialPardonForm &operator=(const PresedentialPardonForm &objs); 
        
};


#endif