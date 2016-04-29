//	lColors - 1 header library
//		- Completly free
//		- Colors numbers in enum
//	lColors - 1 header library

#pragma once

#include <windows.h>   // WinApi header

namespace lColors {
	enum Color {	//ENUM CLASS FOR EASY CHOOSE
		BLACK = 0,
		BLUE = 1,
		GREEN = 2,
		CYAN = 3,
		RED = 4,
		MAGNETA = 5,
		BROWN = 6,
		LIGHTGRAY = 7,
		DARKGRAY = 8,
		LIGHTBLUE = 9,
		LIGHTGREEN = 10,
		LIGHTCYAN = 11,
		LIGHTRED = 12,
		LIGHTMAGNETA = 13,
		YELLOW = 14,
		WHITE = 15
	};
	enum Template {
		WARNING = 0,
		EROR = 1,
		INFO = 2
	};

	void SetColor(int foreground, int backgroud = 0, bool foregroudIntensity = false, bool backgroundIntensity = false)
	{
		int k = foreground + (backgroud * 16);	//calculate the color
		HANDLE handle;	//hnadle output

		handle = GetStdHandle(STD_OUTPUT_HANDLE);

		if (foreground <= 15 && backgroud <= 15)	//for safety
		{
			if (backgroundIntensity == true && foregroudIntensity == true)
				SetConsoleTextAttribute(handle, k | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY);
			else if (backgroundIntensity == false && foregroudIntensity == true)
				SetConsoleTextAttribute(handle, k | FOREGROUND_INTENSITY);
			else if (backgroundIntensity == true && foregroudIntensity == false)
				SetConsoleTextAttribute(handle, k | BACKGROUND_INTENSITY);
			else if (backgroundIntensity == false && foregroudIntensity == false)
				SetConsoleTextAttribute(handle, k);
		}
		else
			SetConsoleTextAttribute(handle, 7);
	}

	void SetColor(Color foregroud, Color backgroud = Color::BLACK, bool foregroudIntensity = false, bool backgroundIntensity = false) {
		int f = 7;
		int b = 0;

		switch (foregroud)
		{
		case Color::BLACK:
			f = 0;
			break;
		case Color::BLUE:
			f = 1;
			break;
		case Color::GREEN:
			f = 2;
			break;
		case Color::CYAN:
			f = 3;
			break;
		case Color::RED:
			f = 4;
			break;
		case Color::MAGNETA:
			f = 5;
			break;
		case Color::BROWN:
			f = 6;
			break;
		case Color::LIGHTGRAY:
			f = 7;
			break;
		case Color::DARKGRAY:
			f = 8;
			break;
		case Color::LIGHTBLUE:
			f = 9;
			break;
		case Color::LIGHTGREEN:
			f = 10;
			break;
		case Color::LIGHTCYAN:
			f = 11;
			break;
		case Color::LIGHTRED:
			f = 12;
			break;
		case Color::LIGHTMAGNETA:
			f = 13;
			break;
		case Color::YELLOW:
			f = 14;
			break;
		case Color::WHITE:
			f = 15;
			break;
		default:
			break;
		}	   //switch ;-;

		switch (backgroud)
		{
		case Color::BLACK:
			b = 0;
			break;
		case Color::BLUE:
			b = 1;
			break;
		case Color::GREEN:
			b = 2;
			break;
		case Color::CYAN:
			b = 3;
			break;
		case Color::RED:
			b = 4;
			break;
		case Color::MAGNETA:
			b = 5;
			break;
		case Color::BROWN:
			b = 6;
			break;
		case Color::LIGHTGRAY:
			b = 7;
			break;
		case Color::DARKGRAY:
			b = 8;
			break;
		case Color::LIGHTBLUE:
			b = 9;
			break;
		case Color::LIGHTGREEN:
			b = 10;
			break;
		case Color::LIGHTCYAN:
			b = 11;
			break;
		case Color::LIGHTRED:
			b = 12;
			break;
		case Color::LIGHTMAGNETA:
			b = 13;
			break;
		case Color::YELLOW:
			b = 14;
			break;
		case Color::WHITE:
			b = 15;
			break;
		default:
			break;
		}	   //switch ;-;

		int k = f + (b * 16);
		HANDLE handle;	//handle output

		handle = GetStdHandle(STD_OUTPUT_HANDLE);

		if (backgroundIntensity == true && foregroudIntensity == true)
			SetConsoleTextAttribute(handle, k | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY);
		else if (backgroundIntensity == false && foregroudIntensity == true)
			SetConsoleTextAttribute(handle, k | FOREGROUND_INTENSITY);
		else if (backgroundIntensity == true && foregroudIntensity == false)
			SetConsoleTextAttribute(handle, k | BACKGROUND_INTENSITY);
		else if (backgroundIntensity == false && foregroudIntensity == false)
			SetConsoleTextAttribute(handle, k);
	}

	void SetColorFromTemplate(Template temp) {
		HANDLE handle;	//handle output
		handle = GetStdHandle(STD_OUTPUT_HANDLE);

		switch (temp)
		{
		case lColors::WARNING:
			SetConsoleTextAttribute(handle, 14 | FOREGROUND_INTENSITY);
			break;
		case lColors::EROR:
			SetConsoleTextAttribute(handle, 4 | FOREGROUND_INTENSITY);
			break;
		case lColors::INFO:
			SetConsoleTextAttribute(handle, 15 | FOREGROUND_INTENSITY);
			break;
		default:
			SetConsoleTextAttribute(handle, 7 | FOREGROUND_INTENSITY);
			break;
		}
	}

	void SetDefaultColor() {
		HANDLE handle;
		handle = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(handle, 7);
	}
}