//
//  RenderEngine.hpp
//  Images-Generiques
//
//  Created by Valentin Dufois on 09/12/2017.
//  Copyright © 2017 Valentin Dufois. All rights reserved.
//

#ifndef RenderEngine_hpp
#define RenderEngine_hpp

#include <iostream>
#include <glimac/SDLWindowManager.hpp>

class RenderEngine
{
public:
    /**
     Create the RenderEngine Singleton in the AppObject
     */
    static void instanciate();
    
    /**
     Init OpenGL/SDL/etc. and create the window
     */
    void init();

	/**
	 Swap OpenGL buffers
	 basically : Show-What-I-Have-Just-Drawn
	 */
	void swapBuffers();

	void pollEvents();

	/**
	 Set current duo of fragment and vertex shader
	 - folder : Shaders must be in the Assets/Shaders folder
	 - names : shaders names must be <shaderName>.<fs|vs>.glsl

	 @param shaderName the name of the shaders
	 */
	void setShader(const std::string &shaderName);
    
private:
    //Singleton
    static bool m_instanciated;
    RenderEngine();

	glimac::SDLWindowManager * m_window;
};

#endif /* RenderEngine_hpp */
