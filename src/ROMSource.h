/*
    Copyright 2016-2021 Arisotura

    This file is part of melonDS.

    melonDS is free software: you can redistribute it and/or modify it under
    the terms of the GNU General Public License as published by the Free
    Software Foundation, either version 3 of the License, or (at your option)
    any later version.

    melonDS is distributed in the hope that it will be useful, but WITHOUT ANY
    WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
    FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with melonDS. If not, see http://www.gnu.org/licenses/.
*/

#ifndef ROMSOURCE_H
#define ROMSOURCE_H

#include <string>

class ROMSource
{
public:
    virtual ~ROMSource() = 0;

    virtual u32 ReadROMData(u64 offset, u32 len, void* data) = 0;

    virtual std::string GetSaveFilePath() = 0;
    virtual std::string GetSavestatePath(int slot) = 0;
    virtual std::string GetCheatFilePath() = 0;
};

#endif // ROMSOURCE_H
