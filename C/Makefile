compile:
	gcc -c main.c;
	gcc -o Factorial main.o;
	chmod +x Factorial;
	rm main.o;

test: Factorial
	./Factorial 1;
	./Factorial 5;
	./Factorial 12;
	./Factorial;
