#include <iostream>
using namespace std;

class cube
{
private:
    int height;
    int width;
    int length;

public:
    void setDimensions()
    {
        cout << "Enter height: ";
        cin >> height;
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter length: ";
        cin >> length;
    }

    int volume()
    {
        return height * width * length;
    }
};

int main()
{
    cube cube1;

    cube1.setDimensions(); 
    int vol = cube1.volume(); 
    cout << "Volume: " << vol << endl;

    return 0;
}


//Output:
//Enter height: 6
//Enter width: 2
//Enter length: 16
//Volume: 192
