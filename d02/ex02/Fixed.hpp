#include <iostream>


class Fixed {
	public:
		Fixed();
		Fixed(Fixed const &src);
		Fixed(int const num);
		Fixed(float const num);
		~Fixed();
        Fixed & operator=( Fixed const &rhs );
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
        int toInt( void ) const;
        bool operator==( Fixed const &rhs ) const;
        bool operator!=( Fixed const &rhs ) const;
        bool operator>( Fixed const &rhs ) const;
        bool operator<( Fixed const &rhs ) const;
        bool operator>=( Fixed const &rhs ) const;
        bool operator<=( Fixed const &rhs ) const;
        Fixed operator+( Fixed const &rhs ) const;
        Fixed operator-( Fixed const &rhs ) const;
        Fixed operator*( Fixed const &rhs ) const;
        Fixed operator/( Fixed const &rhs ) const;
        Fixed & operator++( void );
        Fixed operator++(int);
        Fixed & operator--( void );
        Fixed operator--(int);
        static const Fixed & min(Fixed const &first, Fixed const &second);
        static Fixed & min(Fixed &first, Fixed &second);
        static const Fixed & max(Fixed const &first, Fixed const &second);
        static Fixed & max(Fixed &first, Fixed &second);

	private:
		int _value;
		static const int _fractional_bits = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs);
