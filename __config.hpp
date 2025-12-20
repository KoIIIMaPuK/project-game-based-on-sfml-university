#pragma once

// #########################################################
// 
//                  Include SFML libs
// 
// #########################################################
#include <SFML/Graphics.hpp>   
#include <SFML/Network.hpp>     
#include <SFML/System.hpp>      
#include <SFML/Window.hpp>     
#include <SFML/Audio.hpp>       




// #########################################################
// 
//                  Include C++ libs
// 
// #########################################################
#include <iostream>




// +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
// 
// @brief:			Namespace config window <config_window>
// 
// +-+-+-+-+-+-+-+-+-+-+-+-+-+
// @description:	пространство имен с конфигурацией
//					главного окна
// 
// +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
namespace config_window
{
	/**
	*	@brief	Константы для инициализации первоначального размера главного окна и его имени
	*/
	constexpr unsigned int WINDOW_WIDTH = 912;		// window width
	constexpr unsigned int WINDOW_HEIGHT = 480;		// window height
	constexpr const char* WINDOW_TITLE = "la_ansty";	// window title

	/**
	*	@brief	Exit codes для программы
	*/
	namespace application_exit_code {
		constexpr int WINDOW_COMPLETE = 0;	// if programm completed without error(-s)
		constexpr int WINDOW_ERROR = 1;		// if programm completed with error(-s)
	}

	/**
	*	@brief	Шрифты 
	*/
	namespace fonts
	{
		constexpr const char* FONT_MONOCRAFT = "utl-font/Monocraft.otf";
	}
}