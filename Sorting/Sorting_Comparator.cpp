#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

struct Player {
    int score;
    string name;
};

class Checker{
public:
  	// complete this method
    static int comparator(Player a, Player b)  {
    if(a.score == b.score)
      if (a.name == b.name)
        return 0;
      else 
        return  ( a.name > b.name )? -1:1;
        
    return (a.score<b.score)?-1:1;    
    }
};


