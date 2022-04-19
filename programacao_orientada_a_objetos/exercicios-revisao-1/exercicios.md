## 202201 - POO - Exercício de Revisão

### Instruções
Criar um projeto no eclipse com o nome **revisao-seunome** e responder os seguintes exercícios:
* 1: Crie uma classe para representar uma pessoa, com os atributos privados de nome, data de nascimento e altura. Crie os métodos públicos necessários para sets e gets e também um método para imprimir todos dados de uma pessoa. Crie um método para calcular a idade da pessoa.

* 2: Crie uma classe Agenda que pode armazenar 10 pessoas e que seja capaz de realizar as seguintes operações:
1. void armazenaPessoa(String nome, int idade, float altura);
2. void removePessoa(String nome);
3. int buscaPessoa(String nome); // informa em que posição da agenda está a pessoa
4. void imprimeAgenda(); // imprime os dados de todas as pessoas da agenda
5. void imprimePessoa(int index); // imprime os dados da pessoa que está na posição “i” da agenda.

* 3: Crie uma classe denominada Elevador para armazenar as informações de um elevador dentro de um prédio. A classe deve armazenar o andar atual (térreo = 0), total de andares no prédio (desconsiderando o térreo), capacidade do elevador e quantas pessoas estão presentes nele. A classe deve também disponibilizar os seguintes métodos:
1. Inicializa : que deve receber como parâmetros a capacidade do elevador e o total de andares no prédio (os elevadores sempre começam no térreo e vazio);
2. Entra : para acrescentar uma pessoa no elevador (só deve acrescentar se ainda houver espaço);
3. Sai : para remover uma pessoa do elevador (só deve remover se houver alguém dentro dele);
4. Sobe : para subir um andar (não deve subir se já estiver no último andar);
5. Desce : para descer um andar (não deve descer se já estiver no térreo);
6. Encapsular todos os atributos da classe (criar os métodos set e get).

* 4: Crie uma classe **Televisao** e uma classe **ControleRemoto** que pode controlar o volume e trocar os canais da televisão. O controle de volume permite:
1. aumentar ou diminuir a potência do volume de som em uma unidade de cada vez;
2. aumentar e diminuir o número do canal em uma unidade
3. trocar para um canal indicado;
4. consultar o valor do volume de som e o canal selecionado.
