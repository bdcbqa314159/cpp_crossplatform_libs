#pragma once
#ifndef COMMON_FUNCTIONS_HPP
#define COMMON_FUNCTIONS_HPP

#include <string>

#include "exported.hpp"

EXPORTED std::string my_library();

EXPORTED double simple_addition(double, double);

NOT_EXPORTED double simple_multiplication(double, double);

#endif  // COMMON_FUNCTIONS_HPP