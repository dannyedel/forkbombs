
add_definitions(
	-std=c++11
)

add_executable(forkbomb-c++-threads
	forkbomb-c++-threads.cc
)

set_target_properties(forkbomb-c++-threads
	PROPERTIES LINK_FLAGS -static-libstdc++
)

target_link_libraries(forkbomb-c++-threads
	pthread
)

install(TARGETS forkbomb-c++-threads
	RUNTIME DESTINATION bin
	)
