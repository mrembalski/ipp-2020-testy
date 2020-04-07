#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>
#include <string.h>


int main() {

/*
scenario: test_gamma_board
uuid: 301251028
*/
/*
gamma_move + gamma_board
*/
gamma_t* board = gamma_new(23, 11, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 14) == 0 );


char* board973753677 = gamma_board(board);
assert( board973753677 != NULL );
assert( strcmp(board973753677, 
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n") == 0);
free(board973753677);
board973753677 = NULL;
assert( gamma_move(board, 2, 1, 21) == 0 );
assert( gamma_move(board, 3, 11, 14) == 0 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 5, 3, 22) == 0 );
assert( gamma_move(board, 6, 9, 20) == 0 );


char* board333677779 = gamma_board(board);
assert( board333677779 != NULL );
assert( strcmp(board333677779, 
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n") == 0);
free(board333677779);
board333677779 = NULL;
assert( gamma_move(board, 7, 3, 12) == 0 );
assert( gamma_move(board, 8, 3, 21) == 0 );
assert( gamma_move(board, 9, 2, 11) == 0 );
assert( gamma_move(board, 1, 6, 14) == 0 );


char* board470166545 = gamma_board(board);
assert( board470166545 != NULL );
assert( strcmp(board470166545, 
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n") == 0);
free(board470166545);
board470166545 = NULL;
assert( gamma_move(board, 2, 8, 17) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 5, 2, 17) == 0 );
assert( gamma_move(board, 6, 6, 23) == 0 );


char* board838289571 = gamma_board(board);
assert( board838289571 != NULL );
assert( strcmp(board838289571, 
".......................\n"
".......................\n"
".....4.................\n"
".......................\n"
"....3..................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n") == 0);
free(board838289571);
board838289571 = NULL;
assert( gamma_move(board, 7, 1, 8) == 1 );
assert( gamma_move(board, 8, 7, 15) == 0 );
assert( gamma_move(board, 9, 6, 12) == 0 );
assert( gamma_move(board, 1, 9, 17) == 0 );


char* board733554426 = gamma_board(board);
assert( board733554426 != NULL );
assert( strcmp(board733554426, 
".......................\n"
".......................\n"
".7...4.................\n"
".......................\n"
"....3..................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n"
".......................\n") == 0);
free(board733554426);
board733554426 = NULL;
assert( gamma_move(board, 2, 11, 5) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 2, 19) == 0 );
assert( gamma_move(board, 5, 3, 16) == 0 );
assert( gamma_move(board, 6, 4, 11) == 0 );


char* board707699303 = gamma_board(board);
assert( board707699303 != NULL );
assert( strcmp(board707699303, 
".......................\n"
".......................\n"
".7...4.................\n"
".......................\n"
"....3..................\n"
"...........2...........\n"
".......................\n"
"...3...................\n"
".......................\n"
".......................\n"
".......................\n") == 0);
free(board707699303);
board707699303 = NULL;
assert( gamma_move(board, 7, 10, 4) == 1 );
assert( gamma_move(board, 8, 8, 22) == 0 );
assert( gamma_move(board, 9, 10, 14) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );


char* board675650783 = gamma_board(board);
assert( board675650783 != NULL );
assert( strcmp(board675650783, 
".......................\n"
".......................\n"
".7...4.................\n"
".......................\n"
"....3..................\n"
"...........2...........\n"
"..1.......7............\n"
"...3...................\n"
".......................\n"
".......................\n"
".......................\n") == 0);
free(board675650783);
board675650783 = NULL;
assert( gamma_move(board, 2, 0, 17) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 5, 11, 23) == 0 );
assert( gamma_move(board, 6, 4, 12) == 0 );


char* board341443096 = gamma_board(board);
assert( board341443096 != NULL );
assert( strcmp(board341443096, 
".......................\n"
".......................\n"
".7...4.................\n"
".......................\n"
"....33.................\n"
"...........2...........\n"
"..1.......7............\n"
"...3...................\n"
".......................\n"
".......................\n"
".......................\n") == 0);
free(board341443096);
board341443096 = NULL;
assert( gamma_move(board, 7, 8, 17) == 0 );
assert( gamma_move(board, 8, 2, 7) == 1 );
assert( gamma_move(board, 9, 7, 1) == 1 );
assert( gamma_move(board, 1, 1, 10) == 1 );


char* board522700850 = gamma_board(board);
assert( board522700850 != NULL );
assert( strcmp(board522700850, 
".1.....................\n"
".......................\n"
".7...4.................\n"
"..8....................\n"
"....33.................\n"
"...........2...........\n"
"..1.......7............\n"
"...3...................\n"
".......................\n"
".......9...............\n"
".......................\n") == 0);
free(board522700850);
board522700850 = NULL;
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 10, 8) == 1 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_move(board, 5, 6, 23) == 0 );
assert( gamma_move(board, 6, 7, 11) == 0 );


