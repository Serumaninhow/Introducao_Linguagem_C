# Diario de bordo da linguagem C

## 1 - Introdução e Forma do Código

```C
#include <stdio.h>     // importando a biblioteca stdio.h
#include <stdlib.h>    // importando a biblioteca stdlib.h
int main(){            // bloco de execução principal
	printf("Hello World \n");     // printando no console "Hello World"
	return 0;                     // marca final do bloco principal
}
```

- O comando **include** introduz *bibliotecas* ou *TAD's* (Tipo abstrato de dado)

- A linguagem tem *tipagem forte* e é *case-sensitive*, ou seja, ```int X != int x```

## 2 - Tipos primitivos, Constantes, Modificadores, Operadores, Variáveis, Leitura e Escrita de dados

- Tipos primitivos são ```int, float, double, char e void```
- Modificadores de variáveis são:
	- *signed* → forma padrão;
	- *unsigned* → valores maiores ou igual a 0;
	- *short* → menos memória;
	- *long* → mais memória;

| Tipo | Bits | Intervalo de valores |
|:---:|:---:|:---:|
| char | 8 | -128 A 127 |
| signed char| 8 | -128 A 127 |
| unsigned char| 8 | 0 A 255 |
| int | 32 | -2.147.483.648 A 2.147.483.647 |
| signed int | 32 |-2.147.483.648 A 2.147.483.647|
| unsigned int | 32 |0 A 4.294.967.295 |
| short int | 16 | -32.768 A 32.767 |
| long int | 64 | -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807.  |
| unsigned long int | 64 | 0 A 18.446.744.073.709.551.615 |
| unsigned short int| 16 | 0 A 65.535 |
| float | 32 | 1,175494E-038 A 3,402823E+038 |
| double | 64 | 2,225074E-308 A 1,797693E+308 |
| long double | 96 | 3,4E-4932 A 3,4E+4932 |


``` 
// Leitura e impressão de variáveis dos tipos básicos

int n1;                                // Inteiro n1
scanf("%d", &n1);                      // Lendo n1
printf("%d\n", n1);                    // Escrevendo n1

float n2;                              // Ponto flutuante n2
scanf("%f", &n2);                      // Lendo n2
printf("%f\n", n2);                    // Escrevendo n2

double n3;							   // Ponto flutuante maior n3
scanf("%lf", &n3);                     // Lendo n3
printf("%lf\n", n3);                   // Escrevendo n3

long double n4;                        // Ponto flutuante n4 maior ainda
scanf("%llf", &n4);                    // Lendo n4
printf("%llf\n", n4);                  // Escrevendo n4

char c;                                // Caractere c
scanf("%c", &c);                       // Lendo o caractere c
printf("%c\n", c);                     // Escrevendo c
```

| **Operador**   | **Símbolo** | **Tipo** |
| :------: | :------: | :------: |
| Igual | `==` | Relacional |
| Diferente |`!=`| Relacional |
| Menor | `<` | Relacional |
| Maior | `>` | Relacional |
| Menor igual | `<=`| Relacional |
| Maior igual |`>=`| Relacional |
| And | ` && ` | Lógico |
| Or | ` \|\| ` | Lógico |
| Not | ` ! ` | Lógico |
| Adição | ` + ` | Aritmético |
| Subtração | ` - ` | Aritmético |
| Multiplicação | ` * ` | Aritmético |
| Divisão | ` / ` | Aritmético |
| Resto | ` % ` | Aritmético |
| And | ` & ` | bit a bit |
| Or | ` \| ` | bit a bit |
| Complemento | ` ~ ` | bit a bit |
| Xor | ` ^ ` | bit a bit |
| Recua bit | ` >> ` | bit a bit |
| Avança bit | ` << ` | bit a bit |

- Constantes são valores declarados no início do código e que não podem ser alterados enquanto execução do programa, apenas podendo ser utilizados.

- Pode-se definir constantes das seguintes formas:

```
#include <stdio.h>
#define PI 3.1415     		     //Definindo PI
const double Euler = 2.7182;     //Definindo Euler

int main(){
	printf("pi = %.4lf\n", PI);
	printf("euler = %.4lf\n", Euler);
	return 0;
}
```

