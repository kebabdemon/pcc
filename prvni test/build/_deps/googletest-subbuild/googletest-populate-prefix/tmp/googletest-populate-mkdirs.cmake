# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "U:/prvni test/build/_deps/googletest-src"
  "U:/prvni test/build/_deps/googletest-build"
  "U:/prvni test/build/_deps/googletest-subbuild/googletest-populate-prefix"
  "U:/prvni test/build/_deps/googletest-subbuild/googletest-populate-prefix/tmp"
  "U:/prvni test/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
  "U:/prvni test/build/_deps/googletest-subbuild/googletest-populate-prefix/src"
  "U:/prvni test/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "U:/prvni test/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "U:/prvni test/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
