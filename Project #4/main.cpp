// Evan Walpole
// This program receives input of a movie, place, and cost 3 times
// and if the cost is 0, displays the free movies available.
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

struct Movie
{
	string title;
	string whereToWatch;
	double cost;
};

Movie getMovieInfo(Movie &);
void displayFreeMovies(Movie, Movie, Movie);

int main()
{
	Movie movie1, movie2, movie3;

	cout << "Movie 1" << endl;
	movie1 = getMovieInfo(movie1);
	cout << "Movie 2" << endl;
	getMovieInfo(movie2);
	cout << "Movie 3" << endl;
	getMovieInfo(movie3);

	displayFreeMovies(movie1, movie2, movie3);


}

// This function asks the user to input the details about 3 movies.
Movie getMovieInfo(Movie & movieInput)
{
	cout << "Enter a movie title : ";
	getline(cin, movieInput.title);
	cout << "Enter a place it can be watched (Theater, Netflix, etc.) : ";
	getline(cin, movieInput.whereToWatch);
	cout << "Enter the price : ";
	cin >> movieInput.cost;
	cout << endl;
	cin.ignore();
	
	return movieInput;
}

// This function displays each movie that is free.
void displayFreeMovies(const Movie movie1, const Movie movie2, const Movie movie3)
{
	cout << "Available Free Movies" << endl;

	if (!movie1.cost == 0.0 && !movie3.cost == 0.0 && !movie2.cost == 0.0)
	cout << "There are no free movies at this time.";
	else
	{
		if (movie1.cost == 0.0){
		cout << "  " << movie1.title << " playing on " << movie1.whereToWatch << endl;
		}
		
		if (movie2.cost == 0.0){
		cout << "  " << movie2.title << " playing on " << movie2.whereToWatch << endl; 
		}

		if (movie3.cost == 0.0){
		cout << "  " << movie3.title << " playing on " << movie3.whereToWatch << endl;
		}			
	}
	



}