cmake_minimum_required(VERSION 2.6)

project (CPP_Features)

file(GLOB CPP_Features
	"src/*.hpp"
	"src/*.cpp"
	)
add_executable(CPP_Features ${CPP_Features})