char* board679880211 = gamma_board(board);
assert( board679880211 != NULL );
assert( strcmp(board679880211, 
".1.....................\n"
".......................\n"
".7...4....3............\n"
"..8.......4............\n"
"....33.................\n"
"...........2...........\n"
"..1.......7............\n"
"...32..................\n"
".......................\n"
".......9...............\n"
".......................\n") == 0);
free(board679880211);
board679880211 = NULL;
assert( gamma_move(board, 7, 9, 8) == 1 );
assert( gamma_move(board, 8, 0, 8) == 1 );
assert( gamma_move(board, 9, 1, 18) == 0 );
assert( gamma_move(board, 1, 6, 5) == 1 );


char* board670843499 = gamma_board(board);
assert( board670843499 != NULL );
assert( strcmp(board670843499, 
".1.....................\n"
".......................\n"
"87...4...73............\n"
"..8.......4............\n"
"....33.................\n"
"......1....2...........\n"
"..1.......7............\n"
"...32..................\n"
".......................\n"
".......9...............\n"
".......................\n") == 0);
free(board670843499);
board670843499 = NULL;
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 6, 16) == 0 );
assert( gamma_move(board, 4, 1, 17) == 0 );
assert( gamma_move(board, 5, 7, 16) == 0 );
assert( gamma_move(board, 6, 10, 1) == 1 );


char* board363322111 = gamma_board(board);
assert( board363322111 != NULL );
assert( strcmp(board363322111, 
".1.....................\n"
".......................\n"
"87...4...73............\n"
"..8.......4............\n"
"....33.................\n"
"......1....2...........\n"
"..1.......7............\n"
"...32..................\n"
".......................\n"
".......9..6............\n"
".......................\n") == 0);
free(board363322111);
board363322111 = NULL;
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_move(board, 8, 1, 3) == 1 );
assert( gamma_move(board, 9, 3, 13) == 0 );
assert( gamma_move(board, 1, 10, 18) == 0 );


char* board724770505 = gamma_board(board);
assert( board724770505 != NULL );
assert( strcmp(board724770505, 
".1.....................\n"
".......................\n"
"87...4...73............\n"
"..8.......4............\n"
"....33.................\n"
"......1....2...........\n"
"..1.......7............\n"
".8.32..................\n"
".......................\n"
".......9..6............\n"
".......................\n") == 0);
free(board724770505);
board724770505 = NULL;
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 1, 23) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 9, 18) == 0 );
assert( gamma_move(board, 6, 0, 22) == 0 );


char* board367415773 = gamma_board(board);
assert( board367415773 != NULL );
assert( strcmp(board367415773, 
".1.....................\n"
".......................\n"
"87...4...73............\n"
"..8.......4............\n"
"....33.................\n"
"......1....2...........\n"
"..1.4.....7............\n"
".8.32..................\n"
".....2.................\n"
".......9..6............\n"
".......................\n") == 0);
free(board367415773);
board367415773 = NULL;
assert( gamma_move(board, 7, 8, 8) == 1 );
assert( gamma_move(board, 8, 4, 3) == 0 );
assert( gamma_move(board, 9, 3, 21) == 0 );
assert( gamma_move(board, 1, 2, 21) == 0 );


char* board258515064 = gamma_board(board);
assert( board258515064 != NULL );
assert( strcmp(board258515064, 
".1.....................\n"
".......................\n"
"87...4..773............\n"
"..8.......4............\n"
"....33.................\n"
"......1....2...........\n"
"..1.4.....7............\n"
".8.32..................\n"
".....2.................\n"
".......9..6............\n"
".......................\n") == 0);
free(board258515064);
board258515064 = NULL;
assert( gamma_move(board, 2, 9, 10) == 1 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );


char* board872437581 = gamma_board(board);
assert( board872437581 != NULL );
assert( strcmp(board872437581, 
".1.......2.............\n"
".......................\n"
"87...4..773............\n"
"..8.......4............\n"
"....33.................\n"
"......1....2...........\n"
"..1.4.....7............\n"
".8.32..................\n"
"6....2.................\n"
".......9..6............\n"
".........5.............\n") == 0);
free(board872437581);
board872437581 = NULL;
assert( gamma_move(board, 7, 6, 18) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 9, 6, 14) == 0 );
assert( gamma_move(board, 1, 7, 14) == 0 );


