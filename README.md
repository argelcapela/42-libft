<!--<div id="portfolio-slideshow-items" class="hide-on-portfolio" visibility="0">
    
</div>
-->

<div class="hide-on-portfolio">

<div align="center">
	<p><i>"Nunca perca a esperança na humanidade, porque ela é como um oceano. Só porque existem algumas gotas de água suja nele, não quer dizer que esteja sujo por completo."</i><br><b>Mahatma Gandhi</b></p>
<br><br>
	<img src="https://github.com/argelcapela/argelcapela.rf.gd/blob/main/assets/img/galeria/portfolio_img_42-libft.jpg?raw=true" width="250px">
</div>
<br><br>
	
# :sparkles: O que é a 42-libft ?
<b>Esse projeto visa construir do zero uma biblioteca de funções fundamentais para trabalhar com a linguagem C. Por exemplo: substring(), trim(), strdup() etc. Um excelente exercício de lógica, Makefile e construção de bibliotecas.</b><br>

</div>

<div class="col-12">

# :wrench: Tecnologias utilizadas:<br>
<div style="display: inline_block">
    <img align="center" alt="gel-Js" height="30" width="40" src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg">

</div>

<div class="col-12">

# :rocket: Rodando o projeto:<br>
<b>Links:</b>
<li>Repositório Github: <a href="https://github.com/argelcapela/42-libft">Link</a></li>
<li>Intra 42SP: <a href="https://projects.intra.42.fr/projects/42cursus-libft">Link</a></li>
<br><br>

<div class="col-12">
    
# :pushpin: O que eu aprendi e como foi desenvolvido esse projeto?<br>
<b>1) Conhecimento adquiridos para construir a libft</b><br>
<li><a href="#entendendo">Entendendo melhor a Libft!</a></li>
<li><a href="#restrict">O que faz o 'Restrict' ?</a></li>
<br>
	
<b>2) Brinde</b>
<li><a href="#step-by-step"> 42-libft Passo a Passo</a></li>
<li><a href="#outras">Outras Coisas Legais</a></li>
<li><a href="#fontes">Fontes</a></li>
</div>
<br>	
	
<div class="col-12">
	
# :handshake: Colaboradores:<br>
<table>
  <tr>
    <td align="center">
      <a href="http://github.com/argelcapela">
        <img src="https://avatars.githubusercontent.com/u/79276276?s=400&u=055b803f4708d59eaf50208ba601f85844125757&v=4" width="100px;" alt="Foto de Argel Capela!"/><br>
        <sub>
          <b>Argel Capela</b>
        </sub>
      </a>
    </td>
  </tr>
</table>
<br><br>
</div>
	
<div class="col-12">
	
# :dart: Status do projeto:<br>
<img src="https://github.com/argelcapela/argelcapela.rf.gd/blob/main/assets/icons/finalizado.png?raw=true" width="250px" height="200px">
</div>
	
<br>

<div class="col-12">
	
# :clipboard: Nota:<br>
<img src="https://github.com/argelcapela/42-trilha-de-fundamentos/blob/main/assets/nota-125.png?raw=true" width="150px" height="150px" alt="nota libft">
</div>
	
<br>

<div class="col-12">
	
# :bug:	 Erros:<br>
<p>Identificou um erro? Por favor me informe! ou fique a vontade para criar um *issue* aqui no Github e contribuir.</p>
<p>Também fique a vontade para opinar, criticar, xingar, elogiar etc. Para mim é tudo a mesma coisa, fonte de crescimento pessoal. Eu não sei tudo, mas estou buscando ser um profissional 1% melhor a cada dia.</p>
</div>
	
<div class="col-12">
<p>Não esqueça de dar um ⭐️ se você gostou, ou se esse repositório te ajudou de alguma maneira, isso irá me ajudar muito! Obrigado, você é top! 😁👍</p>
</div>
	

	
	
	
<br><br><br>
<br><br><br>
<br><br>
	
<div align="center">

# :crown: 
	
</div>    
<br><br>


<br><br>
<h2 id="entendendo">Entendendo a Libft!</h2>
<b>Primeiramente... quantos funções existem no libft?</b>
<p>São 45 funções no total. 36 Mandatórias e 9 Bônus.</p>
	
