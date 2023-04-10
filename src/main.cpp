#include "fibonachi.h"

#include <boost/program_options/options_description.hpp>
#include <boost/program_options/parsers.hpp>
#include <boost/program_options.hpp>
#include <boost/log/core.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/expressions.hpp>

#include <iostream>

namespace po = boost::program_options;

int main(int argc, const char** argv)
{
	int n;

	po::options_description desc("Generic options");
	desc.add_options()
		("help", "show help message")
		("verbosity", po::value<std::string>(), "verbosity")
		("n",  po::value<int>(&n)->required(), "number to calculate");

	po::variables_map vm;
	po::store(po::parse_command_line(argc, argv, desc), vm);
	po::notify(vm);

	if (vm.contains("help")) {
		std::cout << desc << "\n";
		return 0;
	}

	if (vm.contains("verbosity")) {
		std::string verbosity = vm["verbosity"].as<std::string>();

		boost::log::trivial::severity_level severityLevel;
		boost::log::trivial::from_string(verbosity.c_str(), verbosity.size(), severityLevel);
		boost::log::core::get()->set_filter(boost::log::trivial::severity >= severityLevel);
	} else {
		boost::log::core::get()->set_filter(boost::log::trivial::severity >= boost::log::trivial::info);
	}

	const auto numbers = math::fibonachi(n);

	for(const auto n : numbers) {
		std::cout << n << " ";
	}

	std::cout << "\n";

	return 0;
}
