#pragma once

#include "pch.h"

struct ProcessResult
{
    std::wstring name;
    DWORD pid;
    std::vector<std::wstring> files;
};

// Second version, checks handles towards files and all subfiles and folders of given dirs, if any.
std::vector<ProcessResult> find_processes_recursive(const std::vector<std::wstring>& paths);

// Gives the user name of the account running this process
std::wstring pid_to_user(DWORD pid);

// Gives the full path of the executable, given the process id
std::wstring pid_to_full_path(DWORD pid);
