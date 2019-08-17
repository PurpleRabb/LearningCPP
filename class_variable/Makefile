localpath := $(shell pwd)
objdirs := $(localpath)/objs
srcfiles = $(wildcard *.cpp)
objs = $(patsubst %.cpp, %.o, $(wildcard *.cpp))

main: $(objs) $(objdirs)
	g++ $(objs) -o main

clean:
	-rm -rf *.o main

$(objdirs):
	mkdir -p $@
