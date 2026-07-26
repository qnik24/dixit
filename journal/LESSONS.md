# Lesson 1: Project Structure
* ## Always separate headers and source files.
	This actually occurs pretty naturally from what I have seen. It keeps everything clean, keeps their usage clean.CMake loves it as well. So do that from now on whenever you code C/C++.
* ## Window Evens happen regardless, the event queue is there for other subsystems to react to the change.
	The full "chain" is something like OS-Event -> GLFW resize -> App Event -> Subsystems react