char* board331249364 = gamma_board(board);
assert( board331249364 != NULL );
assert( strcmp(board331249364, 
".1.......2.............\n"
".......................\n"
"87...4..773............\n"
"..8.......4............\n"
"....33.................\n"
"......1....2...........\n"
"..1.4.....7............\n"
".8.32..................\n"
"6....2.................\n"
".......9..6............\n"
".........5.............\n") == 0);
free(board331249364);
board331249364 = NULL;
assert( gamma_move(board, 2, 5, 23) == 0 );
assert( gamma_move(board, 3, 6, 15) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 6, 4, 20) == 0 );


char* board430660315 = gamma_board(board);
assert( board430660315 != NULL );
assert( strcmp(board430660315, 
".1.......2.............\n"
".......................\n"
"87...4..773............\n"
"..8.......4............\n"
"....33.................\n"
"......1....2...........\n"
"..1.4.5...7............\n"
".8.32..................\n"
"6....2.................\n"
".......9..6............\n"
".........5.............\n") == 0);
free(board430660315);
board430660315 = NULL;
assert( gamma_move(board, 7, 10, 15) == 0 );
assert( gamma_move(board, 8, 4, 14) == 0 );
assert( gamma_move(board, 9, 7, 14) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );


char* board704011350 = gamma_board(board);
assert( board704011350 != NULL );
assert( strcmp(board704011350, 
".1.......2.............\n"
".......................\n"
"87...4..773............\n"
"..8.......4............\n"
"....33.................\n"
"......1....2...........\n"
"..1.4.5...7............\n"
".8.32..................\n"
"6....2.................\n"
".......9..6............\n"
".........5.............\n") == 0);
free(board704011350);
board704011350 = NULL;
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 4, 16) == 0 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 6, 6, 11) == 0 );


char* board163213870 = gamma_board(board);
assert( board163213870 != NULL );
assert( strcmp(board163213870, 
".1.......2.............\n"
".......................\n"
"87...4..773............\n"
"..8.......4............\n"
"....33.................\n"
"....3.1....2...........\n"
"..1.4.55.27............\n"
".8.32..................\n"
"6....2.................\n"
".......9..6............\n"
".........5.............\n") == 0);
free(board163213870);
board163213870 = NULL;
assert( gamma_move(board, 7, 0, 13) == 0 );
assert( gamma_move(board, 8, 9, 9) == 1 );
assert( gamma_move(board, 9, 6, 3) == 1 );
assert( gamma_move(board, 1, 9, 23) == 0 );


char* board951365083 = gamma_board(board);
assert( board951365083 != NULL );
assert( strcmp(board951365083, 
".1.......2.............\n"
".........8.............\n"
"87...4..773............\n"
"..8.......4............\n"
"....33.................\n"
"....3.1....2...........\n"
"..1.4.55.27............\n"
".8.32.9................\n"
"6....2.................\n"
".......9..6............\n"
".........5.............\n") == 0);
free(board951365083);
board951365083 = NULL;
assert( gamma_move(board, 2, 0, 15) == 0 );
assert( gamma_move(board, 3, 2, 20) == 0 );
assert( gamma_move(board, 4, 0, 20) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );


char* board600364767 = gamma_board(board);
assert( board600364767 != NULL );
assert( strcmp(board600364767, 
".1.......2.............\n"
".........8.............\n"
"87...4..773............\n"
"..8.......4............\n"
"....33.................\n"
"....3.1....2...........\n"
"..1.4.55.27............\n"
".8.32.9................\n"
"6....2.................\n"
".......9..6............\n"
".........5.............\n") == 0);
free(board600364767);
board600364767 = NULL;
assert( gamma_move(board, 7, 7, 10) == 1 );
assert( gamma_move(board, 8, 4, 9) == 1 );
assert( gamma_move(board, 9, 5, 4) == 1 );
assert( gamma_move(board, 1, 11, 20) == 0 );


char* board570194595 = gamma_board(board);
assert( board570194595 != NULL );
assert( strcmp(board570194595, 
".1.....7.2.............\n"
"....8....8.............\n"
"87...4..773............\n"
"..8.......4............\n"
"....33.................\n"
"....3.1....2...........\n"
"..1.4955.27............\n"
".8.32.9................\n"
"6....2.................\n"
".......9..6............\n"
".........5.............\n") == 0);
free(board570194595);
board570194595 = NULL;
assert( gamma_move(board, 2, 7, 15) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 1, 13) == 0 );


