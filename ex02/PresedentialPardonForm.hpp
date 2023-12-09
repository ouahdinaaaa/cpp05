/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresedentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:58:09 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/09 19:03:53 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESEDENTIALPARDONFORM_HPP
#define PRESEDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresedentialPardonForm : public AForm
{
    private:
        std::string _name;

    public:
        PresedentialPardonForm();
        PresedentialPardonForm(std::string &name);
        ~PresedentialPardonForm();
        void    Grade();
};


#endif