<b>Vamos ver uma por uma?</b><br>	
Só se for agora truta! 😎👌<br>
<i>*N.O. Libc: São funções que não são oficiais das bibliotecas padrões do C, mas sim, derivadas.</i><br>
<i>*As funções estão ordenadas em ordem de complexidade de implementação e de entendimento prático, na minha opinião! 😁✔. Vc não é obrigado a concordar!</i><br>
<br><br>
<!--# 1 strnstr
 -->
<table>
<thead>
	<tr>
		<th colspan="4"><a href="https://www.freebsd.org/cgi/man.cgi?query=strnstr&sektion=3">ft_strnstr</a></th>
	</tr>
	<tr>
		<th>O que ela faz?</th>
		<th>Lib Origem</th>
		<th>Protótipo</th>
		<th>Valores de Retorno</th>
	</tr>
</thead>
<tbody>
	<tr>
		<td>Retorna a primeira ocorrência de little dentro de big</td>
		<td>string.h</td>
		<td>char *strstr(const char *big, const char	*little);</td>
		<td>
			<ul>
				<li>Se little é uma string vazia, retorna big</li>
				<li>Se little não existe na string, retorna NULL</li>
				<li>Se little é encontrado, um ponteiro para a primeira ocorrência de little dentro de big é retornado.</li>
			</ul>
		</td>
	</tr>
</tbody>	
</table>
<br>
Exemplo:
	
```

```	
<br><br>
	
<!--# 2 atoi	-->
<table>
<thead>
	<tr>
		<th colspan="4"><a href="https://man7.org/linux/man-pages/man3/atoi.3.html">ft_atoi</a></th>
	</tr>
	<tr>
		<th>O que ela faz?</th>
		<th>Lib Origem</th>
		<th>Protótipo</th>
		<th>Valores de Retorno</th>
	</tr>
</thead>
<tbody>
	<tr>
		<td>Converte de String para Inteiro</td>
		<td>stdlib.h</td>
		<td>int atoi(const char *nptr);</td>
		<td>
			<ul>
				<li>O Valor convertido</li>
				<li>0 em caso de erro</li>
			</ul>
		</td>
	</tr>
</tbody>	
</table>
<br>
Exemplo:
	
```

```	
<br><br>
	
<!--# 3 itoa	-->
<table>
<thead>
	<tr>
		<th colspan="4">ft_itoa</th>
	</tr>
	<tr>
		<th>O que ela faz?</th>
		<th>Lib Origem</th>
		<th>Protótipo</th>
		<th>Valores de Retorno</th>
	</tr>
</thead>
<tbody>
	<tr>
		<td>Aloca memória e retorna uma string representando o inteiro recebido como argumento</td>
		<td>N.O. Libc</td>
		<td>char *ft_itoa(int n);</td>
		<td>
			<ul>
				<li>A String representando o inteiro.</li>
				<li>NULL se a alocação falhar</li>
			</ul>
		</td>
	</tr>
</tbody>	
</table>
<br>
Exemplo:
	
```

```	
<br><br>
	
<!--# 4 ft_split-->
<table>
<thead>
	<tr>
		<th colspan="4">ft_split</th>
	</tr>
	<tr>
		<th>O que ela faz?</th>
		<th>Lib Origem</th>
		<th>Protótipo</th>
		<th>Valores de Retorno</th>
	</tr>
</thead>
<tbody>
	<tr>
		<td>Aloca memória e retorna um array de strings obtido a partir da divisão de s, usando o caracter 'c' como delimitador.</td>
		<td>N.O. Libc</td>
		<td>char **ft_split(char const *s, char c);</td>
		<td>
			<ul>
				<li>Matriz de strings</li>
				<li>Nulo se a alocação de memória falhar</li>
			</ul>
		</td>
	</tr>
</tbody>	
</table>
<br>
Exemplo:
	
```

```	
<br><br>
	
<!--# 5 ft_strtrim-->
<table>
<thead>
	<tr>
		<th colspan="4">ft_strtrim</th>
	</tr>
	<tr>
		<th>O que ela faz?</th>
		<th>Lib Origem</th>
		<th>Protótipo</th>
		<th>Valores de Retorno</th>
	</tr>
