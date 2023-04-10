#include "fibonachi.h"
#include <boost/log/trivial.hpp>
#include <stdexcept>

namespace math
{

std::vector<int> fibonachi(int n)
{
	BOOST_LOG_TRIVIAL(trace) << "fibonachi(" << n <<")";

	if (n < 0) {
		BOOST_LOG_TRIVIAL(error) << "bad n " << n;
		throw std::runtime_error("bad n for fibonachi");
	}

	std::vector<int> numbers(n);
	if (n == 0) {
		BOOST_LOG_TRIVIAL(warning) << "n==0, nothing to calc";
		return numbers;
	}

	int t1 = 0;
	int t2 = 1;
	int nextTerm = 0;

    numbers[0] = 0;
	BOOST_LOG_TRIVIAL(debug) << numbers[0];
	if (n == 1) {
		BOOST_LOG_TRIVIAL(warning) << "n==1, nothing to calc";
		return numbers;
	}

    numbers[1] = 1;
	BOOST_LOG_TRIVIAL(debug) << numbers[1];
	if (n == 2) {
		BOOST_LOG_TRIVIAL(warning) << "n==2, nothing to calc";
		return numbers;
	}

  	for (int i = 2; i < n; ++i) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        numbers[i] = nextTerm;
		BOOST_LOG_TRIVIAL(debug) << numbers[i];
    }

    return numbers;
}

} // cmake_skeleton
