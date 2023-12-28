/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:09:09 by imontero          #+#    #+#             */
/*   Updated: 2023/12/27 15:09:09 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"

int	main()
{
	try 
	{
		Array<int> A(6);
		std::cout << "A: " << A << "\n";
		std::cout << "Change index 2 value in A\n";
		A[2] = 42;
		std::cout << "A: " << A << "\n";
		std::cout << "Copy array A to array B\n";
		Array<int> B(A);
		std::cout << "B: " << B << "\n";
		std::cout << "change index 0 value in B\n";
		B[0] = -42;
		std::cout << "A: " << A << "\n";
		std::cout << "B: " << B << "\n";
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
