CXX=g++
CXXSTD=c++17
CXXWARNINGS=\
		   -Wall \
		   -Wextra \
		   -Wpedantic \
		   -Werror \
		   -Wfatal-errors
CXXINCLUDES=\
			-I./include

CXXFLAGS=\
		 -std=$(CXXSTD) \
		 $(CXXWARNINGS) \
		 $(CXXINCLUDES)

all:\
	build/0-hello-world.bin

format:
	@find ./src -name '*.cpp' | xargs -n 1 --no-run-if-empty --verbose clang-format -i
	@find ./include -name '*.h' 2>/dev/null | xargs -n 1 --no-run-if-empty --verbose clang-format -i

clean:
	@find ./build -name '*.o' | xargs -n 1 --no-run-if-empty rm -v
	@find ./build -name '*.so' | xargs -n 1 --no-run-if-empty rm -v
	@find ./build -name '*.bin' | xargs -n 1 --no-run-if-empty rm -v

list:
	@find ./src -name '*.cpp' |\
		grep -P '\./src/\d+-[a-z0-9_-]+\.cpp' |\
		xargs -n 1 -I FOO --no-run-if-empty \
			bash -c 'echo -n FOO ; head -n 2 FOO | tail -n 1 | sed s/\*/-/' |\
		sed -e 's:\./src/::' -e 's/\.cpp\>//'

build/%.bin: build/%.o
	$(CXX) $(CXXFLAGS) -o $@ $<

build/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<