#include <cassert>
#include <iostream>
#include <string>
#include <vector>


int do_main(const std::vector<std::string>& args)
{
  if(args.size() != 2)
  {
    return 1;
  }
  if(std::string(args[1]) == "true")
  {
    std::cout << "heads\n";
  }
  else if(std::string(args[1]) == "false")
  {
    std::cout << "tails\n";
  }
  else
  {
    return 1;
  }
  return 0;
}

int main(int argc, char* argv[]) 
{
  assert(do_main( { "bool_to_coin" } ) == 1);
  assert(do_main( { "bool_to_coin", "true" } ) == 0);
  assert(do_main( { "bool_to_coin", "false" } ) == 0);
  assert(do_main( { "bool_to_coin", "nonsense" } ) == 1);
  assert(do_main( { "bool_to_coin", "true", "true" } ) == 1);

  const std::vector<std::string> args(argv, argv + argc);
  return do_main(args);
}
