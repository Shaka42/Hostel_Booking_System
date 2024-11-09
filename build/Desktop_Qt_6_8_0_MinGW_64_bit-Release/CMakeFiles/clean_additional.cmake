# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\Hostel_Booking_System_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Hostel_Booking_System_autogen.dir\\ParseCache.txt"
  "Hostel_Booking_System_autogen"
  )
endif()
