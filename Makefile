all: new-Blank-File

%: %.cc
	g++ -std=c++11 $< -o $@

%: %.c
	gcc $< -o $@

