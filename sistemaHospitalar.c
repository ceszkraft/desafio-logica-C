#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct paciente
{
    int id;
    long int cpf;
    char nome[100];
    char sexo[15];
    int idade;
};

int main()
{
	
    int i = 0, sick, ans, count = 0, control = 1;
    struct paciente pacientes;
    pacientes.id = 1;
	setlocale(LC_ALL, "Portuguese");

    while(control == 1 ){
    
    puts("Cpf:");
    scanf("%ld", &pacientes.cpf);
    fflush(stdin);
    
    puts("Nome");
    scanf("%s", pacientes.nome);
    fflush(stdin);
    
    puts("Sexo");
    scanf("%s", pacientes.sexo);
	fflush(stdin);
	
    puts("Idade");
    scanf("%d", &pacientes.idade);
	fflush(stdin);
	
    puts("0 - N�o\t1 - Sim");
    
    puts("Teve febre?");
    scanf("%d", &ans);
   
    if(ans == 1)
        count += 5;
   
    puts("Tem dor de cabeca?");
    scanf("%d", &ans);
    if(ans == 1)
        count += 1;
   
    puts("Tem secre��o nasal ou espirros?");
    scanf("%d", &ans);
    if(ans == 1)
       count += 1;
    
    puts("Tem dor/irrita��o na garganta?");
    scanf("%d", &ans);
    if(ans == 1)
       count += 1;
    
   
    puts("Tem tosse seca?");
    scanf("%d", &ans);
    if(ans == 1)
       count += 3;
    
    
    puts("Tem dificuldade respirat�ria? ");
    scanf("%d", &ans);
    if(ans == 1)
       count += 10;
    
    
    puts("Tem dores no corpo? ");
    scanf("%d", &ans);
    if(ans == 1)
       count += 1;
    
    puts("Tem diarr�ia? ");
    scanf("%d", &ans);
    if(ans == 1)
       count += 1;
    

    puts("Esteve em contato, nos �ltimos 14 dias, com um caso diagnosticado com COVID-19? ");
    scanf("%d", &ans);
    if(ans == 1)
       count += 10;
    

    puts("Esteve em locais com grande aglomera��o? ");
    scanf("%d", &ans);
    if(ans == 1)
       count += 3;
    
    system("cls");
    

    puts("Dados do paciente");
    printf("Paciente n�mero: %d\n", pacientes.id);
    printf("Nome:%s\nCPF:%ld\nSexo:%s\nIdade:%d\n",pacientes.nome, pacientes.cpf, pacientes.sexo, pacientes.idade);
    
    if(count <= 9){
    	printf("Situa��o do paciente: Risco baixo\n");
	}else if (count > 10 && count <= 19){
    	printf("Situa��o do paciente: Risco moderado\n");
    }else{
		printf("Situa��o do paciente: Risco alto\n");
	}
    pacientes.id += 1;

    puts("\n");
    puts("Deseja continuar? 0 - NAO\t1 - SIM");
    scanf("%d", &control);
    
    }
}
