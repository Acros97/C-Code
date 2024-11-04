#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <commdlg.h>
	


	void openFileDialog(char* filepath,DWORD filePathSize){
		OPENFILENAME ofname;
		ZeroMemory(&ofname,sizeof(ofname));

		ofname.lStructSize = sizeof(ofname);
		ofname.hwndOwner = NULL;
		ofname.lpstrFile = filepath;	
		ofname.lpstrFile[0] = '\0';
		ofname.nMaxFile = filePathSize;
		ofname.lpstrFilter = "Archivos de texto\0*.txt";
		ofname.nFilterIndex = 1;
		ofname.lpstrFileTitle = NULL;
		ofname.nMaxFileTitle = 0;
		ofname.lpstrInitialDir = NULL;
		ofname.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;


		if(GetOpenFileName(&ofname))
			printf("Se seleccionó el archivo: %s", filepath);
		else
			printf("No se seleccionó ningún archivo.\n");

		

	}


	/// @brief función principal que comprime los datos usando el metodo Run-Length Encoding (RLE)
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
		char filePath[MAX_PATH];
		openFileDialog(filePath,MAX_PATH);
		const char* outputFile = "output.rle";	// archivo de salida en formato .rle 
		compressRLE(filePath, outputFile);

		return 0;
	}
