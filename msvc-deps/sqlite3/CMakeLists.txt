cmake_minimum_required(VERSION 2.6)
FILE(GLOB SQLITE_SRC *.c *.h)

ADD_LIBRARY(sqlite3 STATIC ${HEADERS} ${SQLITE_SRC})

INSTALL(TARGETS sqlite3 LIBRARY DESTINATION lib ARCHIVE DESTINATION lib COMPONENT libraries)