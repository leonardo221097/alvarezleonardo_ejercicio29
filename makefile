ejercicio29.png: ejercicio29.dat 
	python ejercicio29.py

ejercicio29.dat: ejercicio29.x
	./ejercicio29.x > ejercicio29.dat
	
ejercicio29.x : ejercicio29.cpp
	c++ ejercicio29.cpp -o ejercicio29.x