#include <iostream>
#include <string>

const int pawn = 100;
const int bishop = 305;
const int knight = 300;
const int rook = 500;
const int queen = 900;
const int king = 2000;

int board[8][8];

const int startup[8][8] = {
  rook, knight, bishop, queen, king,
  bishop, knight, rook, pawn, pawn,
  pawn, pawn, pawn, pawn, pawn, pawn,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  -pawn, -pawn, -pawn, -pawn, -pawn,
  -pawn, -pawn, -pawn, -rook, -knight,
  -bishop, -queen, -king, -bishop,
  -knight, -rook
};

void setup(void) {
  int i, j;
  for (i =0; i < 8; i++) {
    for (j = 0; j < 8; j++) {
      board[i][j] = startup[i][j];
    }
  }
}

void printb(void) {
  using namespace std;
  int a, b;
  string piece;

  for (a = 7; a > -1; a--) {

     cout << endl;

     for (b = 0; b < 8; b++) {
       switch (board[a][b]) {
       case 0:
         piece = "-";
       break;
       case pawn:
         piece = "P";
       break;
       case knight:
         piece = "N";
       break;
       case bishop:
         piece = "B";
       case rook:
         piece = "R";
       break;
       case queen:
         piece = "Q";
       break;
       case king:
         piece = "K";
       break;
       case -pawn:
         piece = "p";
       break;
       case -knight:
         piece = "k";
       break;
       case -bishop:
         piece = "b";
       break;
       case -rook:
         piece = "r";
       break;
       case -queen:
         piece = "q";
       break;
       case -king:
         piece = "k";
       break;
       }
       cout << " " << piece << " ";
     }
  }

  cout << endl << endl;
}

