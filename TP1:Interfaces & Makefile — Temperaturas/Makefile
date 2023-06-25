all: ConversionTest TablasDeConversion

ConversionTest: Conversion.o ConversionTest.o
	gcc -o ConversionTest Conversion.o ConversionTest.o

TablasDeConversion: Conversion.o TablasDeConversion.o
	gcc -o TablasDeConversion Conversion.o TablasDeConversion.o

Conversion.o: Conversion.c Conversion.h
	gcc -c Conversion.c

ConversionTest.o: ConversionTest.c Conversion.h
	gcc -c ConversionTest.c

TablasDeConversion.o: TablasDeConversion.c Conversion.h
	gcc -c TablasDeConversion.c

clean:
	rm -f *.o ConversionTest TablasDeConversion
