# Clinica odontológica
Repositório como projeto final da disciplina Si200B UNICAMP-FT.

O intuito do programa eh basicamente criar um "CRUD" na linguagem C, onde será possivel:

- Cadastrar clientes; 
    
- Agendar consultas;
    
- Alterar consultas;
    
- Visualizar consultas;
    
- Cancelar consultas;

O programa vai ser desenvolvido na linguagem C e toda a interação do usuário será, através do terminal.

## Tecnologia utilizada
- Linguagem C;

## Requisitos
Nessa fase inicial, será necessário que a máquina possua um compilador C, como por exemplo o "GNU Compiler Collection - gcc". Assim, toda vez que o programa for rodar, é necessário compila-lo e posteriormente rodar.

## Como rodar a aplicação
#### Primeira vez utilizando o software:
- Fazer download do "Main.c";
- Fazer download dos dos arquivos ".txt";
- Colocar todos os arquivos na mesma pasta;
- Compilar o arquivo "Main.c"
- Rodar o arquivo "Main.c"
#### Demais vezes utilizando o software
- Rodar o arquivo "Main.c"

## Divisao de atividades segundo os autores

#### Eduardo Longhi:

- Cadastrar clientes
	- O usuário vai possuir uma tela a qual possui campos a serem preenchidos para cadastrar o
	paciente no banco de dados.
        
- Login
	- Toda vez que o responsável pelo gerenciamento interno de pacientes for utilizar o software,
	ele precisa realizar login no sistema.

#### Andre Gomes de Lima Braga:

- Agendamento;
	- O responsável pelo gerenciamento interno dos pacientes possuirá uma forma de agendar as
	consultas de um determinado paciente, de acordo com o horário e dia definido pelo supracitado.


#### Caio Gomes Piteli:

- Alterar consulta
	- Caso o paciente queira remarcar horário, dia ou cancelar consulta, o responsável pela
	utilização do software deve ser capaz de fazer essas alterações.

- Menu principal
	- Botao de voltar

#### Henrique Bexiga Eulálio:

- Visualizar consultas de um determinado dia
	- O usuário do sistema pode ter acesso as consultas de determinado dia selecionado, com
	informações como horário da consulta e paciente.

- Visualizar consultas de determinado paciente
	- Caso casualidades aconteçam e seja preciso acessar todas as consultas de um cliente, o
	responsável pela utilização de software pode fazer essa consulta rapidamente.


## RESTRIÇÕES:
- Antes de cadastras alguem, preciso verificar se ele já está cadastrado;
- Um paciente só pode ter uma consulta por dia;
