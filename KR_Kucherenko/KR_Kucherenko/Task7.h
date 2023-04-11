//
// Developed by Daniil Kucherenko on 07.12.22
//

#pragma once
template<class   T>
using FunctPtrEq = T(*)(T& x, const T& y);

template<class  T>
using FunctPtr = T(*)(const T& x, const T& y);

template<class T>
T executeEq(T& a, const T& b, FunctPtrEq<T> func) {
	return func(a, b);
}

template<class T>
T execute(const T& a, const T& b, FunctPtr<T> func) {
	return func(a, b);
}