## 3 - Estruturas de Condicionais e de Iteração 

- As estruturas de condicionais determinam fluxos durante a execução do programa.

- Há os comandos *if/else* e *switch/case*, a seguir exemplos de uso.

```
#include <stdio.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a > b){
		printf("%d eh maior que %d\n", a, b);
	}else if(a < b){
		printf("%d eh menor que %d\n", a, b);
	}else{
		printf("%d eh igual a %d\n", a, b);
	}
	return 0;
}
```

```
#include <stdio.h>
int main(){
	int a;
	printf("Escreva um numero entre 1 e 4: ");
	scanf("%d", &a);
	switch(a){
		case 1:
			printf("Bom dia!\n");
			break;
		case 2:
			printf("Boa tarde!\n");
			break;
		case 3:
			printf("Boa noite!\n");
			break;
		case 4:
			printf("Feliz Natal!\n");
			break;
		default:
			printf("Opcao invalida para te cumprimentar!\n");
			break;
	}
	return 0;
}
```
- Operador ternário *?/:* é uma resumida do *if/else*. Seu significado para a sentença *a>b?a:b* equivale à forma "se *a* for maior que *b*, retorna *a*, senão retorna *b*". A seguir, um exemplo de uso.

```
#include <stdio.h>
int main(){
	int a, b, maior;
	scanf("%d %d", &a, &b);
	maior = (a > b)?a:b;
	printf("%d eh o maior entre as entradas!\n", maior);
	return 0;
}
```
- Estruturas de iteração servem para determinar repetições, existem estruturas orientadas a contagem (*for*) e a lógica (*while* e *do/while*). A seguir, há três exemplos de uso dessas estruturas.

```
#include <stdio.h>
int main(){
	int n, i;
	printf("Digite um valor positivo: ");
	scanf("%d", &n);
	printf("Receba a sequencia de 1 ate %d.\n", n);
	for(i = 1; i <= n; i++){
		printf("%d ", i);
	}
}
```
```
#include <stdio.h>
int main(){
	int n, i;
	printf("Digite um valor positivo: ");
	scanf("%d", &n);
	printf("Receba a sequencia de 1 ate %d, de forma decrescente.\n", n);
	while(n > 0){
		printf("%d ", n);
		n--;
	}
}
```
```
#include <stdio.h>
int main(){
	int n, i;
	printf("Digite um valor positivo: ");
	scanf("%d", &n);
	printf("Receba a sequencia de 0 ate %d, de forma decrescente.\n", n);
	do{
		printf("%d ", n);
		n--;
	}while(n > 0)
}
```

- A principal diferença entre *while* e *do/while* é o momento em que há a verificação para continuar/encerrar o loop \- ou simplesmente condição de parada \- no primeiro comando é feito antes de começar a iterar. Já no segudo, isso acontece ao final do bloco de repetição.

## 4 - Arrays Uni e Multidimensionais e Strings
- Arrays são sequências de algum tipo primitivo ou estruturas. Imediatamente abaixo, há exemplos de declaração e uso de arrays.

```
// codigo que lê dez números e printa a soma entre eles
#include <stdio.h>
int main(){
	int vetor[10], i, soma = 0; // arrays de dez posições
	printf("Digite dez numeros: ");
	for(i = 0; i < 10; i++){
		scanf("%d", &vetor[i]);
		soma+=vetor[i];
	}
	printf("%d", vetor[0]);
	for(i = 1; i < 10; i++>){
		printf(" + %d", vetor[i]);
	}
	printf(" = %d\n", soma);
	return 0;
}
```

```
// codigo que lê duaz matrizes 3x3 e printa a multiplicação entre elas
#include <stdio.h>
int main(){
	int m[2][2], det, i, j, k;
	printf("Matriz A 2x2\n");
	for(i = 0; i<2 ; i++){
		for(j = 0; j<2; j++){
			scanf("%d", &m[i][j]);
		}
	}
	det = m[0][0] * m[1][1] - m[0][1] * m[1][0];
	printf("O determinante da matriz A = %d\n", det);
	return 0;
}
```

- Strings são arrays do tipo caractere ``` char str[20]; ```

- A última posição da string é sempre um *\0*, ou seja, em uma string *str* de 20 posições preenchidas, a posição *str[19]* tem o caractere *\0*.

