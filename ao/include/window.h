#pragma once


namespace ao {
	class window {
	public:
		window() {

		}
		virtual int init()=0;
		virtual int render()=0;
		virtual int exit()=0;




	};

}