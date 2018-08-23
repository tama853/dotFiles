set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()

" let Vundle manage Vundle, required
Plugin 'VundleVim/Vundle.vim'
Plugin 'kien/ctrlp.vim'  
Plugin 'scrooloose/nerdtree'  
Plugin 'Xuyuanp/nerdtree-git-plugin'
Plugin 'tpope/vim-fugitive' 
Plugin 'chriskempson/base16-vim'
Plugin 'joshdick/onedark.vim'
Plugin 'bling/vim-bufferline'
Plugin 'itchyny/lightline.vim'
Plugin 'ervandew/supertab'
Plugin 'christoomey/vim-tmux-navigator'
Plugin 'nicknisi/vim-base16-lightline'
Plugin 'https://github.com/majutsushi/tagbar'
"Plugin 'vim-airline/vim-airline'
"Plugin 'vim-airline/vim-airline-themes'
Plugin 'scrooloose/syntastic'
"Plugin 'Valloric/YouCompleteMe'
"Plugin 'benmills/vimux'
call vundle#end()

"###FZF######
set rtp+=/usr/local/opt/fzf

"###Theme Stuff###
let g:onedark_termcolors=16
let g:onedark_terminal_italics=1
let g:lightline = {'colorscheme': 'base16'}

"let g:airline#extensions#tabline#formatter = 'unique_tail'
"let g:airline_theme='powerlineish'
"let g:bufferline_echo = 0

"###General###
set history=1000
set wrapmargin=8 " wrap lines when coming within n characters from side
set linebreak " set soft wrapping
set showbreak=… " show ellipsis at breaking
set autoindent " automatically set indent of new line
set ttyfast " faster redrawing
set diffopt+=vertical
set laststatus=2 " show the status line all the time
set so=7 " set 7 lines to the cursors - when moving vertical
set wildmenu " enhanced command line completion
set hidden " current buffer can be put into background
set showcmd " show incomplete commands
set noshowmode " don't show which mode disabled for PowerLine
set wildmode=list:longest " complete files like a shell
"set scrolloff=3 " lines of text around cursor
set shell=$SHELL
set cmdheight=1 " command bar height
set title " set terminal title
set showmatch " show matching braces
set mat=2 " how many tenths of a second to blink

" Tab control
set textwidth=120
set noexpandtab " insert tabs rather than spaces for <Tab>
set smarttab " tab respects 'tabstop', 'shiftwidth', and 'softtabstop'
set tabstop=4 " the visible width of tabs
set softtabstop=4 " edit as if the tabs are 4 characters wide
set shiftwidth=4 " number of spaces to use for indent and unindent
set shiftround " round indent to a multiple of 'shiftwidth'

" code folding settings
set foldmethod=syntax " fold based on indent
set foldlevelstart=99
set foldnestmax=10 " deepest fold is 10 levels
set nofoldenable " don't fold by default
set foldlevel=1

" Searching
set ignorecase " case insensitive searching
set smartcase " case-sensitive if expresson contains a capital letter
set hlsearch " highlight search results
set incsearch " set incremental search, like modern browsers
set nolazyredraw " don't redraw while executing macros
set magic " Set magic on, for regex

" error bells
set noerrorbells
set visualbell
set t_vb=
set tm=500

" toggle invisible characters
set list
set listchars=tab:→\ ,eol:¬,trail:·,extends:❯,precedes:❮,nbsp:+
set showbreak=↪
set wrap
set encoding=utf-8
scriptencoding utf-8
set cursorline
set number
set noexpandtab   
set t_Co=256
set mouse=a
set backspace=indent,eol,start
set clipboard=unnamed
       
let g:python3_host_prog = '/usr/local/Cellar/python/3.7.0/bin/python3'

if &term =~ '256color'
" disable background color erase
  set t_ut=
endif

" enable 24 bit color support if supported
"if (has('mac') && empty($TMUX) && has("termguicolors"))
"  set termguicolors
"endif

"same as above, but making sure it's on
set termguicolors


