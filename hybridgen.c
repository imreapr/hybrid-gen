
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "charstructures.h"

int append(int argc, char **argv);
int flush(char **argv);
int search(void);
int rmv(void);


char singleline[150];
FILE * outpFile;
FILE * inpFile;


int main(int argc, char **argv){
	init();
	if(argc == 2){
		flush(argv);
	}
	else{
		search();
		rmv();
	}
}

int append(int argc, char **argv){
	FILE * outpFile;
	outpFile = fopen("passwordlist.txt","a");

	if(argc > 1){


		for(int i = 1; i < argc; i++){

				return 0;
			}
//if tried password is longer then one word
			// if(argc != 2){
			// 	//fprintf(outpFile,"%s ",addtodic);
			// }
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

int rmv(void){
	printf("%s\n", "Cleaning up duplicates...");
	system("./rmdupe.sh");
	return 0;
}

int search(void){
	//Get input words from here
	inpFile = fopen("input.txt","r");
	while (fgets(singleline, sizeof(singleline), inpFile)){
		fgets(singleline,150,inpFile);
		//Output words are put in this file
		outpFile = fopen("passwordlist.txt", "a");
		int ce = 0;
		//While there are still letters in the word
		while(singleline[ce] != '\0'){
			int cd = 0;
			//Switch statement that links to structure for each char
			switch (singleline[ce]) {
					case 'a':
					//Charcmb is a string that contains word alternatives to a, "A" or "@"
					while(a.charcmb[cd] != '\0'){
						singleline[ce] = a.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = a.charcmb[0];
					break;

					case 'b':
					while(b.charcmb[cd] != '\0'){
						singleline[ce] = b.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = b.charcmb[0];
					break;

					case 'c':
					while(c.charcmb[cd] != '\0'){
						singleline[ce] = c.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = c.charcmb[0];
					break;

					case 'd':
					while(d.charcmb[cd] != '\0'){
						singleline[ce] = d.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = a.charcmb[0];
					break;

					case 'e':
					while(e.charcmb[cd] != '\0'){
						singleline[ce] = e.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = e.charcmb[0];
					break;

					case 'f':
					while(f.charcmb[cd] != '\0'){
						singleline[ce] = f.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = f.charcmb[0];
					break;

					case 'g':
					while(g.charcmb[cd] != '\0'){
						singleline[ce] = g.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = g.charcmb[0];
					break;

					case 'h':
					while(h.charcmb[cd] != '\0'){
						singleline[ce] = h.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = h.charcmb[0];
					break;

					case 'i':
					while(i.charcmb[cd] != '\0'){
						singleline[ce] = i.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = i.charcmb[0];
					break;

					case 'j':
					while(j.charcmb[cd] != '\0'){
						singleline[ce] = j.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = j.charcmb[0];
					break;

					case 'k':
					while(k.charcmb[cd] != '\0'){
						singleline[ce] = k.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = k.charcmb[0];
					break;

					case 'l':
					while(l.charcmb[cd] != '\0'){
						singleline[ce] = l.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = l.charcmb[0];
					break;

					case 'm':
					while(m.charcmb[cd] != '\0'){
						singleline[ce] = m.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = m.charcmb[0];
					break;

					case 'n':
					while(n.charcmb[cd] != '\0'){
						singleline[ce] = n.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = n.charcmb[0];
					break;

					case 'o':
					while(o.charcmb[cd] != '\0'){
						singleline[ce] = o.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = o.charcmb[0];
					break;

					case 'p':
					while(p.charcmb[cd] != '\0'){
						singleline[ce] = p.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = p.charcmb[0];
					break;

					case 'q':
					while(q.charcmb[cd] != '\0'){
						singleline[ce] = q.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = q.charcmb[0];
					break;

					case 'r':
					while(r.charcmb[cd] != '\0'){
						singleline[ce] = r.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = r.charcmb[0];
					break;

					case 's':
					while(s.charcmb[cd] != '\0'){
						singleline[ce] = s.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = s.charcmb[0];
					break;

					case 't':
					while(t.charcmb[cd] != '\0'){
						singleline[ce] = t.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = t.charcmb[0];
					break;

					case 'u':
					while(u.charcmb[cd] != '\0'){
						singleline[ce] = u.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = u.charcmb[0];
					break;

					case 'v':
					while(v.charcmb[cd] != '\0'){
						singleline[ce] = v.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = v.charcmb[0];
					break;

					case 'w':
					while(w.charcmb[cd] != '\0'){
						singleline[ce] = w.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = w.charcmb[0];
					break;

					case 'x':
					while(x.charcmb[cd] != '\0'){
						singleline[ce] = x.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = x.charcmb[0];
					break;

					case 'y':
					while(y.charcmb[cd] != '\0'){
						singleline[ce] = y.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = y.charcmb[0];
					break;

					case 'z':
					while(z.charcmb[cd] != '\0'){
						singleline[ce] = z.charcmb[cd];
						fprintf(outpFile,"%s",singleline);
						cd++;
					}
					singleline[ce] = z.charcmb[0];
					break;

				}
				ce++;
			}
		}
	fclose(inpFile);
	fclose(outpFile);

	printf("%s\n","Done!" );
	return 0;


	}
