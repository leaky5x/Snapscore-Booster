#include <iostream>
#include <windows.h>
#include <thread>

#include "console.h"
#include "utils.h"
#include "Pos.h"
#include "booster.h"	

// Made By - leaky 
// lol don't sell my shit
// I Could Have Made It Better But I was In Rush
// It Works Decent tho
// 50k In 10 Mins With 100 Peaple In The ShortCut

auto main() -> int
{
	std::cout << "Press F1 When U Are Over Camera Button" << std::endl;
	while (true)
	{
		if (GetAsyncKeyState(VK_F1) & 0x8000)
		{
			utils::get_curser_pos(pos::firstcamera_x, pos::firstcamera_y);
			Sleep(2000);
			break;
		}
	}

	std::cout << "Press F1 When Ur Over Dropdown Arrow" << std::endl;
	while (true)
	{
		if (GetAsyncKeyState(VK_F1) & 0x8000)
		{
			utils::get_curser_pos(pos::dropdown_x, pos::dropdown_y);
			Sleep(2000);
			break;
		}
	}

	std::cout << "Press F1 When Ur Over Multisnap Button" << std::endl;
	while (true)
	{
		if (GetAsyncKeyState(VK_F1) & 0x8000)
		{
			utils::get_curser_pos(pos::multisnap_x, pos::multisnap_y);
			Sleep(2000);
			break;
		}
	}

	std::cout << "Press F1 When Ur Over Take Photo Button" << std::endl;
	while (true)
	{
		if (GetAsyncKeyState(VK_F1) & 0x8000)
		{
			utils::get_curser_pos(pos::takephoto_x, pos::takephoto_y);
			Sleep(2000);
			break;
		}
	}

	std::cout << "Press F1 When Ur Over Edit And Send" << std::endl;
	while (true)
	{
		if (GetAsyncKeyState(VK_F1) & 0x8000)
		{
			utils::get_curser_pos(pos::editandsend_x, pos::editandsend_y);
			Sleep(2000);
			break;
		}
	}

	std::cout << "Press F1 When Ur Over Send To" << std::endl;
	while (true)
	{
		if (GetAsyncKeyState(VK_F1) & 0x8000)
		{
			utils::get_curser_pos(pos::sendto_x, pos::sendto_y);
			Sleep(2000);
			break;
		}
	}

	std::cout << "Press F1 When Ur Over Shortcut" << std::endl;
	while (true)
	{
		if (GetAsyncKeyState(VK_F1) & 0x8000)
		{
			utils::get_curser_pos(pos::shortcut_x, pos::shortcut_y);
			Sleep(2000);
			break;
		}
	}

	std::cout << "Press F1 When Ur Over Select All" << std::endl;
	while (true)
	{
		if (GetAsyncKeyState(VK_F1) & 0x8000)
		{
			utils::get_curser_pos(pos::selectall_x, pos::selectall_y);
			Sleep(2000);
			break;
		}
	}

	std::cout << "Press F1 When Ur Over Send" << std::endl;
	while (true)
	{
		if (GetAsyncKeyState(VK_F1) & 0x8000)
		{
			utils::get_curser_pos(pos::send_x, pos::send_y);
			Sleep(2000);
			break;
		}
	}

	std::cout << "How Many Users Are In Your Shortcut" << std::endl;
	std::cin >> utils::peaple;

	std::cout << "Press F1 When U Want To Start The Booster" << std::endl;
	while (true)
	{
		if (GetAsyncKeyState(VK_F1) & 0x8000)
		{
			booster::start_boost();
			Sleep(2000);
			break;
		}
	}
}	