char* board154478870 = gamma_board(board);
assert( board154478870 != NULL );
assert( strcmp(board154478870, 
".1.....7.2.............\n"
"....8....8.............\n"
"87...4..773............\n"
"..8.......4............\n"
"....33.................\n"
"....3.1....2...........\n"
"..1.4955.27............\n"
".8.32.9................\n"
"6....2.................\n"
".......9..6............\n"
".........5.............\n") == 0);
free(board154478870);
board154478870 = NULL;
assert( gamma_move(board, 7, 6, 20) == 0 );
assert( gamma_move(board, 8, 10, 2) == 1 );
assert( gamma_move(board, 9, 6, 12) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );


char* board416822498 = gamma_board(board);
assert( board416822498 != NULL );
assert( strcmp(board416822498, 
".1.....7.2.............\n"
"....8....8.............\n"
"87...4..773............\n"
"..8.......4............\n"
"....33.................\n"
"....3.1....2...........\n"
"..1.4955.27............\n"
".8.32.9................\n"
"61...2....8............\n"
".......9..6............\n"
".........5.............\n") == 0);
free(board416822498);
board416822498 = NULL;
assert( gamma_move(board, 2, 9, 23) == 0 );
assert( gamma_move(board, 3, 3, 19) == 0 );
assert( gamma_move(board, 4, 1, 16) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 6, 11, 5) == 0 );


char* board231897491 = gamma_board(board);
assert( board231897491 != NULL );
assert( strcmp(board231897491, 
".1.....7.2.............\n"
"....8....8.............\n"
"87...4..773............\n"
"..8.......4............\n"
"....33.................\n"
"..5.3.1....2...........\n"
"..1.4955.27............\n"
".8.32.9................\n"
"61...2....8............\n"
".......9..6............\n"
".........5.............\n") == 0);
free(board231897491);
board231897491 = NULL;
assert( gamma_move(board, 7, 7, 15) == 0 );
assert( gamma_move(board, 8, 5, 15) == 0 );
assert( gamma_move(board, 9, 10, 5) == 1 );
assert( gamma_move(board, 1, 3, 12) == 0 );


char* board124010390 = gamma_board(board);
assert( board124010390 != NULL );
assert( strcmp(board124010390, 
".1.....7.2.............\n"
"....8....8.............\n"
"87...4..773............\n"
"..8.......4............\n"
"....33.................\n"
"..5.3.1...92...........\n"
"..1.4955.27............\n"
".8.32.9................\n"
"61...2....8............\n"
".......9..6............\n"
".........5.............\n") == 0);
free(board124010390);
board124010390 = NULL;
assert( gamma_move(board, 2, 5, 17) == 0 );
assert( gamma_move(board, 3, 5, 20) == 0 );
assert( gamma_move(board, 4, 2, 17) == 0 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 6, 9, 18) == 0 );


char* board304821486 = gamma_board(board);
assert( board304821486 != NULL );
assert( strcmp(board304821486, 
".1.....7.2.............\n"
"..5.8....8.............\n"
"87...4..773............\n"
"..8.......4............\n"
"....33.................\n"
"..5.3.1...92...........\n"
"..1.4955.27............\n"
".8.32.9................\n"
"61...2....8............\n"
".......9..6............\n"
".........5.............\n") == 0);
free(board304821486);
board304821486 = NULL;
assert( gamma_move(board, 7, 1, 17) == 0 );
assert( gamma_move(board, 8, 9, 7) == 1 );
assert( gamma_move(board, 9, 8, 6) == 1 );
assert( gamma_move(board, 1, 0, 10) == 1 );


char* board234097096 = gamma_board(board);
assert( board234097096 != NULL );
assert( strcmp(board234097096, 
"11.....7.2.............\n"
"..5.8....8.............\n"
"87...4..773............\n"
"..8......84............\n"
"....33..9..............\n"
"..5.3.1...92...........\n"
"..1.4955.27............\n"
".8.32.9................\n"
"61...2....8............\n"
".......9..6............\n"
".........5.............\n") == 0);
free(board234097096);
board234097096 = NULL;
assert( gamma_move(board, 2, 0, 20) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 4, 7, 20) == 0 );
assert( gamma_move(board, 5, 11, 4) == 1 );
assert( gamma_move(board, 6, 4, 1) == 1 );


char* board713884797 = gamma_board(board);
assert( board713884797 != NULL );
assert( strcmp(board713884797, 
"11.....7.2.............\n"
"..5.8....8.............\n"
"87...4..773............\n"
"..8......84............\n"
"....33..9..............\n"
"..5.3.1...92...........\n"
"..1.4955.275...........\n"
".8.32.9................\n"
"61...2....8............\n"
"....6..9..6............\n"
".........5.............\n") == 0);
free(board713884797);
board713884797 = NULL;
assert( gamma_move(board, 7, 11, 2) == 1 );
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_move(board, 9, 5, 19) == 0 );
assert( gamma_move(board, 1, 7, 14) == 0 );


