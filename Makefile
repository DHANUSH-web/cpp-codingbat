build:
	@cmake --preset debug
	@cmake --build out/debug

build-release:
	@cmake --preset release
	@cmake --build out/release

build-all: build build-release

build-raw:
	@mkdir -p out/debug
	@clang++.exe -std=c++17 -Iincludes src/core.cpp src/main.cpp -o out/debug/cpp-codingbat.exe
	@clang++.exe -std=c++17 -Iincludes -Iextras/googletest/googletest/include -Iextras/googletest/googletest tests/test_core.cpp tests/test_main.cpp src/core.cpp extras/googletest/googletest/src/gtest-all.cc -o out/debug/cpp-codingbat-tests.exe

build-raw-release:
	@mkdir -p out/release
	@clang++.exe -std=c++17 -O3 -march=native -Iincludes src/core.cpp src/main.cpp -o out/release/cpp-codingbat.exe
	@clang++.exe -std=c++17 -O3 -march=native -Iincludes -Iextras/googletest/googletest/include -Iextras/googletest/googletest tests/test_core.cpp tests/test_main.cpp src/core.cpp extras/googletest/googletest/src/gtest-all.cc -o out/release/cpp-codingbat-tests.exe

build-raw-all: build-raw build-raw-release

run:
	@out/debug/cpp-codingbat.exe

run-release:
	@out/release/cpp-codingbat.exe

test:
	@out/debug/cpp-codingbat-tests.exe

test-release:
	@out/release/cpp-codingbat-tests.exe

clean:
	@rm -rf out/debug

clean-release:
	@rm -rf out/release

clean-all:
	@rm -rf out

.PHONY: build build-release build-all build-raw build-raw-release build-raw-all run run-release test test-release clean clean-release clean-all
