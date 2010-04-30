
//your examples helped me a lot - thank you so, macslow
#include <time.h>
#include <math.h>
#include <string>
#include <stdlib.h>
#include <ctype.h>
#include <cairo/cairo.h>
#include <cairo/cairo-svg.h>
#include <SDL.h>
#include <SDL_opengl.h>
#include <OpenGL/gl.h>
#include <librsvg/rsvg.h>

#include <iostream>
#include <librsvg/rsvg-cairo.h>


const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 720;
const int SCREEN_BPP = 32;

SDL_Event event;
bool quit;
GLuint texture;
GLenum error;


int main(int argc, char *argv[]) {
	g_type_init();
	rsvg_init();

	int frame = 0;

	SDL_Surface *screen = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_OPENGL );
	
	SDL_WM_SetCaption ("Cairo", NULL);
	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
	SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 16);

	SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 8);
	SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 8);
	SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 8);
	SDL_GL_SetAttribute(SDL_GL_ALPHA_SIZE, 8);

	glViewport(0,0,1280,720);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(10.0,1280.0/720.0,1.0,15.0);
	error = glGetError();
	std::cout << gluErrorString(error) << " For the initial perspective \n";
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glEnable (GL_TEXTURE_2D);
	glEnable (GL_BLEND);
    glBlendFunc (GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);


	int FlowerWidth = 2048;
	int FlowerHeight = 2048;
	
	GLsizei w = 40;
	GLsizei h = 40;
	double zoom = 0;				
	
	cairo_surface_t* Flower;
	cairo_t* context;
		
	Flower = cairo_image_surface_create(CAIRO_FORMAT_ARGB32, FlowerWidth, FlowerHeight);
	context = cairo_create(Flower);
	
	const gchar* Filename = "game/yuki/resources/sprite/lavender/lavender.svg";
	RsvgHandle* SvgData = rsvg_handle_new_from_file(Filename, NULL);
	
	//cairo_scale(context,50,50);
	cairo_scale(context,.50,.50);
	rsvg_handle_render_cairo(SvgData, context	);
	unsigned char *buffer = cairo_image_surface_get_data(Flower);

    //Make a texture
	glGenTextures(1, &texture);
	glBindTexture(GL_TEXTURE_2D, texture);
	glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
	//flip the texture, cairo and opengl use different coordinate systems
	glMatrixMode( GL_TEXTURE ) ; 
    glLoadIdentity() ;
    glScalef( 1, -1, 1 ) ;
    //done

	glTexImage2D(GL_TEXTURE_2D,
	0,
	GL_RGBA,
	FlowerWidth,
	FlowerHeight,
	0,
	GL_BGRA,
	GL_UNSIGNED_BYTE,
	buffer); 
		error = glGetError();
	std::cout << gluErrorString(error) << " For the teximage2d \n";
	//done
	
	while (quit==false) {
		while(SDL_PollEvent(&event)) {
			if(event.type == SDL_QUIT) { 
				quit = true; 
			}
		}

		//gotta figure out why I gotta set matrix modes and such
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluPerspective(50.0, 1.0, 1.0, 400.0);
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		gluLookAt(0.0, 0.0, zoom,
				  0.0, 0.0, 0.0,
				  0.0, 1.0, 0.0);
		error = glGetError();
		std::cout << gluErrorString(error) << " for the glulookat \n";
		zoom+=.1;
		std::cout << zoom;

		glBindTexture (GL_TEXTURE_2D, texture);
		error = glGetError();
		std::cout << gluErrorString(error) << "lolololol for the texturebind\n";
		glBegin (GL_QUADS);
	
		glTexCoord2f (0.0, 0.0);
		glVertex3f (0.0, 0.0, 0.0);
		
		glTexCoord2f (1.0, 0.0);
		glVertex3f (40.0, 0.0, 0.0);
		
		glTexCoord2f (1.0, 1.0);
		glVertex3f (40.0, 40.0, 0.0);
		
		glTexCoord2f (0.0, 1.0);
		glVertex3f (0.0, 40.0, 0.0);
	
		glEnd ();
		error = glGetError();
		std::cout << gluErrorString(error) << " for the QUAD\n  ";
	
	
		SDL_GL_SwapBuffers();
		glClear( GL_COLOR_BUFFER_BIT );	
		glClearColor(0.8f, 0.8f, 1.0f, 1.0f);	
		glGetError();
		frame++;

	}	
}
		