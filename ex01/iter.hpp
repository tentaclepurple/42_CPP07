/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:32:30 by imontero          #+#    #+#             */
/*   Updated: 2023/12/27 16:32:30 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *array, int len, void (*f)(T const &))
{
	for (int i = 0; i < len; i++)
		f(array[i]);
}

template <typename T>
void print(T const &x)
{
	std::cout << x << std::endl;
}

#endif