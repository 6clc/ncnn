message(STATUS "hello wolrd")
find_package(OpenCV)
message(STATUS "found opencv? " "${OpenCV_FOUND}")
message(STATUS "OpenCV install path " "${OpenCV_INSTALL_PATH}")
message(STATUS "OpenCV LIBS path " ${OpenCV_LIBS})