</thead>
<tbody>
	<tr>
		<td>Aloca memória e retorna uma cópia de 's1' com cada caracter de 'set' removido do começo e do fim de uma string.</td>
		<td>stdlib.h</td>
		<td>char *ft_strtrim(char const *s1, char const *set);</td>
		<td>
			<ul>
				<li>String aparada, ou seja, com os caracteres cortados do começo e do fim, se houver correspondência é claro!</li>
				<li>Nulo se a alocação de memória falhar</li>
			</ul>
		</td>
	</tr>
</tbody>	
</table>
<br>
Exemplo:
	
```

```	
<br><br>
	
<!--# + ft_memcmp-->
<table>
<thead>
	<tr>
		<th colspan="4"><a href="https://man7.org/linux/man-pages/man3/memcmp.3.html">ft_memcmp</a></th>
	</tr>
	<tr>
		<th>O que ela faz?</th>
		<th>Lib Origem</th>
		<th>Protótipo</th>
		<th>Valores de Retorno</th>
	</tr>
</thead>
<tbody>
	<tr>
		<td>Aloca memória e retorna uma cópia de 's1' com cada caracter de 'set' removido do começo e do fim de uma string.</td>
		<td>stdlib.h</td>
		<td>char *ft_strtrim(char const *s1, char const *set);</td>
		<td>
			<ul>
				<li>String aparada, ou seja, com os caracteres cortados do começo e do fim, se houver correspondência é claro!</li>
				<li>Nulo se a alocação de memória falhar</li>
			</ul>
		</td>
	</tr>
</tbody>	
</table>
<br>
Exemplo:
	
```

```	
<br><br>



	
<!--
<b>Passos Essências para se construir uma GNL</b>
	<br>
	<ol>
<br>
<i>Mandatório:</i>
		<li>Ler BUFFER_SIZE caracteres usando a read() quantas vezes forem necessário</li>
		<li>Eu devo usar malloc no meu buffer(função read) ou usar um array de tamanho fixo?</li>
		<li>Encontrar o '\n'</li>
		<li>Retornar o texto lido antes do \n</li>
		<li>Guardar o texto lido depois do \n, caso haja</li>
		<li>Utilizar o texto guardado na chamada anterior da GNL</li>
		<li>Em quais casos a minha GNL deve retornar NULL?</li>
		<br>
<i>Bônus:</i>
		<li>Quantos FILE DESCRIPTOR possíveis um sistema pode ter de uma vez?</li>
		<li>Como a variável estática pode persistir a posição de um FD sem interferir a de outro?</li>
		<li>😈Como dar FREE em todas as funções que usam MALLOC e eliminar os leaks de memória?😈</li>
	</ol>
<small>Adaptado de uma <a href="https://discord.com/channels/@me/895737928469340160/895737932240023622">thread</a> no slack da 42 mundial</small>
<br><br>
<b>Essa foi a minha lógica para construir a GNL, tendo como base os pontos acima:</b>
<p>Não é a melhor de todas, mas foi a maneira que eu desenvolvi. #SempreAprendendo! 😁✌</p>
<img src="https://github.com/argelcapela/42-trilha-de-fundamentos/blob/main/assets/42-get-next-line/fluxograma.jpg?raw=true" alt="Algoritmo GNL!"> 
<a href="https://miro.com/app/board/uXjVOXd2zpY=/?invite_link_id=153572408505">Clique aqui para uma melhor visualização</a>
<br><br>
-->
<h2 id="step-by-step">42-libft Passo a Passo</h2><br>
<a href="https://youtu.be/D9G1VOjN_84"><img src="https://img.youtube.com/vi/D9G1VOjN_84/maxresdefault.jpg" width="100%"></a>
<br><br>

<h2 id="outras">Outras coisas legais!</h2>

   
<h1>Trabalhando com Arquivos de cabeçalho & #Include Guards</h1>
<p>Nós podemos modularizar nossos projetos em C, utilizando arquivos de cabeçalho, como assim ? Se nós temos um código grande pra fazer, mas queremos separar em arquivos C diferentes, por exemplo na GNL, próximo projeto, um arquivo é para a função GNL, outro é para as funções auxíliares, para isso podemos trabalhar com arquivos .h, ou arquivos de cabeçalho.</p>
   