char* board842338298 = gamma_board(board);
assert( board842338298 != NULL );
assert( strcmp(board842338298, 
"11.....7.2.............\n"
"..5.8....8.............\n"
"87...4..773............\n"
"..8......84............\n"
"....33..9..............\n"
"..5.3.1...92...........\n"
"..1.4955.275...........\n"
".8.32.9................\n"
"61...2....87...........\n"
"....6..9..6............\n"
".........5.............\n") == 0);
free(board842338298);
board842338298 = NULL;
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 11, 16) == 0 );
assert( gamma_move(board, 4, 11, 17) == 0 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 6, 2, 8) == 1 );


char* board636882975 = gamma_board(board);
assert( board636882975 != NULL );
assert( strcmp(board636882975, 
"11.....7.2.............\n"
"..5.8....8.............\n"
"876..4..773............\n"
"..8...5..84............\n"
"....33..9..............\n"
"..5.3.1...92...........\n"
"..1.4955.275...........\n"
".8.32.9................\n"
"61...2....87...........\n"
"....6..9..6............\n"
".........5.............\n") == 0);
free(board636882975);
board636882975 = NULL;
assert( gamma_move(board, 7, 8, 12) == 0 );
assert( gamma_move(board, 8, 9, 5) == 1 );
assert( gamma_move(board, 9, 1, 9) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );


char* board707690754 = gamma_board(board);
assert( board707690754 != NULL );
assert( strcmp(board707690754, 
"11.....7.2.............\n"
".95.8....8.............\n"
"876..4..773............\n"
"..8...5..84............\n"
"....33..9..............\n"
"..5.3.1..892...........\n"
"..1.4955.275...........\n"
".8132.9................\n"
"61...2....87...........\n"
"....6..9..6............\n"
".........5.............\n") == 0);
free(board707690754);
board707690754 = NULL;
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 1, 19) == 0 );
assert( gamma_move(board, 4, 10, 6) == 1 );
assert( gamma_move(board, 5, 2, 6) == 1 );
assert( gamma_move(board, 6, 6, 18) == 0 );


char* board208117695 = gamma_board(board);
assert( board208117695 != NULL );
assert( strcmp(board208117695, 
"11.....7.2.............\n"
".95.8....8.............\n"
"876..4..773............\n"
"..8...5..84............\n"
"..5.33..9.4............\n"
"..5.3.1..892...........\n"
"..1.4955.275...........\n"
".8132.9................\n"
"61...2....87...........\n"
"....6..9..6............\n"
".........5.............\n") == 0);
free(board208117695);
board208117695 = NULL;
assert( gamma_move(board, 7, 9, 17) == 0 );
assert( gamma_move(board, 8, 5, 1) == 1 );
assert( gamma_move(board, 9, 1, 16) == 0 );
assert( gamma_move(board, 1, 3, 18) == 0 );


char* board978261825 = gamma_board(board);
assert( board978261825 != NULL );
assert( strcmp(board978261825, 
"11.....7.2.............\n"
".95.8....8.............\n"
"876..4..773............\n"
"..8...5..84............\n"
"..5.33..9.4............\n"
"..5.3.1..892...........\n"
"..1.4955.275...........\n"
".8132.9................\n"
"61...2....87...........\n"
"....68.9..6............\n"
".........5.............\n") == 0);
free(board978261825);
board978261825 = NULL;
assert( gamma_move(board, 2, 11, 22) == 0 );
assert( gamma_move(board, 3, 11, 8) == 1 );
assert( gamma_move(board, 4, 10, 19) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 6, 6, 20) == 0 );


char* board205086897 = gamma_board(board);
assert( board205086897 != NULL );
assert( strcmp(board205086897, 
"11.....7.2.............\n"
".95.8....8.............\n"
"876..4..7733...........\n"
"..8...5..84............\n"
"..5.33..9.4............\n"
"..5.3.1..892...........\n"
"..1.4955.275...........\n"
".8132.9................\n"
"61...2....87...........\n"
"....68.9..6............\n"
".........5.............\n") == 0);
free(board205086897);
board205086897 = NULL;
assert( gamma_move(board, 7, 8, 18) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_move(board, 9, 7, 20) == 0 );
assert( gamma_move(board, 1, 4, 8) == 1 );


char* board770866701 = gamma_board(board);
assert( board770866701 != NULL );
assert( strcmp(board770866701, 
"11.....7.2.............\n"
".95.8....8.............\n"
"876.14..7733...........\n"
"..8...5..84............\n"
"..5.33..9.4............\n"
"..5.3.1..892...........\n"
"..1.4955.275...........\n"
".8132.9................\n"
"61...2....87...........\n"
"....68.9..6............\n"
".........5.............\n") == 0);
free(board770866701);
board770866701 = NULL;
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_move(board, 6, 6, 0) == 1 );


