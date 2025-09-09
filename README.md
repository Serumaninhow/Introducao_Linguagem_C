# Básico da linguagem C

O intuito desse resumo é apresentar um básico de linguagem C. 

> Espera-se que o leitor saiba *lógica de programação*, tenha instalado algum editor de texto com suporte à linguagem C e com o compilador GCC.

## Forma do Código

```C
#include <stdio.h>     // standard I/O
#include <stdlib.h>    // standard library

int main(){            // mentodo Main

	printf("Hello World \n");
	return 0;

}
```

- **include** introduz *bibliotecas* ou *TAD's* (Tipo abstrato de dado) .
- **main** indica o método principal a ser executado.
- `printf` mostra a mensagem `Hello World`.
- `return 0` indica final de execução do `main`.

> A linguagem C suporta operações aritméticas (+, -, *, /, %), operações relacionais (==, >=, <=, <, >), operações lógicas (&&, ||, !) e operações bit a bit (&, |, ~, ^, <<, >>).

## Tipos Embutidos

- `int, float, double, char` e `void` são, respectivamente inteiro, ponto flutuante, ponto flutuante maior, caractere e tipo não definido.
- `signed, unsigned, short` e `long` são modificadores de tamanho.

> Cada tipo embutido com ou sem modificador suporta determinada faixa de valores, uma vez que pode-se ter quantidade diferentes de memória reservada.

## Leitura/Impressão

- A função `printf` imprime dados formatados.
- A função `scanf` lê tipos embutidos.

```C
#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero: ");   
    scanf("%d", &numero);           
    printf("Você escreveu o numero %d.\n", numero);
    return 0;
}
```

> Os formatos possíveis são ``%d`` (inteiro), ``%f`` (float), ``%c`` (caractere), ``%s`` (string).

- Constantes são valores declarados no início do código e que não podem ser alterados enquanto execução do programa.

```C
#define PI 3.1415     		  
const double Euler = 2.7182;
```

## Condicionais

- ``if``: executa código se a condição for verdadeira.
- ``else``: trata o caso contrário.
- ``else if``: permite testar múltiplas condições.

```C
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

``switch``: útil quando há várias opções, usando ``case`` e ``break``.

```C
#include <stdio.h>
int main(){
	int a;
	printf("Escreva um numero entre 1 e 3: ");
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
		default:
			printf("Opcao invalida para te cumprimentar!\n");
			break;
	}
	return 0;
}
```
O operador ternário `?` é um atalho para o ``if/else``, de maneira reduzida.

```
condiçao ? retorna_valor1_se_verdadeiro : retornar_valor2_se_falso;
```

## Loops

- `for` é um loop por contagem. 
- `while` é um loop lógico.
- `do/while` é semelhante ao while, mas a condição de parada aconteceu no final.

```C
#include <stdio.h>

int main() {
    // for: executa de 1 até 5
	int i;
    for (i = 1; i <= 5; i++) {
        printf("for -> i = %d\n", i);
    }

    // while: executa enquanto a condição for verdadeira
    int j = 1;
    while (j <= 5) {
        printf("while -> j = %d\n", j);
        j++;
    }

    // do/while: executa ao menos uma vez
    int k = 1;
    do {
        printf("do/while -> k = %d\n", k);
        k++;
    } while (k <= 5);

    return 0;
}
```

## Sequências

- *Array* (vetor): estrutura que armazena elementos do mesmo tipo.
- Índices numéricos começam em zero.
- Possui tamanho fixo, definido na declaração (ex.: ``int numeros[5];``).
- Acesso/atribuição é feito pelo índice (ex.: ``numeros[0] = 10;``).
- O array não guarda sua dimensão.

```C
#include <stdio.h>