- Pode-se ler strings das seguintes formas:
``` 
// Formas de leitura de strings

char nome[20]; // String com 19 posições
gets(nome); //input até "\n"
fgets(nome, 20, stdin); //input até "\n"
scanf("%s", nome); //input até " "
scanf("%[^\n]", str); \\ input até "\n"

// Formas de escrita de strings

char nome[10] = "Roberto";
printf("%s", nome);
puts(nome);
fputs(nome,stdout); //input até "\n"
scanf("%s", nome); //input até " "
scanf("%[^\n]", str); \\ input até "\n"
```
- Comandos para manipulação de strings:
```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){ 
	char str1[10] = "Bom ";
	char str2[10] = "dia!";
	char str3[10];
	int comparacao;
	strcpy(str3, str2); 	// copia a string str2 para str3
	strcat(str1, str2); 	// concatena str2 em str1
	comparacao = strcmp(str3, str2); 	// 0 para nenhuma diferença encontrada
	if(comparacao == 0){
		printf("str3 e str2 sao iguais!\n");
	}
	puts(str1); // retorna "Bom dia"
	return 0;
}
```
- Caso haja excesso de leituras durante da execução do programa, pode-se tentar esvaziar o *buffer* de entrada com o comando ```setbuf(stdin, NULL); ```

## 5 - Estruturas e Introdução a Funções

- Funções são blocos de código reutilizáveis que executam tarefas específicas, esta característica ajuda a organizar/modularizar os programas, facilitando a manutenção/legibilidade do código. 

- Funções podem receber valores de entrada, chamados parâmetros, e podem retornar um valor como resultado.

- O cabeçalho de uma função é da seguinte forma:
``` 
tipo nomeDaFuncao(tipo nomeDoTipo){
	...
	blocos de comandos
	...
	return valor;
} 
```

- Funções que não retornam nenhum valor tem o tipo *void*.

```
#include <stdio.h>
int soma(int a, int b){
	return a + b;
}
int main(){
	int n1 = 10, n2 = 20;
	printf("%d + %d = %d\n", n1, n2, soma(n1, n2));
	return 0;
}
```
```
#include <stdio.h>
void multiplica(int a, int b){
	printf("%d * %d = %d\n", a, b, a*b);
}
int main(){
	int n1 = 10, n2 = 20;
	multiplica(n1, n2);
	return 0;
}
```

- Funções recursivas são tais que chamam elas mesmas dentro de seus blocos.

```
#include <stdio.h>
long int fatorial(int n){
	if(n > 1){
		return n * fatorial(n-1);
	}
	return 1;
}
int main(){
	int n = 10;
	printf("%d! = %ld\n", n, fatorial(n));
	return 0;
}
```
```
#include <stdio.h>
void printarSequencia(int n){
	if(n > 0){
		printarSequencia(n-1);
		printf("%d ", n);
	}
}
int main(){
	int n = 5;
	printarSequencia(5);
	return 0;
}
```

- Estruturas são tipos de dados definidos pelo programador, que permitem representar conjuntos de informações com atributos específicos. Por exemplo, uma estrutura que representa um aluno pode conter campos como nome, idade e matrícula.

- Utiliza-se o comando *struct* para definir estruturas.

- Pode-se usar o comando *typedef* para redifinir o nome de um tipo de dado.

```
#include <stdio.h>
struct aluno{
	int idade;
	char nome[50];
	char matricula[8];
};
typedef struct aluno al; // redefinindo struct aluno para al
int main(){
	al registro;
	printf("Idade do aluno: ");
	scanf("%d", &registro.idade);
	getchar();
	printf("Nome do aluno: ");
	scanf("%[^\n]", registro.nome);
	getchar();
	printf("Matricula do aluno: ");
	scanf("%[^\n]", registro.matricula);
	printf("\nO registro do aluno ficou:\n");
	printf("idade: %d \nNome: %s \nMatricula: %s", registro.idade, registro.nome, registro.matricula);
	return 0;
}
```

- Agora implementado funções para ler/printar a instancia de uma struct renomeada para aluno:

