/*
   Program name:  e.g. Rectangle.cpp
   Programmer:  your name
   Date: 2-18-22
   Version: 1.4
   Description: about 3 to 5 lines explain what is this program all about.
*/

#include <iostream>
#include <string>

using namespace std;

struct MovieData
{
    string Title = "";
    string Director;
    string YearR;
    string RunT;

};

void dispM(MovieData m1)
{
  cout << "Title:  " << m1.Title << '\n'
       << "Director: " << m1.Director << '\n'
       << "Release Year: " << m1.YearR << '\n'
       << "Run Time (mins):  "<< m1.RunT << '\n';
}

int main()
{
  MovieData movie1, movie2;

  movie1.Title = "badass movie";
  movie1.Director = "This Guy";

  dispM(movie1);
 
}