int main() {
    int numeros[5];  // declara array de 5 inteiros

    // atribuindo valores
    numeros[0] = 10;
    numeros[1] = 20;
    numeros[2] = 30;
    numeros[3] = 40;
    numeros[4] = 50;

    // percorrendo o array
    for (int i = 0; i < 5; i++) {
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

    return 0;
}
```

- Há também *arrays* multidimensionais.

```C
// codigo que lê uma matriz 2x2 e printa o determinante dela
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

## Strings 

- Strings são *Arrays* do tipo `char`.
- A cadeia de caractere termina em nulo `'\0'`
- `fgets` lê strings.
- `fputs` imprime strings.

```C
#include <stdio.h>
#include <stdlib.h>

int main(){ 
	char nome[40];
	char mensagem[20] = "Seu nome eh: ";
	printf("Escreva seu nome: ");
	fgets(nome, sizeof(nome), stdin);
	printf("Eh um prazer te conhecer, ");
	fputs(nome, stdout);
	return 0;
}
```

> A `string.h` contém um conjunto amplo de funções que operam sobre `strings`, como concatenação e comparação entre strings.

## Estruturas

- **structs** permitem agrupar diferentes variáveis sob um único nome.
- O acesso aos membros é feito com o operador ponto (`.`), ou seta (`->`) quando usamos estruturas referenciadas por ponteiros.

```C
#include <stdio.h>
#include <string.h>

struct aluno{
	int idade;
	char nome[50];
	char matricula[8];
};

typedef struct aluno al; // redefinindo struct aluno para tipo al

int main(){
	al registro;
	registro.idade = 21;
	strcpy(registro.nome, "Thiago Seru");
	strcpy(registro.matricula, "20232023");

	printf("O aluno de nome %s,", registro.nome);
	printf("de %d anos de idade, e ", registro.idade);
	printf("matricula %s.\n", registro.matricula);

	return 0;
}
```

> Pode-se usar o comando *typedef* para redifinir o nome de um tipo de dado.

## Ponteiros

- **Ponteiros** são variáveis que armazenam endereço de memória.
- Podem ser usados para retorno por referência em funções, alocação dinâmica de memória e manipulação de arrays e strings. 
- O operador `*` serve para declaração, acesso ou desreferência sobre o ponteiro.

```C
#include <stdio.h>

int main() {
    int n = 10;
    int *p;
    p = &n;     

    printf("Valor de n: %d\n", n);          
    printf("Endereco de n: %lld\n", (long long int)p);     
    printf("Valor armazenado na ref. do ponteiro: %d\n", *p); 

    *p = 20;    
    printf("Novo valor de n: %d\n", n);

    return 0;
}
```

> O operador `&` obtém o endereço de uma variável/ponteiro.

- Arrays são ponteiros que aponta para o primeiro endereço de memória da sua sequência
- **aritmética de ponteiros** permite manipulação sobre um ponteiro que referencia algum *Array*.

```C
#include <stdio.h>
#include <stdlib.h>

int main(){
	int vet[5]= {1,2,3,4,5};
	int *p = vet;
	int i;

	printf("Sequencia por aritmetica de ponteiros: ");
	for (i = 0;i < 5;i++){
		printf("%d ",*p);
		p++;
	}
	return 0;
}
```

> Manipulação de ponteiros é um mecanismo chave para uso de funções e para estruturas de dados.

## Funções

- **Funções** são blocos de código reutilizáveis.
- **Funções** podem receber valores de entrada, chamados parâmetros, e podem retornar por **valor**, por **referência** ou ambas as formas.

```C
#include <stdio.h>

// retorno por valor
int soma(int a, int b){
	return a + b;
}

int main(){
	int n1 = 10;
	int n2 = 20;
	int n3 = soma(n1, n2);
	printf("%d + %d = %d\n", n1, n2, n3);
	return 0;
}
```

- Funções que não retornam nenhum valor tem o tipo *void*.

```C
#include <stdio.h>

void soma(int a, int b, int *res){
	*res = a + b;
}

int main(){
	int n1 = 10;
	int n2 = 20;
	int n3;
    soma(n1, n2, &n3);
	printf("%d + %d = %d\n", n1, n2, n3);
	return 0;
}
```

- **funções recursivas** permitem chamadas sobre elas mesmas.

```C
#include <stdio.h>

long int fatorial(int n){
	if(n > 1){
		return n * fatorial(n-1);
	}
	return 1;
}

int main(){
	int n = 10;
	long int res = fatorial(n);
	printf("%d! = %ld\n", n, res);
	return 0;
}
```

> Deve-se ter cuidado ao se usar funções recursivas, pois tendem a consumir muita memória.

## Alocação Dinâmica

- **alocação dinâmica** é reservar espaço de memória em tempo de execução.
- `sizeof` retorna a quantidade de bytes que um tipo/variável possuí.
- ``malloc`` aloca memória de tamanho especificado, retornando um ponteiro ``void*``.
- ``calloc`` aloca memória para n elementos e inicializa todos os bytes com zero, também de tipo ``void*``.
- ``realloc`` redimensiona uma área de memória previamente alocada.
- ``free`` libera a memória alocada dinamicamente para evitar vazamentos (memory leaks).

```C
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	int n = 3;

	int *p1 = (int*) malloc(n * sizeof(int));

	p1[0] = 1;
    p1[1] = 2;
    p1[2] = 3;

	for(i = 0; i< n; i++){
		printf("%d ", *(p1+i));
	}         
	return 0;
}
```

> É comum utilizar algum `cast` antes de `malloc`, `calloc` ou `realloc`.

## Arquivo

- ``fopen`` abre arquivos em diferentes modos.
- ``fputs`` e ``fprintf`` servem para gravar dados formatados.
- ``fwrite`` serve para gravar blocos de memória.
- ``fgets`` e ``fscanf`` permitem leitura de dados formatados.
- ``fread`` serve para ler blocos de memória em arquivos binários. 
- ``remove`` que exclue um arquivo do sistema, permanentemente.
- O ponteiro do tipo ``FILE *`` permite a referência para arquivos.

```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	FILE *arq;
	char mensagem[20] = "Bom dia!\n";
	arq = fopen("bom_dia.txt","a");

    if(arq == NULL){
        arq = fopen("bom_dia.txt", "w+");
        if(arq == NULL){
            printf("ERRO AO ABRIR O ARQUIVO!\n");
            exit(1);
        }
    }
    
	fputs(mensagem, arq);
	fclose(arq);
	return 0;
}
```

> Após o uso do arquivo, deve-se fechá-lo com o uso da função ``fclose(ponteiro);``.

## Considerações Finais

Conhecer algum básico da sintaxe da linguagem C é fundamental para desenvolver uma compreensão sólida de programação estruturada/procedural e de baixo nível. Mesmo aprendendo apenas estes conceitos essenciais, já é possível escrever programas funcionais, compreender o fluxo de execução e interagir diretamente com a memória. Não o bastante, esse conhecimento ajuda a solidificar uma base para aprender outras linguagens derivadas ou de nível mais alto.

> Linguagens como Java, C++, C# e JavaScript mantém algumas características na sintaxe praticadas na linguagem C.

### Fonte Bibliográfica

BACKES, André. Linguagem C: Completa e Descomplicada. 2. ed. Rio de Janeiro: GEN – Grupo Editorial Nacional, 2018. ISBN 978-85-352-9106-3.

Rodrigo Cardoso. *Lógica de programação: o que é e para que serve?* Publicado no [site da LocaWeb](https://www.locaweb.com.br/blog/temas/codigo-aberto/logica-de-programacao-o-que-e/).