```
#include <stdio.h>

typedef struct{
	int idade;
	char nome[50];
	char matricula[8];
} aluno;

aluno lerAluno(){
	aluno registro;
	printf("Idade do aluno: ");
	scanf("%d", &registro.idade);
	getchar();
	printf("Nome do aluno: ");
	scanf("%[^\n]", registro.nome);
	getchar();
	printf("Matricula do aluno: ");
	scanf("%[^\n]", registro.matricula);
	return registro;
}

void printaAluno(aluno al){
    printf("Registro do aluno\n");
	printf("idade: %d \nNome: %s \nMatricula: %s", al.idade, al.nome, al.matricula);
}

int main(){
	aluno a = lerAluno();
	printaAluno(a);
	return 0;
}
```

## 6 - Ponteiros

- Ponteiros são variáveis que armazenam endereços de memória.

- Quando utilizamos arrays, discretamente trabalhamos com ponteiros.

- Um ponteiro pode ser declarado para qualquer tipo *primitivo* ou *structs*.

- Para declarar um ponteiro, utiliza-se o operador * (asterisco), por exemplo, um ponteiro *p* do tipo inteiro: `int *p`

- Para fazer um ponteiro apontar, pode-se fazê-lo apontar para um variável já existente no programa, utilizando o operador de endereçamento (*&*) da seguinte forma:

```
#include <stdio.h>
int main(){
	int valor = 10;
	int *p;
	p = &valor;
	printf("Conteudo que p aponta: %d\n", *p);
	*p = 12;
	printf("Conteudo que p aponta: %d\n", *p);
	printf("Conteudo de valor: %d\n", valor);
	return 0;
}
```

- Determinar o tipo do ponteiro apenas determina ao tipo de dado que o ponteiro aponta, não limitando um ponteiro que aponta para tipo *int* posteriormente aponte para uma variável do tipo float, mas isso resulta em comportamentos incorretos no programa. Por exemplo:
```
#include <stdio.h>
int main(){
	int *p1, *p2, valor = 10;
	float real = 20.0;
	p1 = &valor;
	printf("Conteudo que p1 aponta: %d\n", *p1);
	p2 = &real;
	printf("Conteudo que p2 aponta: %d\n", *p2);
	printf("Conteudo que p2 aponta: %f\n", *p2);
	printf("Conteudo que p2 aponta: %f\n", *((float*)p2)); //usando cast
	return 0;
}
```

- Ponteiros podem receber valores hexadecimais como endereços de memória, por exemplo:

```
#include <stdio.h>
#include <stdlib.h>
int main(){
	int *p = 0x3F2;  // hexadecimal em C começa com 0x + numero em hexadecimal
    int *p1 = 1250;  //O valor em decimal é convertido para seu valor hexadecimal: 0x4E2
    printf("Endereco em p: %p \n",p);
    printf("Endereco em p1: %p \n",p1);
    system("pause");
    return 0;
}
```

- Duas operaçãos aritméticas são possíveis em ponteiros: incremento e decremento.

```
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p = 0x5DC;
    printf("p = Hexadecimal: %p Decimal: %d \n",p,p);
    //Incrementa p em uma posição
    p++;
    printf("p = Hexadecimal: %p Decimal: %d \n",p,p);
    //Incrementa p em 10 posições
    p = p + 10;
    printf("p = Hexadecimal: %p Decimal: %d \n",p,p);
    //Decrementa p em 4 posições
    p = p - 4;
    printf("p = Hexadecimal: %p Decimal: %d \n",p,p);
    return 0;
}
```

- Nota-se que a cada posição incrementada, houve-se um incremento de 4 unidades, o número de bytes que um inteiro possui em linguagem C.

- Os ponteiros genéricos podem apontar para qualquer tipo de dado, e são declarados no tipo void: `void *ponteiro;`

```
#include <stdio.h>
#include <stdlib.h>
int main(){
    void *p;
	int inteiro = 10;
	float real = 25.5;
	char letra = 't';
	p = &inteiro;
	printf("Conteudo apontado por p: %d\n", *(int*)p); 
	p = &real;
	printf("Conteudo apontado por p: %f\n", *(float*)p); 
	p = &letra;
	printf("Conteudo apontado por p: %c", *(char*)p);
	return 0;
	//obs: sempre é necessário o uso de typecast antes do ponteiro para exibir seu valor
}
```

