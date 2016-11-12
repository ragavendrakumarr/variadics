// variadics.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
template <typename T, typename U>
auto matches(T t, U u)-> int
{
	return (t == u);
}

template <typename T, typename U, typename... Args>
auto matches(T t, U u, Args... _args)-> int
{
	return (t == u) || matches(t, Args... _args);
}


auto main()-> int 
{
	auto two = matches(1, 2);
	std::cout << two << "\n";
	auto second = matches(1, 2 - 1);
	std::cout << second << "\n";
    return 0;
}

