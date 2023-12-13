/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:08:24 by ayael-ou          #+#    #+#             */
/*   Updated: 2023/12/13 16:12:22 by ayael-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Lola("👩 Lola", 149);
		Bureaucrat john("👱 John", 3);
		std::cout << YELLOW << john << std::endl;
		std::cout << ORANGE << Lola << "\n" << std::endl;
		john.incrementGrade();
		Lola.decrementGrade();
		std::cout << YELLOW << john << std::endl;
		std::cout << ORANGE << Lola << "\n" << std::endl;
		john.incrementGrade();
		Lola.decrementGrade();
		std::cout << YELLOW << john << std::endl;
		std::cout << ORANGE << Lola << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

/*
		Faire Attention Bureaucrate avec mauvais insignation segfault faire try/catch dans fonction
			*
			*
*/