- A relação entre ponteiros e arrays é que um array é um ponteiro que aponta para o primeiro endereço de memória da sua sequência, então pode-se fazer a mesma relação:

```
#include <stdio.h>
#include <stdlib.h>
int main(){
	int vet[5]= {1,2,3,4,5};
	int *p = vet;
	int i;
	printf("Sequencia por aritmetica de ponteiros: ");
	for (i = 0;i < 5;i++)
		printf("%d ",*(p+i));
	printf("\nSequencia por indice assim como em arrays: ");
	for (i = 0;i < 5;i++)
		printf("%d ",p[i]);
	return 0;
}
```

- Pode-se haver ponteiros que apontam para ponteiros, e estes que apontam para outros ponteiros, e assim por diante. Por exemplo:

```
#include <stdio.h>
#include <stdlib.h>
int main(){
	char letra='a';
	char *ptrChar = &letra;
	char **ptrPtrChar = &ptrChar;
	char ***ptrPtr = &ptrPtrChar;
	printf("Conteudo em *ptrChar: %c\n",*ptrChar);
	printf("Conteudo em **ptrPtrChar: %c\n",**ptrPtrChar);
	printf("Conteudo em ***ptrPtr: %c\n",***ptrPtr);
	return 0;
}
```

## 7 - Funções+ e Alocação dinâmica de memória

- Sabendo do poder dos ponteiros, agora pode-se formular funções do tipo void que retornam algum valor para alguma referência/parâmetro no cabeçalho, basta o esqueleto da função portar algum parâmentro como ponteiro, por exemplo:

```
#include <stdio.h>
void leMatriz(int t, int m[t][t]){
	int i, j;
	for(i=0;i<t;i++){
		for(j=0;j<t;j++){
			scanf("%d", &m[i][j]);
		}
	}
}
void printaMatriz(int t, int m[t][t]){
    int i, j;
	for(i=0;i<t;i++){
		for(j=0;j<t;j++){
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int m1[3][3], m2[3][3], m3[3][3], soma, i, j, k;
	printf("Matriz A\n");
	leMatriz(3, m1);
	printf("Matriz B\n");
	leMatriz(3, m2);
	for(i=0;i<3;i++){
	    for(j=0;j<3;j++){
	        soma = 0;
	        for(k=0;k<3;k++){
	            soma += m1[j][k] * m2[k][j];
	        }
	        m3[i][j] = soma;
	    }
	}
	printf("Matriz A x B\n");
	printaMatriz(3, m3);
	return 0;
}
```

- A alocação dinâmica de memória é uma técnica usada em programação para reservar espaço na memória durante a execução de um programa, em vez de no momento da sua compilação. Essa abordagem é especialmente útil quando o tamanho dos dados a serem manipulados não é conhecido previamente, permitindo maior flexibilidade e eficiência no uso dos recursos do sistema.

- A função `sizeof(tipo/variável);` retorna a quantidade de bytes que um tipo/variável possuí.

- A função `(typecast*) malloc(tamanho * sizeof(typecast));` aloca memória em um ponteiro para um vetor com o *tamanho* informado.

- A função `(typecast*) calloc(tamanho, sizeof(typecast));` aloca memória em um ponteiro para um vetor com o *tamanho* informado, mas zerando cada posição.

- A função `realloc(ponteiro, tamanho * sizeof(typecast));` realoca memória de um ponteiro para um novo *tamanho*;

- A função `free(ponteiro)` desaloca memória de um ponteiro que anteriormente obteve espaço alocado.

```
#include <stdio.h>
#include <stdlib.h>
int main(){
	printf("A quantidade de memória que um inteiro possui: %ld bytes\n", sizeof(int));

	int *v1 = (int*) malloc(3 * sizeof(int));  // alocando um vetor de 3 posições
	int *v2 = (int*) calloc(3, sizeof(int));   // alocando um vetor de 3 posições e zerando
	v2 = realloc(v2, 5 * sizeof(int));         // Realocando em v2 mais duas posições
	free(v1);                                  // Desalocando a memória de v1
	free(v2);                                  // Desalocando a memória de v2
	return 0;
}
```
```
#include <stdio.h>
#include <stdlib.h>
int main(){
	int **p;
	int i, j, n = 2;
	p = (int**) malloc(n*sizeof(int*));
	for (i = 0; i < n; i++){
	    p[i] = (int *) malloc(n*sizeof(int));
	    for (j = 0; j < n; j++)
	        scanf("%d", &p[i][j]);
	}
	printf("Sua matriz lida:\n");
	for (i = 0; i < n; i++){
	    for (j = 0; j < n; j++){
	        printf("%d ", p[i][j]);
	    }
	    printf("\n");
	}
	for(i=0;i<n;i++){
	    free(p[i])
	}
	free(p);
	return 0;
}
```
## 8 - Arquivo

