/*
    Canvas Stage - The Game Engine for Playwrights
    	in production for...
   	Project Yuki - The Videogame about Videogames
   	
    Copyright (C) 2010 The Canvas Foundation

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
    */

#include <string>
#include "world.h"
#include "game.h"
#include "entrypoint.h"
#include "keyboardinput.h"
int main () {
	std::string dir = "cool";
	World& the_world = World::getInstance();
	EntryPoint& i_love = new EntryPoint(dir);
	
	Game& game = new Game(i_love, the_world);
}
