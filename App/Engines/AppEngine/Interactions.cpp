//
//  Interactions.cpp
//  Xcode
//
//  Created by Valentin Dufois on 12/01/2018.
//  Copyright © 2018 Valentin Dufois. All rights reserved.
//

#include "AppEngine.hpp"
#include "Core/AppObject.hpp"

void AppEngine::parseEvents()
{
	SDL_Event event;
	bool newVal;

	while(SDL_PollEvent(&event))
	{
		if(event.type == SDL_QUIT)
			return App->endApp();

		if(event.type != SDL_KEYUP && event.type != SDL_KEYDOWN)
			continue;

		if(event.type == SDL_KEYUP)
			newVal = false;
		else
			newVal = true;

		switch(event.key.keysym.sym)
		{
			case         SDLK_a:         m_keys.A = newVal; break;
			case         SDLK_b:         m_keys.B = newVal; break;
			case         SDLK_c:         m_keys.C = newVal; break;
			case         SDLK_d:     m_keys.RIGHT = newVal; break;
			case         SDLK_e:         m_keys.E = newVal; break;
			case         SDLK_f:         m_keys.F = newVal; break;
			case         SDLK_g:         m_keys.G = newVal; break;
			case         SDLK_h:         m_keys.H = newVal; break;
			case         SDLK_i:         m_keys.I = newVal; break;
			case         SDLK_j:         m_keys.J = newVal; break;
			case         SDLK_k:         m_keys.K = newVal; break;
			case         SDLK_l:         m_keys.L = newVal; break;
			case         SDLK_m:         m_keys.M = newVal; break;
			case         SDLK_n:         m_keys.N = newVal; break;
			case         SDLK_o:         m_keys.O = newVal; break;
			case         SDLK_p:         m_keys.P = newVal; break;
			case         SDLK_q:      m_keys.LEFT = newVal; break;
			case         SDLK_r:         m_keys.R = newVal; break;
			case         SDLK_s:      m_keys.DOWN = newVal; break;
			case         SDLK_t:         m_keys.T = newVal; break;
			case         SDLK_u:         m_keys.U = newVal; break;
			case         SDLK_v:         m_keys.V = newVal; break;
			case         SDLK_w:         m_keys.W = newVal; break;
			case         SDLK_x:         m_keys.X = newVal; break;
			case         SDLK_y:         m_keys.Y = newVal; break;
			case         SDLK_z:        m_keys.UP = newVal; break;
			case        SDLK_UP:        m_keys.UP = newVal; break;
			case      SDLK_DOWN:      m_keys.DOWN = newVal; break;
			case      SDLK_LEFT:      m_keys.LEFT = newVal; break;
			case     SDLK_RIGHT:     m_keys.RIGHT = newVal; break;
			case    SDLK_ESCAPE:       m_keys.ESC = newVal; break;
			case SDLK_BACKSPACE: m_keys.BACKSPACE = newVal; break;
			case    SDLK_RETURN:     m_keys.ENTER = newVal; break;
		}
	}
}