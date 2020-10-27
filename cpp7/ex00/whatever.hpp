/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 14:50:15 by jecaudal          #+#    #+#             */
/*   Updated: 2020/10/27 15:30:12 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T &v1, T &v2)
{
	T swap;
	swap = v1;
	v1 = v2;
	v2 = swap;
}

template <typename T>
T	min(T &v1, T &v2)
{
	if (v1 < v2)
		return (v1);
	return (v2);
}

template <typename T>
T	max(T &v1, T &v2)
{
	if (v1 > v2)
		return (v1);
	return (v2);
}

#endif
