file(GLOB_RECURSE RES_FILES "havajxoj/*")

#Fenestro
add_executable(fenestro fenestro/cxefa.cpp )
target_link_libraries(fenestro mojosero ${LIBS})

#Kopii havajxojn
#file(COPY havajxoj DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
#message(STATUS "Havaĵoj aldonitas al: ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")
