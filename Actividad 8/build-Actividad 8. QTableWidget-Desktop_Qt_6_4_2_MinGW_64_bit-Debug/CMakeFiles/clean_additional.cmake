# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Act4_QPlainTextEdit_autogen"
  "CMakeFiles\\Act4_QPlainTextEdit_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Act4_QPlainTextEdit_autogen.dir\\ParseCache.txt"
  )
endif()
