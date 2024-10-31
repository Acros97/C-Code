#include <stdio.h>
#include <stdlib.h>
	
	void compressRLE(const char* inputFile, const char* outputFile){
		FILE *input = fopen(inputFile,"rb");
		FILE *output = fopen(outputFile,"wb");

		if(!input || !output){
			printf("Error al abrir los archivos.\n");
			return;
		}

		int currentChar = fgetc(input);
		int nextChar;
		int count = 1;
		
		while((nextChar = fgetc(input)) != EOF) { // verifica que el siguiente caracter no sea fin de la secuencia
			if(nextChar == currentChar)
				count++;
			else{
				fwrite(&count, sizeof(count), 1, output);
				fputc(currentChar, output);
				currentChar = nextChar;
				count = 1;

			}
		
		}

		//Escritura final
		fwrite(&count, sizeof(count), 1, output);
		fputc(currentChar, output);

		fclose(input);
		fclose(output);	

		printf("Comprensión completada con éxito en %s\n", outputFile);


	}

	int main(){
		const char* inputFile = "prueba.txt"; // modificar esto
		const char* outputFile = "output.rle";	// archivo de salida en formato .rle 
		compressRLE(inputFile, outputFile);

		return 0;
	}
