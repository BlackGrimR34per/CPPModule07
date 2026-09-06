/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 18:30:11 by yosherau          #+#    #+#             */
/*   Updated: 2026/09/06 16:50:36 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &first, T &second)
{
	T	temp;

	temp = first;
	first = second;
	second = temp;
}

template <typename T>
const T	&min(const T &first, const T &second)
{
	return (first >= second ? second : first);
}

template <typename T>
const T	&max(const T &first, const T &second)
{
	return (first <= second ? second : first);
}

#endif