#include <iostream>

using namespace std;

class Movie
{
    private:
        int rating;

        void setrating(int aRating)
        {
            while (aRating != 1 && aRating != 2 && aRating != 3 && aRating != 4 && aRating != 5)
            {
                /*if (aRating == 1 || aRating == 2 || aRating == 3 || aRating == 4 || aRating == 5 )
                {
                    rating = aRating;
                }
                else
                {*/
                    cout << "invalid rating number" << endl;
                    cout << "input rating" << endl;
                    cin >> aRating;
                //}         
            }
            rating = aRating;
        }

    public:
        string title;
        string director;
        string good;

        Movie(string aTitle, string aDirector, int aRating)
        {
            title = aTitle;
            director = aDirector;
            setrating(aRating);
        }

        int getRating()
        {
            return rating;
        }

        string goodMovie(int standard)
        {
            if (rating >= standard)
            {
                good = "Yes";
            }
            else
            {
                good = "No";
            }
            return good;
        }

};

int main()
{
    string title;
    string director;
    int rating;
    
    cout << "input title" << endl;
    getline(cin, title);
    cout << "input director" << endl;
    getline(cin, director);
    cout << "input rating" << endl;
    cin >> rating;

    Movie movie1 = Movie(title, director, rating);
    cout << movie1.getRating() << endl;
    cout << movie1.goodMovie(3) << endl;
    return 0;
}
