/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:05:59 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/13 11:43:38 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string _name;

    public:
    
        RobotomyRequestForm(const std::string &name);
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &objs);
        ~RobotomyRequestForm();
        
        RobotomyRequestForm &operator=(const RobotomyRequestForm &objs);
        virtual void    Grade(const Bureaucrat &bureau) const;
};


#endif