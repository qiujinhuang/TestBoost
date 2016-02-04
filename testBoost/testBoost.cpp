// testBoost.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

int main()
{
	using namespace boost::lambda;
	typedef std::istream_iterator<int> in;

	std::for_each(
		in(std::cin), in(), std::cout << (_1 * 3) << " ");
	std::cout << "";
	std::cout << "branch1";
	std::cout << "master 333";
}