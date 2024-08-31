#pragma once

#include <sstream> // Required for std::ostringstream
#include <iomanip> // Required for std::put_time
#include <ctime>   // Required for std::localtime and std::time_t
#include <chrono>  // Required for std::chrono
#include <string>  // Required for std::string

namespace utils
{
    int peaple;
    int snapscore;
    int snapssend = 6;

    void get_curser_pos(int& x, int& y)
    {
        POINT cursorPos;
        if (GetCursorPos(&cursorPos))
        {
            x = cursorPos.x;
            y = cursorPos.y;

            std::cout << "Curser X -> " << x << std::endl;
            std::cout << "Curser Y -> " << y << std::endl;
        }
        else {
            std::cerr << "Failed to get cursor pos" << std::endl;
        }
    }

    std::string getCurrentDateTime()
    {
        auto now = std::chrono::system_clock::now();
        std::time_t now_c = std::chrono::system_clock::to_time_t(now);
        std::tm local_tm;
        localtime_s(&local_tm, &now_c);
        std::ostringstream oss;
        oss << std::put_time(&local_tm, "%Y-%m-%d %I:%M %p");

        return oss.str();
    }

    void move_mouse(int x, int y)
    {
        SetCursorPos(x, y);
    }

    void left_click()
    {
        INPUT input = { 0 };
        input.type = INPUT_MOUSE;
        input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
        SendInput(1, &input, sizeof(INPUT));
        input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
        SendInput(1, &input, sizeof(INPUT));
    }

    void right_click()
    {
        INPUT input = { 0 };
        input.type = INPUT_MOUSE;
        input.mi.dwFlags = MOUSEEVENTF_RIGHTDOWN;
        SendInput(1, &input, sizeof(INPUT));
        input.mi.dwFlags = MOUSEEVENTF_RIGHTUP;
        SendInput(1, &input, sizeof(INPUT));
    }
}