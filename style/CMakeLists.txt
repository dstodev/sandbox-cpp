project(Style)

set(target_name "${PROJECT_NAME}_lib")

add_library(${target_name} SHARED
	includes.hxx
	parameters.cxx
)
