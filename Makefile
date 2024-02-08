CXX ?= g++
CXXFLAGS ?= -Wall -Werror -pedantic -g --std=c++17 -Wno-sign-compare -Wno-comment

# Run a regression test
test: meow.exe meow_tests.exe
	./meow_tests.exe
	./name_generator_tests.exe
#./meow.exe < meow_test.in > meow_test.out
# diff meow_test.out meow_test.out.correct

# Compile the main executable
meow.exe: meow.cpp
	$(CXX) $(CXXFLAGS) meow.cpp name_generator.cpp -o meow.exe

# Compile the meow_tests executable
meow_tests.exe: meow_tests.cpp
	$(CXX) $(CXXFLAGS) meow_tests.cpp meow.cpp -o meow_tests.exe

# Compile the meow_tests executable
name_generator_tests.exe: name_generator_tests.cpp name_generator.cpp
	$(CXX) $(CXXFLAGS) name_generator_tests.cpp name_generator.cpp -o name_generator_tests.exe

# Remove automatically generated files
clean :
	rm -rvf *.exe *~ *.out *.dSYM *.stackdump

# Disable built-in rules
.SUFFIXES: