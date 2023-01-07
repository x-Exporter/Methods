#include <iostream>

using namespace std;


class Figure
{
protected:
	int a;
	int b;
	int c;

	int A;
	int B;
	int C;
public:
	Figure()
	{

	}
	virtual void get_info()
	{

	}
};


class Triangle : public Figure
{
protected:
	int a;
	int b;
	int c;

	int A;
	int B;
	int C;
	int amount;
public:
	Triangle()
	{
	}
	Triangle(int amount,int a, int b, int c, int A, int B, int C)
	{
		this->amount = amount;
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
	}
	void get_info() override
	{
		cout << "Треугольник:" << endl;
		if ((amount == 3) && (A + B + C == 180))
		{
			cout << "Правильная" << endl;
		}
		else
		{
			cout << "Неправильная" << endl;
		}
		cout << "Количество сторон: " << amount << endl;
		cout << "Стороны: a=" << a << " b=" << b << " c=" << c << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C;
	}

};


class Right_triangle : public Triangle
{
public:
	Right_triangle(int amount,int a, int b, int c, int A, int B,int C)
	{
		this->amount = amount;
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
	}

	void get_info() override
	{
		cout << "\n\nПрямоугольный треугольник:" << endl;
		if ((C== 90) && (A + B + C == 180))
		{
			cout << "Правильная" << endl;
		}
		else
		{
			cout << "Неправильная" << endl;
		}
		cout << "Количество сторон: " << amount << endl;
		cout << "Стороны: a=" << a << " b=" << b << " c=" << c << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C;
	}
};

class Isosceles_triangle : public Triangle
{
public:
	Isosceles_triangle(int amount, int a, int b, int c, int A, int B, int C)
	{
		this->amount = amount;
		this->a = a;
		this->b = b;
		this->c = c;

		this->A = A;
		this->B = B;
		this->C = C;
	}

	void get_info() override
	{
		cout << "\n\nРавнобедренный треугольник:" << endl;
		if ((a == c) && (A + B + C == 180) && (A == C))
		{
			cout << "Правильная" << endl;
		}
		else
		{
			cout << "Неправильная" << endl;
		}
		cout << "Количество сторон: " << amount << endl;
		cout << "Стороны: a=" << a << " b=" << b << " c=" << c << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C;
	}
};

class Equilateral_triangle : public Triangle
{
public:
	Equilateral_triangle(int amount, int a, int b, int c, int A, int B, int C)
	{
		this->amount = amount;
		this->a = a;
		this->b = b;
		this->c = c;

		this->A = A;
		this->B = B;
		this->C = C;
	}

	void get_info() override
	{
		cout << "\n\nРавносторонний треугольник:" << endl;
		if ((A == 60) && (B == 60) && (C = 60) && (a == b) && (b == c))
		{
			cout << "Правильная" << endl;
		}
		else
		{
			cout << "Неправильная" << endl;
		}
		cout << "Количество сторон: " << amount << endl;
		cout << "Стороны: a=" << a << " b=" << b << " c=" << c << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C;
	}
};

class Quadrilateral : public Figure
{
protected:
	int a;
	int b;
	int c;
	int d;

	int A;
	int B;
	int C;
	int D;
	int amount;
public:
	Quadrilateral()
	{
	}
	Quadrilateral(int amount,int a, int b, int c, int d, int A, int B, int C, int D)
	{
		this->amount = amount;
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;

		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
	}
	void get_info() override
	{
		cout << "\n\nЧетырехугольник:" << endl; 
		if (A + B + C + D == 360)
		{
			cout << "Правильная" << endl;
		}
		else
		{
			cout << "Неправильная" << endl;
		}
		cout << "Количество сторон: " << amount << endl;
		cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D;
	}
};

class Rectangle : public Quadrilateral
{
public:
	Rectangle(int amount, int a, int b, int c, int d, int A, int B, int C, int D)
	{
		this->amount = amount;
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;

		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
	}
	void get_info() override
	{
		cout << "\n\nПрямоугольник:" << endl;
		if (((A == 90) && (B == 90) && (C == 90) && (D == 90)) && ((a == c) && (b == d)))
		{
			cout << "Правильная" << endl;
		}
		else
		{
			cout << "Неправильная" << endl;
		}
		cout << "Количество сторон: " << amount << endl;
		cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D;
	}
};

class Square : public Quadrilateral
{
public:
	Square(int amount, int a, int b, int c, int d, int A, int B, int C, int D)
	{
		this->amount = amount;
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;

		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
	}
	void get_info() override
	{
		cout << "\n\nКвадрат:" << endl;
		if (((A == 90) && (B == 90) && (C == 90) && (D == 90)) && ((a == b) && (b == c) && (c == d)))
		{
			cout << "Правильная" << endl;
		}
		else
		{
			cout << "Неправильная" << endl;
		}
		cout << "Количество сторон: " << amount << endl;
		cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D;
	}
};

class Parallelogram : public Quadrilateral
{
public:
	Parallelogram(int amount, int a, int b, int c, int d, int A, int B, int C, int D)
	{
		this->amount = amount;
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;

		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
	}
	void get_info() override
	{
		cout << "\n\nПараллелограмм:" << endl;
		if (((A == C) && (B == D) && (A + B + C + D == 360)) && ((a == c) && (b == d)))
		{
			cout << "Правильная" << endl;
		}
		else
		{
			cout << "Неправильная" << endl;
		}
		cout << "Количество сторон: " << amount << endl;
		cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D;
	}

};

class Rhomb : public Quadrilateral
{
public:
	Rhomb(int amount, int a, int b, int c, int d, int A, int B, int C, int D)
	{
		this->amount = amount;
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;

		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
	}
	void get_info() override
	{
		cout << "\n\nРомб:" << endl;
		if ((A + B + C + D == 360) && (a == b == c == d) && (A == C) && (B == D))
		{
			cout << "Правильная" << endl;
		}
		else
		{
			cout << "Неправильная" << endl;
		}
		cout << "Количество сторон: " << amount << endl;
		cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << endl;
		cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D;
	}

};

void print_info(Figure* figure)
{
	figure->get_info();
}

int main()
{
	setlocale(LC_ALL, "ru");

	Triangle triangle(3,10, 20, 30, 50, 60, 70);
	print_info(&triangle);

	Right_triangle right_triangle(3,10, 20, 30, 50, 60,90);
	print_info(&right_triangle);

	Isosceles_triangle sosceles_triangle(3,10,20,10,50,60,50);
	print_info(&sosceles_triangle);

	Equilateral_triangle equilateral_triangle(3,30,30,30,60,60,60);
	print_info(&equilateral_triangle);

	Quadrilateral quadrilateral(4,10,20,30,40,50,60,70,80);
	print_info(&quadrilateral);

	Rectangle rectangle(4,10,20,10,20,90,90,90,90);
	print_info(&rectangle);

	Square square(4,20,20,20,20,90,90,90,90);
	print_info(&square);

	Parallelogram parallelogram(4, 20, 30, 20, 30, 30, 40, 30, 40);
	print_info(&parallelogram);

	Rhomb rhomb(4, 30, 30, 30, 30, 30, 40, 30, 40);
	print_info(&rhomb);
}