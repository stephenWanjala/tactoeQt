# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/tactoe_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/tactoe_autogen.dir/ParseCache.txt"
  "tactoe_autogen"
  )
endif()