- A linguagem C trabalha com apenas dois tipos de arquivos: arquivos texto e arquivos binários.

- Para manipular arquivos, deve-se usar um ponteiro especial do tipo *FILE* e atribuir ao ponteiro a abertura do arquivo com *fopen("nome_arquivo", modo_operação)*.

- O parâmetro *"nome_arquivo"* pode receber tanto o nome quanto o caminho absoluto do arquivo no sistema. Por exemplo: "info.txt" ou "C:\\\Users\\\User\\\Desktop\\\programa1\\\info.txt".

- Quando há algum erro na operação do *fopen*, a função retorna **NULL** ao ponteiro.

- Após o uso do arquivo, deve-se fechá-lo com o uso da função *fclose(ponteiro)*

|*Modo*|*Tipo de Arquivo*|*Função*|
|:---:|:---:|:---|
|"r"|texto|leitura em arquivo existente|
|"w"|texto|escrita em arquivo existente ou não|
|"a"|texto|escrita no final|
|"rb"|binário|leitura em arquivo existente|
|"wb"|binário|escrita em arquivo existente ou não|
|"ab"|binário|escrita no final|
|"r+"|texto|leitura/escrita em arquivo existente|
|"w+"|texto|leitura/escrita em arquivo existente ou não|
|"a+"|texto|leitura/escrita no final|
|"r+b"|binário|leitura/escrita em arquivo existente|
|"w+b"|binário|leitura/escrita em arquivo existente ou não|
|"a+b"|binário|leitura/escrita no final|

```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	FILE *arq;
	char mensagem[20] = "Bom dia!\n";
	arq = fopen("bom_dia.txt","a");
    if(arq == NULL){
        //arq = fopen("bom_dia.txt", "w+");
        //if(arq == NULL){
            printf("ERRO AO ABRIR O ARQUIVO!\n");
            exit(1);
        //}
    }
	fputs(mensagem, arq);
	fclose(arq);
}
```

- Em implementações mais robustas, talvez queira-se forçar a operação de escrita no arquivo, uma vez que o *fputs* pode falhar. Assim, utiliza-se o *fflush(ponteiro)*.

- Para escrita e leitura de sequências de bytes (tipo primitivo ou estrutura), utiliza-se respectivamente

```
fwrite(ponteiro_dado, sizeof(ponteiro_dado[0]), tamanho_sequencia, ponteiro_arquivo);

fread(ponteiro_dado, sizeof(ponteiro_dado[0]), tamanho_sequencia, ponteiro_arquivo);
```

```
#include <stdio.h>
#include <stdlib.h>

// escrevendo um vetor em um txt chamado contagem

int main(){
	FILE *f;
	int v[5], i;
	printf("digite 5 numeros: ");
	for(i = 0; i < 5; i ++){
		scanf("%d", &v[i]);
	}
	f = fopen("contagem.txt", "w");
	if(f == NULL){
		printf("ERRO!\n");
		exit(1);
	}
	fwrite(v, sizeof(v[0]), 5, f);
	fclose(f);
	return 0;
}
```
```
#include <stdio.h>
#include <stdlib.h>

// lendo o que o código anterior escreve

int main(){
	FILE *f;
	int v[5], i;
	printf("digite 5 numeros: ");
	f = fopen("contagem.txt", "r");
	if(f == NULL){
		printf("ERRO!\n");
		exit(1);
	}
	fread(v, sizeof(v[0]), 5, f);
	printf("O vetor lido eh: ");
	for(i = 0; i < 5; i ++){
		printf("%d ", v[i]);
	}
	printf("\n");
	fclose(f);
	return 0;
}
```

