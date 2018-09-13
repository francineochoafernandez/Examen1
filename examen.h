#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;

struct NumComplejo
{
  float x, y;

  NumComplejo operator+ (NumComplejo aux)
  {
    NumComplejo res;
    res.x = x + aux.x;
    res.y = y + aux.y;
    return res;
  }

  NumComplejo operator- (NumComplejo aux)
  {
    NumComplejo res;
    res.x = x - aux.x;
    res.y = y - aux.y;
    return res;
  }

  NumComplejo operator* (NumComplejo aux)
  {
    NumComplejo res;
    res.x = (x * aux.x) - (y * aux.y);
    res.y = (y * aux.x) + (x * aux.y);
    return res;
  }

  NumComplejo operator/ (NumComplejo aux)
  {
    NumComplejo res;
    res.x = ((x * aux.x) + (y * aux.y))/(pow(aux.x,2)+pow(aux.y,2));
    res.y =((y * aux.x) - (x * aux.y))/(pow(aux.x,2)+pow(aux.y,2));
    return res;
  }

  char MasMenos(float x, float y)
  {
    char suma='+',resta='-';
    if(y>=0)
    {
      return suma;
    }
    else
    {
      return '\0';
    }
  }

  void Muestra ()
  {
  cout << "[" << x << MasMenos(x, y) << y << "i]" << endl<< endl;
  }

};
