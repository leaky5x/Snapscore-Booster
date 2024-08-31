#pragma once
#include <windows.h>

#include "utils.h"
#include "Pos.h"

void take_photos()
{
	utils::left_click();
	Sleep(500);

	utils::left_click();
	Sleep(500);

	utils::left_click();
	Sleep(500);

	utils::left_click();
	Sleep(500);

	utils::left_click();
	Sleep(500);

	utils::left_click();
	Sleep(500);
}

std::string currentTime;

namespace booster
{ 
	void start_boost_no_arrow()
	{
		system("cls");

		utils::snapscore += utils::peaple * utils::snapssend;

		std::cout << "Time Started -> " << currentTime << std::endl;
		std::cout << "Estimated Snapscore Made -> " << utils::snapscore << std::endl;

		utils::move_mouse(pos::firstcamera_x, pos::firstcamera_y);
		utils::left_click();
		Sleep(1000);

		utils::move_mouse(pos::takephoto_x, pos::takephoto_y);
		take_photos();
		Sleep(1000);

		utils::move_mouse(pos::editandsend_x, pos::editandsend_y);
		utils::left_click();
		Sleep(1000);

		utils::move_mouse(pos::sendto_x, pos::sendto_y);
		utils::left_click();
		Sleep(1000);

		utils::move_mouse(pos::shortcut_x, pos::shortcut_y);
		utils::left_click();
		Sleep(1000);

		utils::move_mouse(pos::selectall_x, pos::selectall_y);
		utils::left_click();
		Sleep(1000);

		utils::move_mouse(pos::send_x, pos::send_y);
		utils::left_click();
		Sleep(1000);

		start_boost_no_arrow();
	}

	void start_boost()
	{
		system("cls");

		currentTime = utils::getCurrentDateTime();

		utils::move_mouse(pos::firstcamera_x, pos::firstcamera_y);
		utils::left_click();
		Sleep(1000);

		utils::move_mouse(pos::dropdown_x, pos::dropdown_y);
		utils::left_click();
		Sleep(1000);

		utils::move_mouse(pos::multisnap_x, pos::multisnap_y);
		utils::left_click();
		Sleep(1000);

		utils::move_mouse(pos::takephoto_x, pos::takephoto_y);
		take_photos();
		Sleep(1000);

		utils::move_mouse(pos::editandsend_x, pos::editandsend_y);
		utils::left_click();
		Sleep(1000);

		utils::move_mouse(pos::sendto_x, pos::sendto_y);
		utils::left_click();
		Sleep(1000);

		utils::move_mouse(pos::shortcut_x, pos::shortcut_y);
		utils::left_click();
		Sleep(1000);

		utils::move_mouse(pos::selectall_x, pos::selectall_y);
		utils::left_click();
		Sleep(1000);

		utils::move_mouse(pos::send_x, pos::send_y);
		utils::left_click();
		Sleep(1000);

		start_boost_no_arrow();
	}
}