char* board651298373 = gamma_board(board);
assert( board651298373 != NULL );
assert( strcmp(board651298373, 
"11.....7.2.............\n"
".9558....8.............\n"
"876.14..7733...........\n"
"..8...5..84............\n"
"..5.33..9.4............\n"
"..5.3.1..892...........\n"
"..1.4955.275...........\n"
".8132.9................\n"
"61...2....87...........\n"
"....68.9..6............\n"
"......6..5.............\n") == 0);
free(board651298373);
board651298373 = NULL;
assert( gamma_move(board, 7, 1, 22) == 0 );
assert( gamma_move(board, 8, 4, 23) == 0 );
assert( gamma_move(board, 9, 8, 5) == 1 );
assert( gamma_move(board, 1, 9, 6) == 1 );


char* board229869794 = gamma_board(board);
assert( board229869794 != NULL );
assert( strcmp(board229869794, 
"11.....7.2.............\n"
".9558....8.............\n"
"876.14..7733...........\n"
"..8...5..84............\n"
"..5.33..914............\n"
"..5.3.1.9892...........\n"
"..1.4955.275...........\n"
".8132.9................\n"
"61...2....87...........\n"
"....68.9..6............\n"
"......6..5.............\n") == 0);
free(board229869794);
board229869794 = NULL;
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 8, 20) == 0 );
assert( gamma_move(board, 5, 10, 10) == 1 );
assert( gamma_move(board, 6, 6, 15) == 0 );


char* board486816880 = gamma_board(board);
assert( board486816880 != NULL );
assert( strcmp(board486816880, 
"11.....7.25............\n"
".9558....8.............\n"
"876.14..7733...........\n"
"..8...5..84............\n"
"..5.33..914............\n"
"..5.3.1.9892...........\n"
"..1.4955.275...........\n"
".8132.9................\n"
"613..2....87...........\n"
"....68.9..6............\n"
"......6..5.............\n") == 0);
free(board486816880);
board486816880 = NULL;
assert( gamma_move(board, 7, 5, 13) == 0 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 9, 11, 19) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );


char* board620658707 = gamma_board(board);
assert( board620658707 != NULL );
assert( strcmp(board620658707, 
"11.....7.25............\n"
".9558....8.............\n"
"876.14..7733...........\n"
"..8...5..84............\n"
"..5.33..914............\n"
"..5.3.1.9892...........\n"
"..1.4955.275...........\n"
".8132.9................\n"
"613..2....87...........\n"
"....68.9..6............\n"
"......6..5.............\n") == 0);
free(board620658707);
board620658707 = NULL;
assert( gamma_move(board, 2, 1, 15) == 0 );
assert( gamma_move(board, 3, 6, 21) == 0 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 6, 1, 3) == 0 );


char* board333276894 = gamma_board(board);
assert( board333276894 != NULL );
assert( strcmp(board333276894, 
"11.....7.25............\n"
".9558....8.............\n"
"876.14..7733...........\n"
"..8...5..84............\n"
"..5.33..914............\n"
"..5.3.1.9892...........\n"
"..1.4955.275...........\n"
".8132.9................\n"
"613..2....87...........\n"
"....68.9..6............\n"
"...5..6..5.............\n") == 0);
free(board333276894);
board333276894 = NULL;
assert( gamma_move(board, 7, 10, 22) == 0 );
assert( gamma_move(board, 8, 0, 19) == 0 );
assert( gamma_move(board, 9, 8, 8) == 0 );
assert( gamma_move(board, 1, 5, 18) == 0 );


char* board981032011 = gamma_board(board);
assert( board981032011 != NULL );
assert( strcmp(board981032011, 
"11.....7.25............\n"
".9558....8.............\n"
"876.14..7733...........\n"
"..8...5..84............\n"
"..5.33..914............\n"
"..5.3.1.9892...........\n"
"..1.4955.275...........\n"
".8132.9................\n"
"613..2....87...........\n"
"....68.9..6............\n"
"...5..6..5.............\n") == 0);
free(board981032011);
board981032011 = NULL;
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 5, 4, 22) == 0 );
assert( gamma_move(board, 6, 2, 14) == 0 );