<b>Por que usamos ifndef?</b>  
<p>Em poucas palavras, essa manobra é conhecida como Include Guard, basicamente é impedir que a mesma coisa seja feita mais de uma vez.</p>

```
#ifndef _INCL_GUARD
#define _INCL_GUARD
    /* código a ser executado caso _INCL_GUARD ainda não tenha sido criado no programa */
#else
    /* código a ser executado caso _INCL_GUARD já tenha sido criado, ou seja, sempre deixamos vazio para o programa não adicionar 2x o arquivo.h e bugar o programa. */
#endif    
```
    
    
<b>get_next_line.h</b>
    
```
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/*
 * Aqui vão os protótipos de todas as funções que serão utilizadas no projeto
 * 
 */

#endif
```   
    
<b>get_next_line.c/_utils.c</b>
    
```
#include "get_next_line.h" // incluí os protótipos criados no header dentro do projeto.

/*
 * agora podemos criar as funções aqui, e elas podem ser enxergadas por todos os arquivos C que estiverem vinculados com o arquivo.h.
 * isso é legal para organizar o projeto.
 */

```   
    
<h2>Makefile</h2>
<h2>Criando Bibliotecas em C</h2>
   
<h2 id="restrict">Restrict Type Qualifier</h2>
<b>O que é esse tróço?</b>
<p>Ele é usado somente em ponteiros, ele é uma promessa, diz para o compilador que esse ponteiro é o único ponteiro que está apontando para o valor apontado, é o único caminho par acessar o valor apontado. Como assim Júnior? Vamos lá! Imagina que temos um ponteiro chamado (int* restrict num1) que está apontando para o número um número 10 qualquer, o restrict promete para o compilador que nenhum outro ponteiro está apontando para esse mesmo número 10. O restrict não afeta nada no código em si, mas sim, no modo como o Assembly, ou o compilador executa o código, se a promessa do restrict não for respeitada, vários erros podem ser gerados no código, porém se usado corretamente, pode tornar uma aplicação muito mais rápida. <br> Bora de exemplo?</p>

```
void updatePtrs(size_t *ptrA, size_t *ptrB, size_t *val)
{
  *ptrA += *val;
  *ptrB += *val;
}
```
``` 
; Código Assembly RISC Machine (hipotético)
ldr r12, [val]     ; Carrega/"Copia" a memória alocada apontada por [val] no registrador r12
ldr r3, [ptrA]     ; Carrega/"Copia" a memória alocada apontada por [ptrA] no registrador r3
add r3, r3, r12    ; Executa uma soma entre os registradores: r3 = r3 + r12.
str r3, [ptrA]     ; Pega o valor do registrador r3 e joga na memória alocada apontada por ptrA.
ldr r3, [ptrB]     ; Espera até a operação anterior terminar / Carrega o valor da variável [ptrB] no registrador r3
ldr r12, [val]     ; Carrega/"Copia" a memória alocada apontada por [val] no registrador r12 de novo. Por que?
                   ; porque se o ponteiro val ou ptrA apontarem para o mesmo local, depois da soma feita anteriormente, o valor de val será diferente, então, o compilador
                   ; precisa ler de novo para garantir que o valor está correto.
add r3, r3, r12    ; Executa a soma r3 = r3 + r12
str r3, [ptrB]     ; Pega o valor do registrador r3 e joga na memória alocada apontada por ptrA.
``` 
<p>O Compilador sem o restrict faz uma verificação pra saber se o valor de val mudou, caso val apontasse para o mesmo bloco de memória que os demas ponteiros. </p>
    
    
```
void updatePtrs(size_t *restrict ptrA, size_t *restrict ptrB, size_t *restrict val)
{
  *ptrA += *val;
  *ptrB += *val;
}
```
``` 
; Código Assembly RISC Machine (hipotético)
ldr r12, [val]  ; Aqui o registrador r12 carrega o bloco de memória apontado por [val] somente uma vez. Porque o restrict, garante pro compilador que esse ponteiro é o único                     ; caminho ou seja, esse valor não vai mudar nas outras operações.
ldr r3, [ptrA]  ; Carrega os blocos de memória apontados pelos ponteiros [ptrA] e [ptrB] nos respectivos registradores r3,r4.
ldr r4, [ptrB]
add r3, r3, r12 ; Executa as operações de adição.
add r4, r4, r12
str r3, [ptrA]  ; Executa as operações de atualização.
str r4, [ptrB]
``` 
<p>Agora quando, eu coloco o restrict, o compilador não precisa fazer verificações de consistência, ele vai direto ao ponto, só carrega e executa as operações.</p>    
<i>Nesse exemplo simples, pode parecer pouco relevante porém, o uso correto do restrict em aplicações mais complexos torna a aplicação mais rápida.</i>
<br><br>

		     
<br><br>

