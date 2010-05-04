// For License and Copyright information, see main.cpp

#ifndef TIMER_H
#define TIMER_H

#include <vector>
////////////////////////////////////////
// timer (abstract base) - represents a clock-like timer, that ticks and may have behavior with every tick. Operates on an analog stopwatch model. Said stopwatch has a start button, a stop button, and a reset button. Genericized for any unit.
////////////////////////////////////////

namespace Stage {
	template<typename T> class Timer {
		private:
			T time_started;
			T number_of_ticks;
			T start_value;
			T wrap_value;
			
			bool started;
			bool stopped;
			
			void tick(); //remember to overload increment operator
			void reset();
		public:
			Timer(T userStartValue, T userResetValue);

			void start();
			void stop();
			
			bool isStarted();
			bool isStopped();
	};
}