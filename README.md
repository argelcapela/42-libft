<!--<div id="portfolio-slideshow-items" class="hide-on-portfolio" visibility="0">
<div class="item"><img src="https://i.imgur.com/JGrOe9Y.gif" alt="tripoulle tester libft"></div>
</div>
-->


<!-- <div class="item"><video id="portfolio-video" data-yt2html5="https://www.youtube.com/watch?v=xu8Zel1u-6k" controls></video></div> -->
<div class="hide-on-portfolio">

<div align="center" id="topo">
	<p><i>"Nunca perca a esperança na humanidade, porque ela é como um oceano. Só porque existem algumas gotas de água suja nele, não quer dizer que esteja sujo por completo."</i><br><b>Mahatma Gandhi</b></p>
<br><br>
	<img src="https://github.com/argelcapela/argelcapela.rf.gd/blob/main/assets/img/galeria/portfolio_img_42-libft.jpg?raw=true" width="250px">
</div>
<br><br>
	
# ✨ O que é a 42-libft ?
<b>Esse projeto visa construir do zero uma biblioteca de funções fundamentais para trabalhar com a linguagem C. Por exemplo: substring(), trim(), strdup() etc. Um excelente exercício de lógica, Makefile e construção de bibliotecas.</b><br>

</div>

<div class="col-12">

# 🔧 Tecnologias utilizadas:<br>
<div style="display: inline_block">
    <img align="center" alt="gel-Js" height="30" width="40" src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg">

</div>

<div class="col-12">

# 🚀 Rodando o projeto:<br>
<b>Links:</b>
<li>Repositório Github: <a href="https://github.com/argelcapela/42-libft">Link</a></li>
<li>Intra 42SP: <a href="https://projects.intra.42.fr/projects/42cursus-libft">Link</a></li>
	
<br>
<b> A seguir temos um exemplo de main para testar a LIBFT:</b><br><br>

```
#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *str = ft_strdup("argel capela");
	printf("%s", str);
	return(0);
}

```
	
<br>
😎compilando...<br>
	
```bash
$ make 
# Na pasta raiz do projeto
	
$ gcc main.c libft.a && ./a.out	
```
	
<br><br>	
	
<br><br>
<div class="col-12">
    
# 📌 O que eu aprendi e como foi desenvolvido esse projeto?<br>
<b>1) Conhecimento adquiridos para construir a libft</b><br>
<li><a href="#entendendo">Entendendo melhor a Libft!</a></li>
<ol>
<br>
<i>Mandatório:</i>
	<li><a href="#ft_split">ft_split</a></li>
	<li><a href="#ft_strtrim">ft_strtrim</a></li>
	<li><a href="#ft_atoi">ft_atoi</a></li>
	<li><a href="#ft_itoa">ft_itoa</a></li>
	<li><a href="#ft_strnstr">ft_strnstr</a></li>
	<li><a href="#ft_strncmp">ft_strncmp</a></li>
	<li><a href="#ft_memcmp">ft_memcmp</a></li>
	<li><a href="#ft_substr">ft_substr</a></li>
	<li><a href="#ft_join">ft_join</a></li>
	<li><a href="#ft_strlcat">ft_strlcat</a></li>
	<li><a href="#ft_putnbr_fd">ft_putnbr_fd</a></li>
	<li><a href="#ft_strmapi">ft_strmapi</a></li>
	<li><a href="#ft_striteri">ft_striteri</a></li>
	<li><a href="#ft_strlcpy">ft_strlcpy</a></li>
	<li><a href="#ft_memcpy">memcpy</a></li>
	<li><a href="#ft_memmove">ft_memmove</a></li>
	<li><a href="#ft_strchr">ft_strchr</a></li>
	<li><a href="#ft_strrchr">ft_strrchr</a></li>
	<li><a href="#ft_memchr">ft_memchr</a></li>
	<li><a href="#ft_strdup">ft_strdup</a></li>
	<li><a href="#ft_calloc">ft_calloc</a></li>
	<li><a href="#ft_memset">ft_memset</a></li>
	<li><a href="#ft_bzero">ft_bzero</a></li>
	<li><a href="#ft_isalpha">ft_isalpha</a></li>
	<li><a href="#ft_isdigit">ft_isdigit</a></li>
	<li><a href="#ft_isalnum">ft_isalnum</a></li>
	<li><a href="#ft_isascii">ft_isascii</a></li>
	<li><a href="#ft_isprint">ft_isprint</a></li>
	<li><a href="#ft_strlen">ft_strlen</a></li>
	<li><a href="#ft_toupper">ft_toupper</a></li>
	<li><a href="#ft_tolower">ft_tolower</a></li>
	<li><a href="#ft_putstr_fd">ft_putstr_fd</a></li>
	<li><a href="#ft_putendl_fd">ft_putendl_fd</a></li>
	<li><a href="#ft_putchar_fd">ft_putchar_fd</a></li>
<br>
<i>Bônus:</i>
	<li><a href="#ft_lstnew">ft_lstnew</a></li>
	<li><a href="#ft_lstadd_front">ft_lstadd_front</a></li>
	<li><a href="#ft_lstsize">ft_lstsize</a></li>
	<li><a href="#ft_lstlast">ft_lstlast</a></li>
	<li><a href="#ft_lstadd_back">ft_lstadd_back</a></li>
	<li><a href="#ft_lstdelone">ft_lstdelone</a></li>
	<li><a href="#ft_lstclear">ft_lstclear</a></li>
	<li><a href="#ft_lstiter">ft_lstiter</a></li>
	<li><a href="#ft_lstmap">ft_lstmap</a></li>
</ol>
<li><a href="#biblioteca">Que parada é essa de bibliotecas em C?</a></li>
<li><a href="#makefile">Partiu dominar o 'Makefile'?</a></li>
<li><a href="#restrict">O que é 'restrict' antes das variáveis? é de comer?</a></li>
<li><a href="#ascii">Entenda de uma vez, o que é ASCII? Unicode? UTF-8,16 e bla bla bla?</a></li>
<li><a href="#bases">Partiu dominar a conversão entre bases? 😎👌</a></li>	

<br>
	
<b>2) Brinde</b>
<li><a href="#outras">Outras Coisas Legais</a></li>
<li><a href="#fontes">Fontes</a></li>
</div>
<br>	
	
<div class="col-12">
	
# 🤝 Colaboradores:<br>
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
	
# 📅 Status do projeto:<br>
<img src="https://github.com/argelcapela/argelcapela.rf.gd/blob/main/assets/icons/finalizado.png?raw=true" width="250px" height="200px">
</div>
	
<br>

<div class="col-12">
	
# 📋 Nota:<br>
<img src="https://github.com/argelcapela/42-trilha-de-fundamentos/blob/main/assets/nota-125.png?raw=true" width="150px" height="150px" alt="nota libft">
</div>
	
<br>

<div class="col-12">
	
# 🦟 Erros:<br>
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

# 👑

<br>
<a href="https://youtu.be/D9G1VOjN_84"><img src="https://img.youtube.com/vi/D9G1VOjN_84/maxresdefault.jpg" width="100%"></a>
<br>
