#pragma once
#include <boost/thread/mutex.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>

struct DeviceData {
	//virtual void getData() = 0;
	boost::mutex mutex;
};