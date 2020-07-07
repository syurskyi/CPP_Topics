#include <iostream>

using namespace std;

main ()
{
    int numberOfPoints;

    cout << "Enter the number of points you have achieved: ";
    cin >> numberOfPoints;

    if ((numberOfPoints >= 0) && (numberOfPoints <= 100))
    {
        string outputMessage = (numberOfPoints > 50)
            ? "You have passed the exam. Congratulations."
            : "You didn't pass the exam.";

        cout << outputMessage;
    }
    else
        cout << "ERROR. The number of points is invalid !";



}
