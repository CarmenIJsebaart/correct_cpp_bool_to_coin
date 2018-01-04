# correct_cpp_bool_to_coin

Branch|[Travis CI](https://travis-ci.org)|[Codecov](https://www.codecov.io)
---|---|---
master|[![Build Status](https://travis-ci.org/CarmenIJsebaart/correct_cpp_bool_to_coin.svg?branch=master)](https://travis-ci.org/CarmenIJsebaart/correct_cpp_bool_to_coin)|[![codecov.io](https://codecov.io/github/CarmenIJsebaart/correct_cpp_bool_to_coin/coverage.svg?branch=master)](https://codecov.io/github/CarmenIJsebaart/correct_cpp_bool_to_coin/branch/master)

[Correct C++](https://github.com/richelbilderbeek/correct_cpp) chapter 'Hello CLI'.

## Goal

 * Write an application with 100% code coverage

## Prerequisites

 * Understand [how this course works](https://github.com/richelbilderbeek/correct_cpp/blob/master/how_this_course_works.md)
 * Have written [a correct 'is_odd' program](https://github.com/richelbilderbeek/correct_cpp_is_odd)

## Exercise

Write a command-line interface (CLI) program that converts a boolean (`true` or `false`) to a coin's side (`heads` or `tails` respectively), 
followed by a newline. Fail if the user supplies no, two or more arguments.

Call to `bool_to_coin`|Output|Exit status
---|---|---
`./bool_to_coin`|Any|1
`./bool_to_coin true`|`heads` (with newline)|0
`./bool_to_coin false`|`tails` (with newline)|0
`./bool_to_coin nonsense`|Any|1
`./bool_to_coin true true`|Any|1

This is the code you start with:

```c++
#include <iostream>
#include <string>

int main(int argc, char* argv[]) 
{
  if (argc != 2) 
  {
    return 1;
  }
  if (std::string(argv[1]) == "true") 
  { 
    std::cout << "heads\n";   
  }
  else if (std::string(argv[1]) == "false") 
  { 
    std::cout << "tails\n"; 
  }
  else 
  {
    return 1;
  }
}

```

 * Your code needs to have 100% code coverage, regardless how it is called (that is, with zero, one or more arguments), 
   see [how to get 100 percent code coverage](https://github.com/richelbilderbeek/correct_cpp/blob/master/get_100_percent_code_coverage.md)

## External links

 * [Download the Qt Creator file `main.pro`](https://raw.githubusercontent.com/richelbilderbeek/correct_cpp/master/shared/main.pro)