<h2 id="fontes">Fontes</h2>
<li><a href="https://en.wikipedia.org/wiki/Include_guard">#Include Guard</a></li>




</div>




<!--<div id="portfolio-slideshow-items" class="hide-on-portfolio" visibility="0">
    <div class="item"><img src="https://github.com/argelcapela/42-trilha-de-fundamentos/blob/main/assets/libft/125.jpg?raw=true" alt="Avaliação"></div>
    <div class="item"><img src="https://github.com/argelcapela/42-trilha-de-fundamentos/blob/main/assets/libft/libft_test.gif?raw=true" alt="Tripoulle Test"></div>
</div>


<div class="hide-on-portfolio">
<div align="center">
	<img src="https://github.com/argelcapela/argelcapela.rf.gd/blob/main/assets/img/galeria/portfolio_img_42-libft.jpg?raw=true" width="250px">
</div>

## :memo: Descrição:
Esse projeto visa construir do zero uma biblioteca de funções fundamentais para trabalhar com a linguagem C. Por exemplo: substring(), trim(), strdup() etc. Um excelente exercício de lógica, Makefile e construção de bibliotecas.
</div>

<div class="col-12">

## :wrench: Tecnologias utilizadas:<br>
<div style="display: inline_block">
    <img align="center" alt="gel-Js" height="30" width="40" src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg">

</div>

<div class="col-12">
## :books: Funcionalidades:<br>


<table class="special-border col-12">
<tr>
<th colspan="2">Bonus</th>
</tr>
<tr>
    <td>Nome</td>
    <td>O que ela faz?</td>
</tr>
<tr>
    <td>ft_lstnew</td>
    <td></td>
</tr>
<tr>
    <td>ft_lstadd_front</td>
    <td></td>
</tr>
<tr>
    <td>ft_lstsize</td>
    <td></td>
</tr> 
<tr>
    <td>ft_lstlast</td>
    <td></td>
</tr>   
<tr>
    <td>ft_lstadd_back</td>
    <td></td>
</tr> 
<tr>
    <td>ft_lstdelone</td>
    <td></td>
</tr> 
<tr>
    <td>ft_lstclear</td>
    <td></td>
</tr> 
<tr>
    <td>ft_lstiter</td>
    <td></td>
</tr> 
<tr>
    <td>ft_lstmap</td>
    <td></td>
</tr> 
</table>
    
</div>

<div class="col-12">

## :rocket: Rodando o projeto:<br>
    
<li>Link Github: <a href="https://github.com/argelcapela/42_libft">Link</a></li>
<li>Link 42 Page: <a href="#">Link</a></li>
 
</div>
<div class="col-12">

## :soon: Implementação futura:<br>
    
<li>Nada em mente por enquanto.</li>
    
</div>
<div class="col-12">
    

## :handshake: Colaboradores:<br>
<table>
  <tr>
    <td align="center">
      <a href="http://github.com/argelcapela">
        <img src="https://avatars.githubusercontent.com/u/79276276?s=400&u=055b803f4708d59eaf50208ba601f85844125757&v=4" width="100px;" alt="Foto de Argel Capela!"/><br>
        <sub>
          <b>Argel Capela</b>
        </sub>
      </a>
    </td>
  </tr>
</table>
</div>
<div class="col-12">
    
## :dart: Status do projeto:<br>

<li>Entregue com pontuação 120%.</li>
    
</div>
    


    
    -->
