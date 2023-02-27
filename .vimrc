"Mostra o número de linhas.
set nu!
	
"Habilita as cores.
syntax on

"Qntd. de espaços do TAB.
set tabstop=4
"Auto SHIFT-TAB.
set shiftwidth=4
"TAB convertido para espaços.
set expandtab
"Organiza TAB para tamanho definido.
set softtabstop=4
set smarttab
"Auto indent nos arquivos.
set autoindent
"Mostra os padrões encontrados.
set incsearch
"Mostra demais opções ao buscar algo.
set wildmenu
"Mostra as informações referentes ao VIM.
set laststatus=2
"Confirma o salvamento do conteúdo do arquivo ao sair.
set confirm
"Mostra o nome do arquivo aberto.
set title
"Mostra os comandos que estão sendo digitado.
set showcmd

"Mapeia a tecla q com o comando :quit.
map q :quit<CR>
"Mapeia a tecla Ctrl+s com o comando :w.
map <C-s> :w<CR>
"Mapeia a tecla F2 para executar o arquivo com g++.
map <F2> :!clear && g++ -g % -o %:r && ./%:r <CR>

"Automaticamente insere a caractere correspondente.
inoremap { {}<Esc>ha
inoremap ( ()<Esc>ha
inoremap [ []<Esc>ha
inoremap " ""<Esc>ha
inoremap ' ''<Esc>ha
inoremap ` ``<Esc>ha
