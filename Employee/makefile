run: main.o Employee.o Technician.o
	g++ -o run -std=c++11 main.o Employee.o Technician.o
main.o: main.cpp
	g++ -c main.cpp -std=c++11
Employee.o: Employee.cpp Employee.h Technician.o
	g++ -c Employee.cpp -std=c++11
Technician.o: Technician.cpp Technician.h
	g++ -c Technician.cpp -std=c++11
.PHONY:clean
clean:
	rm -rf *.o run
# author: meng  date:2019/8/26 
# the function of dependence is renovate target after
# the dependence is modified.
# .PHONY 表示隐晦规则，表示clean为伪目标文件（否则路径中包含clean文件时，
#   将导致clean命令无法执行！）
#  Makefile里主要包含了五个东西：显式规则、隐晦规则、变量定义、文件指示和注释
