#include <eigenpy/eigenpy.hpp>
#include <aligator/config.hpp>

#define _MY_STRINGIFY(x) #x
#define MY_STRINGIFY(x) _MY_STRINGIFY(x)

BOOST_PYTHON_MODULE(PYTHON_MODULE_NAME) {
  printf("Custom aligator C++ extension: %s\n",
         MY_STRINGIFY(PYTHON_MODULE_NAME));
  printf(" - Aligator version: %s\n", ALIGATOR_VERSION);
}
