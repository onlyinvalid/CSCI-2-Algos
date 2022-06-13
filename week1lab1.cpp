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

