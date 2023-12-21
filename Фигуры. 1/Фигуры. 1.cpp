#include <iostream>
#include <string>
using namespace std;

class Figure
{
private:
    string name;
    int sides_count;
public:
    void print()
    {
        cout << "" << name << ": " << sides_count << endl;
    }
    Figure(string name1, int sides_count1)
    {
        name = name1;
        sides_count = sides_count1;
    }
    Figure() : Figure("Фигура", 0) { cout << "Количество сторон: " << endl; }
};

class Triangle : public Figure
{
public:
    Triangle() : Figure("Треугольник", 3) {}
};

class Quadrangle : public Figure
{
public:
    Quadrangle() : Figure("Четырёхугольник", 4) {}
};
int main()
{
    setlocale(LC_ALL, "Rus");
    Figure sam;
    sam.print();
    Triangle triangle;
    triangle.print();
    Quadrangle quadrangle;
    quadrangle.print();
}