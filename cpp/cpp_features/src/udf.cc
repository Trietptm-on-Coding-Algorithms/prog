#include <iostream>

namespace udf {

	struct dblVec {
		int sz;
		double* elem;
	};

	void vector_init(dblVec& v, int s) {
		v.elem = new double[s];
		v.sz = s;
	}

	double readAndSum(int s) {

		dblVec v;
		vector_init(v,s);

		for(int i = 0; i != s; ++i) {

			std::cin >> v.elem[i];

		}

		double sum = 0.0;

		for(int i = 0; i != s; ++i) {

			sum += v.elem[i];

		}

		return sum;
	}

	namespace classes {

		class Vector {
			public:
				Vector(int s) // member initializer list syntax
					:elem{new double[s]}, 
					sz{s} { }
				double& operator[](int i) { return elem[i]; }
				int size() { return sz; }
			private:
				double* elem;
				int sz;
		};



	}

	namespace enums {
		enum class Color { red,blue,green };

		Color& operator++(Color& c) {
			switch(c) {
				case Color::red: return c= Color::blue;
				case Color::blue: return c= Color::green;
				case Color::green: return c= Color::red;
			}
		}	
		Color aColor = Color::red;
		const Color FAVORITE_COLOR = ++aColor;
		//C style enums are still available
		enum ColorC { redd, bluee, greenn };
	}

	namespace interface {

		//This can be in a header file
		class Vector {
			public:
				Vector(int s);
				double& operator[](int i);
				int size() noexcept;
			private:
				double* elem;
				int sz;	
		};

		//The following can be in a separate file
		Vector::Vector(int s) :elem{new double[s]}, sz{s} {}

		double& Vector::operator[](int i) {

			if (i < 0 || size()<= i) {
				throw "Vector::operator[]";
			}
			return elem[i];
		}

		//noexcept documents that this never throws an except
		int Vector::size() noexcept {
			return sz;
		}


	}

	namespace arith {
		class complex {
			double re, im;
			public:
				complex(double r, double i)
					:re{r},
						im{i}
				{}
				complex(double r) : re{r}, im{0} {}
				complex() : re{0}, im{0} {}

				double real() const { return re; }
				void real(double d) { re = d; }
				double imag() const { return im; }
				void imag(double d) { im = d; }

				complex& operator+=(complex  z) {
					re+=z.re, im+= z.im; return *this;
				}

				complex& operator-=(complex z) {
					re-=z.re, im -= z.im; return *this;
				}

				complex& operator*=(complex);
				complex& operator/=(complex);

		};
	}

}
//page 40