char* board262854015 = gamma_board(board);
assert( board262854015 != NULL );
assert( strcmp(board262854015, 
"11.....7.25............\n"
".9558....8.............\n"
"876.14..7733...........\n"
"..8...5..84............\n"
"..5.33..914............\n"
"..5.3.1.9892...........\n"
"..1.4955.275...........\n"
".8132.9................\n"
"613..2....87...........\n"
"....68.9..6............\n"
"...5..6..5.............\n") == 0);
free(board262854015);
board262854015 = NULL;
assert( gamma_move(board, 7, 10, 3) == 1 );
assert( gamma_move(board, 8, 0, 11) == 0 );
assert( gamma_move(board, 9, 5, 8) == 0 );
assert( gamma_move(board, 1, 8, 20) == 0 );


char* board980166610 = gamma_board(board);
assert( board980166610 != NULL );
assert( strcmp(board980166610, 
"11.....7.25............\n"
".9558....8.............\n"
"876.14..7733...........\n"
"..8...5..84............\n"
"..5.33..914............\n"
"..5.3.1.9892...........\n"
"..1.4955.275...........\n"
".8132.9...7............\n"
"613..2....87...........\n"
"....68.9..6............\n"
"...5..6..5.............\n") == 0);
free(board980166610);
board980166610 = NULL;
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 4, 23) == 0 );
assert( gamma_move(board, 5, 11, 18) == 0 );
assert( gamma_move(board, 6, 9, 9) == 0 );


char* board272535998 = gamma_board(board);
assert( board272535998 != NULL );
assert( strcmp(board272535998, 
"11.....7.25............\n"
".9558....8.............\n"
"876.14..7733...........\n"
"..8...5..84............\n"
"..5.33..914............\n"
"..5.3.1.9892...........\n"
"..1.4955.275...........\n"
".8132.9...7............\n"
"613..2....87...........\n"
"....68.9..6............\n"
"...5..6..5.............\n") == 0);
free(board272535998);
board272535998 = NULL;
assert( gamma_move(board, 7, 8, 7) == 1 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 9, 11, 5) == 0 );
assert( gamma_move(board, 1, 3, 7) == 1 );


char* board605169121 = gamma_board(board);
assert( board605169121 != NULL );
assert( strcmp(board605169121, 
"11.....7.25............\n"
".9558....8.............\n"
"876.14..7733...........\n"
"..81..5.784............\n"
"..5.33..914............\n"
"..5.3.1.9892...........\n"
".81.4955.275...........\n"
".8132.9...7............\n"
"613..2....87...........\n"
"....68.9..6............\n"
"...5..6..5.............\n") == 0);
free(board605169121);
board605169121 = NULL;
assert( gamma_move(board, 2, 2, 17) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 5, 6, 20) == 0 );
assert( gamma_move(board, 6, 0, 17) == 0 );


char* board797642375 = gamma_board(board);
assert( board797642375 != NULL );
assert( strcmp(board797642375, 
"11.....7.25............\n"
".9558....8.............\n"
"876.14..7733...........\n"
"..81..5.784............\n"
"..5.33..914............\n"
"..5.3.1.9892...........\n"
".81.4955.275...........\n"
".8132.9...7............\n"
"613..2....87...........\n"
"....68.9..6............\n"
"...5..6..5.............\n") == 0);
free(board797642375);
board797642375 = NULL;
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 8, 0, 19) == 0 );
assert( gamma_move(board, 9, 11, 7) == 1 );
assert( gamma_move(board, 1, 2, 18) == 0 );


char* board983745711 = gamma_board(board);
assert( board983745711 != NULL );
assert( strcmp(board983745711, 
"11.....7.25............\n"
".9558....8.............\n"
"876.14..7733...........\n"
"..81..5.7849...........\n"
"..5.33..914............\n"
"..5.3.1.9892...........\n"
".81.4955.275...........\n"
".8132.9...7............\n"
"613..2....87...........\n"
"....68.9..6............\n"
"...5..6..5.............\n") == 0);
free(board983745711);
board983745711 = NULL;
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 1, 20) == 0 );
assert( gamma_move(board, 5, 2, 19) == 0 );
assert( gamma_move(board, 6, 9, 23) == 0 );


char* board633460633 = gamma_board(board);
assert( board633460633 != NULL );
assert( strcmp(board633460633, 
"11.....7.25............\n"
".9558....8.............\n"
"876.14..7733...........\n"
"..81..5.7849...........\n"
"..5.33..914............\n"
"..5.3.1.9892...........\n"
".81.4955.275...........\n"
".8132.9...7............\n"
"613..2....87...........\n"
"....68.9..6............\n"
"...5..6..5.............\n") == 0);
free(board633460633);
board633460633 = NULL;
assert( gamma_move(board, 7, 9, 15) == 0 );
assert( gamma_move(board, 8, 8, 10) == 0 );
assert( gamma_move(board, 9, 3, 14) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );


