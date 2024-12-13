GreatestCommonDivisor: GreatestCommonDivisor.o
	g++ -g -o GreatestCommonDivisor.exe GreatestCommonDivisor.o -pthread    

GreatestCommonDivisor.o: GreatestCommonDivisor/GreatestCommonDivisor.cpp
	g++ -g  -c -pthread GreatestCommonDivisor/GreatestCommonDivisor.cpp
