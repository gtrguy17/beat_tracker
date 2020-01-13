#pragma once


template <typename IntType>
std::vector<IntType> range(IntType start, IntType stop, IntType step);


template <typename IntType>
std::vector<IntType> range(IntType start, IntType stop);


template <typename IntType>
std::vector<IntType> range(IntType stop);


template <typename T>
String vectorToString(std::vector<T> v);