- Para ler/escrever dados formatados, pode-se usar *fscanf* e f*printf*, como no exemplo abaixo.

```
#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *f;
	int i = 23;
	char nome[20] = "Thiago";
	float h = 1.78; 
	f = fopen("info.txt", "w");
	if(f == NULL){
		printf("ERRO!\n");
		exit(1);
	}
	fprintf(f, "Nome: %s\nIdade: %d\nAltura: %.2f\n", nome, i, h);
	fclose(f);
	return 0;
}
```
```
#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *f;
	int i;
	char nome[20], texto[20];
	float h; 
	f = fopen("info.txt", "r");
	if(f == NULL){
		printf("ERRO!\n");
		exit(1);
	}
    printf("A info lida foi:\n");
	fscanf(f, "%s %s", texto, nome);
	printf("%s %s\n", texto, nome);
    fscanf(f, "%s %d", texto, &i);
    printf("%s %d\n", texto, i);
    fscanf(f, "%s %f", texto, &h);
    printf("%s %.2f\n", texto, h);
	fclose(f);
	return 0;
}
```
- A função *ftell(arq)* retorna a posição atual do ponteiro do arquivo (em bytes desde o início), sendo um *long* com a posição atual ou *-1L* em caso de erro.

```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	FILE *f;
	f = fopen("arquivo.bin","rb");
	if(f == NULL){
		printf("Erro ao abrir arquivo");
		exit(1);
	}
	int tamanho;
	fseek(f,0,SEEK _ END);
	tamanho = ftell(f);
	fclose(f);
	printf("Quantidade de bytes no arquivo: %d:",tamanho);
	return 0;
}
```

- A função *fseek(arq, bytes_a_mover, começo)* move o ponteiro de leitura/escrita para uma posição específica no arquivo. Geralmente, utiliza-se `n*sizeof(dado)` para mover *n* posições seguindo a estrutura dos dados no arquivo. Como referência para *começo*, há `SEEK_SET`, `SEEK_CUR` e `SEEK_END`, que, respectivamente, correspondem ao início, ponto atual e final do arquivo.

```
#include <stdio.h>
#include <stdlib.h>

typedef struct{ 
	char nome[20], rua[20]; 
	int idade;
}cadastro;

int main(){
	FILE *f = fopen("arquivo.txt","wb");
	if(f == NULL){
		printf("ERRO\n");
		exit(1);
	}
	cadastro c,cad[4] = {"Ricardo","Rua 1",31,
						"Carlos","Rua 2",28,
						"Ana","Rua 3",45,
						"Bianca","Rua 4",32};
	fwrite(cad,sizeof(cadastro),4,f);
	fclose(f);
	f = fopen("arquivo.txt","rb");
	if(f == NULL){
		printf(“ERRO\n”);
		exit(1);
	}
	fseek(f,2*sizeof(cadastro),SEEK _ SET);
	fread(&c,sizeof(cadastro),1,f);
	printf("Chamada %s, residente da %s, numero %d\n",c.nome,c.rua,c.idade);
	fclose(f);
	return 0;
}

// Saída: Chamada Ana, residente da Rua 3, numero 45
```

- A função *rewind(arq)* serve para voltar a referência do arquivo referenciado pelo ponteiro *arq* para o começo.

- A função *remove("arquivo.txt")* deleta o arquivo do sistema de arquivos.

```
#include <stdio.h>
#include <stdlib.h>
int main(){
	int status;
	status = remove(“arquivo.txt”);
	if(status != 0){
		printf("ERRO\n");
		exit(1);
	}else
		printf("Arquivo removido!\n");
	return 0;
}
```

- A função *ferror(ponteiro_arquivo)* verifica se houve algum erro durante a manipulação do arquivo pelo ponteiro, retornando 0 para quando não houver erros.

- A função *perror(mensagem)* printa *mensagem* mais o erro encontrado na última operação para manipulação de arquivos ou alocação dinâmica.

```
#include <stdio.h>

int main() {
    FILE *fp = fopen("bazinga.txt", "r");
    if (fp == NULL) {
        perror("Tipo do erro");
    }
    return 0;
}

// Saída: Tipo do erro: No such file or directory
```
