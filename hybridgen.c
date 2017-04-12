
#include <stdio.h>
#include <string.h>

int append(int argc, char **argv);
int permutate(void);
int allcombos(void);
int flush(char **argv);


char singleline[150];
FILE * outpFile;
FILE * inpFile;


int main(int argc, char **argv){
	if(argc == 2){
			flush(argv);
	}
	//append(argc,argv);
	else{
		permutate();
	}
}

int append(int argc, char **argv){
	FILE * outpFile;
	outpFile = fopen("passwordlist.txt","a");

	if(argc > 1){


		for(int i = 1; i < argc; i++){
			char* addtodic = argv[i];
// for trying one word passwords
// OR prevents adding space to the end of final word in password
			if(i == argc - 1){
				fprintf(outpFile,"%s\n",addtodic);
				fclose(outpFile);
				return 0;
			}
//if tried password is longer then one word
			if(argc != 2){
				fprintf(outpFile,"%s ",addtodic);
			}
		}
	}
	return 1;
}

//copies words from one dictionary and pastes them into another.
int permutate(void){

	inpFile = fopen("input.txt","r");

	while (fgets(singleline, sizeof(singleline), inpFile)){
		fgets(singleline,150,inpFile);

		outpFile = fopen("passwordlist.txt", "a");
		fprintf(outpFile,"%s",singleline);
		allcombos();
	}
	fclose(inpFile);



return 0;
}
//finds all possible combinations of a word and adds then to passwordlist.txt dictionary
int allcombos(void){

	for(int i = 0; i  < sizeof(singleline); i++){

		if(singleline[i] >= 97 && singleline[i] < 123){
			singleline[i] = singleline[i]-32;
			fprintf(outpFile, "%s",singleline);
		}
		//switch statement that will replace current letter with a number
		switch(singleline[i]){
			case 'e':
			case 'E':
				singleline[i] = '3';
				fprintf(outpFile,"%s",singleline);
				break;
			case 'o':
			case 'O':
				singleline[i] = '0';
				fprintf(outpFile,"%s",singleline);
				break;
			case 'l':
			case 'L':
				singleline[i] = '1';
				fprintf(outpFile,"%s",singleline);
			case 's':
			case 'S':
				singleline[i] = '5';
				break;
		}

	}

	return 0;
}
//flushes out generated passwordlist.txt
int flush(char **argv){
		char dest[26];
		strcpy(dest,argv[1]);
		if(strcmp("-f",dest) == 0){
				FILE * flushP;
				flushP = fopen("passwordlist.txt","w");
		}
		return 0;
}
