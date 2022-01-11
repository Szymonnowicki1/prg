#include <iostream>

using namespace std;


void tab(char t[])
{
  for(int i = 1; i <= 9; i++)
  {
    cout << " " << t[i] << " ";
    if(i % 3)
      cout << "|";
    else if(i != 9)
      cout << "\n---+---+---\n";
    else cout << endl;
  }
}


bool wygrana(char t[], char g)
{
  bool cos;
  int i;

  cos = false;
  for(i = 1; i <= 7; i += 3)
    cos |= ((t[i] == g) && (t[i+1] == g) && (t[i+2] == g));
  for(i = 1; i <= 3; i++)
    cos |= ((t[i] == g) && (t[i+3] == g) && (t[i+6] == g));
  cos |= ((t[1] == g) && (t[5] == g) && (t[9] == g));
  cos |= ((t[3] == g) && (t[5] == g) && (t[7] == g));
  if(cos)
  {
    tab(t);
    cout << "gracz " << g << " wygrywa";
    return true;
  }
  return false;
}


bool remis(char t[])
{
  for(int i = 1; i <= 9; i++)
    if(t[i] == ' ') return false;
  tab(t);
  cout << "remis";
  return true;
}


void ruch(char t[], char &gracz)
{
   int r;

   tab(t);
   cout << "gracz " << gracz << " Twoj ruch : ";
   cin >> r;
   cout << "-----------------------\n\n";
   if((r >= 1) && (r <= 9) && (t[r] == ' ')) t[r] = gracz;
   gracz = (gracz == 'O') ? 'X' : 'O';
}

main()
{
  char p[10],g,w;

  do
  {
    cout << "Gra w Kolko i Krzyzyk";
    for(int i = 1; i <= 9; i++) p[i] = ' ';
    g = 'O';
    while(!wygrana(p,'X') && !wygrana(p,'O') && !remis(p)) ruch(p,g);
    cout << "Jeszcze raz ? (T = TAK) : ";
    cin >> w;
  } while((w == 'T') || (w == 't'));
}
