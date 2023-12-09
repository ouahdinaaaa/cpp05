/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:21:45 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/09 18:57:35 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Form.hpp"

class AForm : public Form
{
    private :
    std::string _name;

    public :
    ~AForm();
    AForm();
    AForm(const std::string &name);
}


#endif



//srand geneere aleatoirement si cest en dessou 0.5 succes or succes

//sid num rand bien avant code appel srand initialise la sid
