#include <iostream>
#include <thread>
#include <chrono>

int main( )
{
	std::cout << "helo world" << std::endl;
	std::this_thread::sleep_for( std::chrono::milliseconds( std::numeric_limits< int >::max( ) ) );
}