char* board364918949 = gamma_board(board);
assert( board364918949 != NULL );
assert( strcmp(board364918949, 
"11.....7.25............\n"
".9558....8.............\n"
"876.14..7733...........\n"
"..81..5.7849...........\n"
"..5.33..914............\n"
"..5.3.1.9892...........\n"
".81.4955.275...........\n"
".8132.9...7............\n"
"613..2....87...........\n"
"....68.9..6............\n"
"...5..6..5.............\n") == 0);
free(board364918949);
board364918949 = NULL;
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 6, 20) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 2, 22) == 0 );
assert( gamma_move(board, 6, 5, 0) == 1 );


char* board298099064 = gamma_board(board);
assert( board298099064 != NULL );
assert( strcmp(board298099064, 
"11.....7.25............\n"
".9558....8.............\n"
"876.14..7733...........\n"
"..81..5.7849...........\n"
"..5.33..914............\n"
"..5.3.1.9892...........\n"
".81.4955.275...........\n"
".8132.9...7............\n"
"613..2....87...........\n"
"....68.9..6............\n"
"...5.662.5.............\n") == 0);
free(board298099064);
board298099064 = NULL;
assert( gamma_move(board, 7, 6, 21) == 0 );
assert( gamma_move(board, 8, 1, 21) == 0 );
assert( gamma_move(board, 9, 7, 3) == 1 );
assert( gamma_move(board, 1, 3, 12) == 0 );


char* board643225254 = gamma_board(board);
assert( board643225254 != NULL );
assert( strcmp(board643225254, 
"11.....7.25............\n"
".9558....8.............\n"
"876.14..7733...........\n"
"..81..5.7849...........\n"
"..5.33..914............\n"
"..5.3.1.9892...........\n"
".81.4955.275...........\n"
".8132.99..7............\n"
"613..2....87...........\n"
"....68.9..6............\n"
"...5.662.5.............\n") == 0);
free(board643225254);
board643225254 = NULL;
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_move(board, 4, 6, 16) == 0 );
assert( gamma_move(board, 5, 9, 21) == 0 );
assert( gamma_move(board, 6, 1, 11) == 0 );


char* board257030353 = gamma_board(board);
assert( board257030353 != NULL );
assert( strcmp(board257030353, 
"11.....7.25............\n"
".9558....8.............\n"
"876.14..7733...........\n"
"..81..5.7849...........\n"
"..5.33..914............\n"
"..5.3.1.9892...........\n"
".81.4955.275...........\n"
".8132.99..7............\n"
"613..2....87...........\n"
"....68.9..6............\n"
"...5.662.5.............\n") == 0);
free(board257030353);
board257030353 = NULL;
assert( gamma_move(board, 7, 11, 5) == 0 );
assert( gamma_move(board, 8, 2, 11) == 0 );
assert( gamma_move(board, 9, 0, 9) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );


char* board694184407 = gamma_board(board);
assert( board694184407 != NULL );
assert( strcmp(board694184407, 
"11.....7.25............\n"
"99558....8.............\n"
"876.14..7733...........\n"
"..81..5.7849...........\n"
"..5.33..914............\n"
"..5.3.1.9892...........\n"
".81.4955.275...........\n"
".8132.99..7............\n"
"613..2....87...........\n"
"....68.9..6............\n"
"...5.662.5.............\n") == 0);
free(board694184407);
board694184407 = NULL;
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_move(board, 4, 9, 18) == 0 );
assert( gamma_move(board, 5, 4, 16) == 0 );
assert( gamma_move(board, 6, 10, 18) == 0 );


char* board490283452 = gamma_board(board);
assert( board490283452 != NULL );
assert( strcmp(board490283452, 
"11....37.25............\n"
"99558....8.............\n"
"876.14..7733...........\n"
"..81..5.7849...........\n"
"..5.33..914............\n"
"..5.3.1.9892...........\n"
".81.4955.275...........\n"
".8132.99..7............\n"
"613..2....87...........\n"
"....68.9..6............\n"
"...5.662.5.............\n") == 0);
free(board490283452);
board490283452 = NULL;
assert( gamma_move(board, 7, 11, 0) == 1 );
assert( gamma_move(board, 8, 8, 7) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );


char* board467555400 = gamma_board(board);
assert( board467555400 != NULL );
assert( strcmp(board467555400, 
"11....37.25............\n"
"99558....8.............\n"
"876.14..7733...........\n"
"..81..5.7849...........\n"
"..5.33..914............\n"
"..5.3.1.9892...........\n"
".81.4955.275...........\n"
".8132.99..7............\n"
"613..2....87...........\n"
"....68.9..6............\n"
"...5.662.5.7...........\n") == 0);
free(board467555400);
board467555400 = NULL;


gamma_delete(board);

    return 0;
}