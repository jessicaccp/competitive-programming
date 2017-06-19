#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

int main () {
	char vetor[1050], resposta='Y';
	int i, aux=1;

	while (aux=1) {
		resposta='Y';
		for (i=0; i<1050; i++)
			vetor[i]='0';
		gets(vetor);
		if (vetor[0]=='*')
			break;
		if (vetor[0]=='a' || vetor[0]=='A') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='a' && vetor[i+1]!='A') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='b' || vetor[0]=='B') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='b' && vetor[i+1]!='B') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='c' || vetor[0]=='C') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='c' && vetor[i+1]!='C') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='d' || vetor[0]=='D') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='d' && vetor[i+1]!='D') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='e' || vetor[0]=='E') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='e' && vetor[i+1]!='E') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='f' || vetor[0]=='F') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='f' && vetor[i+1]!='F') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='g' || vetor[0]=='G') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='g' && vetor[i+1]!='G') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='h' || vetor[0]=='H') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='h' && vetor[i+1]!='H') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='i' || vetor[0]=='I') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='i' && vetor[i+1]!='I') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='j' || vetor[0]=='J') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='j' && vetor[i+1]!='J') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='k' || vetor[0]=='K') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='k' && vetor[i+1]!='K') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='l' || vetor[0]=='L') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='l' && vetor[i+1]!='L') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='m' || vetor[0]=='M') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='m' && vetor[i+1]!='M') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='n' || vetor[0]=='N') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='n' && vetor[i+1]!='N') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='o' || vetor[0]=='O') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='o' && vetor[i+1]!='O') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='p' || vetor[0]=='P') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='p' && vetor[i+1]!='P') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='q' || vetor[0]=='Q') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='q' && vetor[i+1]!='Q') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='r' || vetor[0]=='R') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='r' && vetor[i+1]!='R') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='s' || vetor[0]=='S') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='s' && vetor[i+1]!='S') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='t' || vetor[0]=='T') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='t' && vetor[i+1]!='T') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='u' || vetor[0]=='U') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='u' && vetor[i+1]!='U') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='v' || vetor[0]=='V') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='v' && vetor[i+1]!='V') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='w' || vetor[0]=='W') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='w' && vetor[i+1]!='W') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='x' || vetor[0]=='X') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='x' && vetor[i+1]!='X') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='y' || vetor[0]=='Y') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='y' && vetor[i+1]!='Y') {
						resposta = 'N';
					}
				}
			}
		}
		if (vetor[0]=='z' || vetor[0]=='Z') {
			for (i=0; i<1050; i++) {
				if (vetor[i]==' ') {
					if (vetor[i+1]!='z' && vetor[i+1]!='Z') {
						resposta = 'N';
					}
				}
			}
		}
		printf("%c\n", resposta);
	}
	return 0;
}
