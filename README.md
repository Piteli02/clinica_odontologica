# :tooth:Clinica odontológica
Repositório como projeto final da disciplina Si200B UNICAMP-FT.

O intuito do programa eh basicamente criar um "CRUD" na linguagem C, onde será possivel:

- Cadastrar clientes; 
    
- Agendar consultas;
    
- Alterar consultas;
    
- Visualizar consultas;
    
- Cancelar consultas;

O programa vai ser desenvolvido na linguagem C e toda a interação do usuário será, através do terminal.

## :gear:Tecnologia utilizada
- Linguagem C;

## :gear:Requisitos
Nessa fase inicial, será necessário que a máquina possua um compilador C, como por exemplo o "GNU Compiler Collection - gcc". Assim, toda vez que o programa for rodar, é necessário compila-lo e posteriormente rodar.

## :gear:Como rodar a aplicação
#### Primeira vez utilizando o software:
- Fazer download do "Main.c";
- Fazer download dos dos arquivos ".txt";
- Colocar todos os arquivos na mesma pasta;
- Compilar o arquivo "Main.c"
- Rodar o arquivo "Main.c"
#### Demais vezes utilizando o software
- Rodar o arquivo "Main.c"

## :gear:Utilizando a aplicacao
Toda vez que o usuário rodar o programa, será solicitado um usuário e senha, esse usuário e senha devem ser colocados no arquivo "login.txt". Caso isso não seja alterado, o padrão será Usuário:"adm" Senha:"adm10".

## :safety_vest:Divisao de atividades segundo os autores

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


## :stop_sign:RESTRIÇÕES:
- Antes de cadastras alguem, preciso verificar se ele já está cadastrado;
- Um paciente só pode ter uma consulta por dia;
- Caso o programa seja rodado em um computador com o sistema LINUX, pode ser que ele não rode apropriadamente, tendo em vista que que o comando "fflush(stdin)" não apresenta um comportamenteo adequado e será modificado em breve


## :warning:OBSERVAÇÃO:
Após um funcionamentoa adequado do software, seria interessante que a cada vez que o admistrador fizer login, seja possível inserir a data do dia, desse modo, as consultas anteriores a essa data escrita devem ser excluidas do TXT.
