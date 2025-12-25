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
// @description:	Пространство имен с конфигурацией
//					главного окна
// 
// +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
namespace config_window
{
	/**
	*	@brief	Константы для инициализации первоначального размера главного окна и его имени
	*/
	constexpr unsigned int WINDOW_WIDTH = 912;			// Ширина окна
	constexpr unsigned int WINDOW_HEIGHT = 480;			// Высота окна
	constexpr const char* WINDOW_TITLE = "la_ansty";	// Название окна

	/**
	*	@brief	Exit codes для программы
	*/
	namespace application_exit_code 
	{
		constexpr int WINDOW_COMPLETE = 0;	// Если программа завершена без ошибок
		constexpr int WINDOW_ERROR = 1;		// Если программа завершена с ошибками
	}

	/**
	*	@brief	Шрифты 
	*/
	namespace fonts
	{
		constexpr const char* FONT_MONOCRAFT = "utl-font/Monocraft.otf";
	}
}