" Closing bracket function 
inoremap ( ()<Esc>:call IDEStyleBraces(")")<CR>i
inoremap { {<CR>}<Esc>:call IDEStyleBraces("}")<CR><Esc>kA<CR>
inoremap [ []<Esc>:call IDEStyleBraces("]")<CR>i
inoremap " ""<Esc>:call IDEStyleBraces("\"")<CR>i

" jump out of parenthesis
inoremap <C-j> <Esc>:call search(GetChar(), "W")<CR>a

function! IDEStyleBraces(schar)
 if exists("b:var")
 let b:var = b:var . a:schar
 else
 let b:var = a:schar
 endif
endfunction

function! GetChar()
 let l:char = b:var[strlen(b:var) - 1]
 let b:var = strpart(b:var, 0, strlen(b:var) - 1)
 return l:char
endfunction

"###Keybindings###
let mapleader = ','
nnoremap <Leader>, <C-w>

nnoremap <C-e> 5<C-e>
nnoremap <C-y> 5<C-y>
nnoremap <C-I><C-I> :wa<cr>

nnoremap <S-w> $
nnoremap <S-b> 0

"let g:ctrlp_map = '<C-p>'

nnoremap <Leader>` :NERDTreeToggle<CR>
nnoremap <Leader>~ :TagbarToggle<CR>

nnoremap <Leader>a :buffers<CR>:buffer<Space>
" nnoremap <Leader>l :ls<CR>
nnoremap <Leader>b :bp<CR>
nnoremap <Leader>n :bn<CR>
nnoremap <Leader>g :e#<CR>
nnoremap <Leader>1 :1b<CR>
nnoremap <Leader>2 :2b<CR>
nnoremap <Leader>3 :3b<CR>
nnoremap <Leader>4 :4b<CR>
nnoremap <Leader>5 :5b<CR>
nnoremap <Leader>6 :6b<CR>
nnoremap <Leader>7 :7b<CR>
nnoremap <Leader>8 :8b<CR>
nnoremap <Leader>9 :9b<CR>
nnoremap <Leader>0 :10b<CR>

 "nnoremap <C-w>Right <C-W>l
 "nnoremap <C-w>Left <C-W>h

" ----------------------------------------------------------------------------
" move to the window in the direction shown, or create a new split in that
" direction
" ----------------------------------------------------------------------------
"func! WinMove(key)
"    let t:curwin = winnr()
"    exec "wincmd ".a:key
"    if (t:curwin == winnr())
"        if (match(a:key,'[jk]'))
"            wincmd v
"        else
"            wincmd s
"        endif
"        exec "wincmd ".a:key
"    endif
"endfu
 
"nnoremap <silent> <C-h> :call WinMove('h')<cr>
"nnoremap <silent> <C-t> :call WinMove('t')<cr>
"nnoremap <silent> <C-c> :call WinMove('c')<cr>
"nnoremap <silent> <C-n> :call WinMove('n')<cr>
" --------------------------------------------------------------

let g:tmux_navigator_no_mappings = 1
nnoremap <silent> {<C-w>Left} :TmuxNavigateLeft<cr>
nnoremap <silent> {<C-w>Down} :TmuxNavigateDown<cr>
nnoremap <silent> {<C-w>Up} :TmuxNavigateUp<cr>
nnoremap <silent> {<C-w>Right} :TmuxNavigateRight<cr>
nnoremap <silent> {<C-w>C-/}  :TmuxNavigatePrevious<cr>

set undofile
set undolevels=1000
set undoreload=10000

set undodir=~/.vim/_undo         " where to save undo histories
set backupdir=~/.vim/_backup/    " where to put backup files.
set directory=~/.vim/_swap/      " where to put swap files.

"#######################################################################
"Syntastic stuff##########                                             |
"#######################################################################
set statusline+=%#warningmsg#
set statusline+=%{SyntasticStatuslineFlag()}
set statusline+=%*

let g:syntastic_always_populate_loc_list = 1
let g:syntastic_auto_loc_list = 1
let g:syntastic_check_on_open = 1
let g:syntastic_check_on_wq = 0

let g:syntastic_python_checkers = ['flake8', 'pylint'] "python checkers
""let g:syntastic_cpp_checkers = ['clang'] "c++

let g:syntastic_cpp_compiler = 'clang++'
let g:syntastic_cpp_compiler_options = ' -std=c++11 -stdlib=libc++'
""let g:syntastic_cpp_checkers = ['gcc'] "c++
"#######################################################################
"#######################################################################
"let g:ctrlp_working_path_mode = 'ra'
"
"
"#######Tagbar############
""g:tagbar_autoclose

"
" Colorscheme and final setup
    " This call must happen after the plug#end() call to ensure
    " that the colorschemes have been loaded
"if filereadable(expand("~/.vimrc_background"))
"	let base16colorspace=256
 " source ~/.vimrc_background
"else
"  let g:onedark_termcolors=16
"  let g:onedark_terminal_italics=1
"  colorscheme onedark
"endif
syntax on
filetype plugin indent on
colorscheme onedark
"set background=dark

" make the highlighting of tabs and other non-text less annoying
highlight SpecialKey ctermfg=19
highlight NonText ctermfg=19

" make comments and HTML attributes italic
highlight Comment cterm=italic
highlight htmlArg cterm=italic
highlight xmlAttrib cterm=italic
highlight Type cterm=italic
highlight Normal ctermbg=none

"tells ctags where to look for tags file
set tags=./tags;
"set tags=/my/dir1/tags,/my/dir2/tags
