#include <ncurses.h>
int main(){
    initscr();			 // Inicia o modo curses*/
    printw("Hello There!");	 // Imprime Hello There!*/
    refresh();			 // Atualiza a tela */
    getch();			 // Espera a entrada de uma tecla */
    endwin();			 // Termina o modo curses */
    return 0;
}
