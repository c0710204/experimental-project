CC=gcc
#CFLAGS= -Wall -g 
CFLAGS= -g 
INC= ""
all:main.o
	g++ -I../ -L../CL -lOpenCL   -o  text.exe main.o   ../CL/OpenCL.dll
main.o:main.cpp
	g++  -I../ -L../CL -c   main.cpp
