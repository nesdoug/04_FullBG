/*	example code for cc65, for NES
 *  writing a full screen from RLE compressed .h file
 *  -can only be done with rendering off
 *	using neslib
 *	Doug Fraker 2018
 */	
 

#include "LIB/neslib.h"
#include "LIB/nesdoug.h"
#include "NES_ST/Girl5.h"



const unsigned char palette[16]={ 
0x08,0x16,0x26,0x38,
0x08,0x0f,0x0f,0x0f,
0x08,0x0f,0x0f,0x0f,
0x08,0x0f,0x0f,0x0f 
};









	
void main (void) {
	
	ppu_off(); // screen off

	pal_bg(palette); //	load the palette
	
	vram_adr(NAMETABLE_A);
	// this sets a start position on the BG, top left of screen
	// vram_adr() and vram_unrle() need to be done with the screen OFF
	
	vram_unrle(Girl5);
	// this unpacks an rle compressed full nametable
	// created by NES Screen Tool
	
	ppu_on_all(); // turn on screen
	
	
	while (1){
		// infinite loop
		// game code can go here later.
		
	}
}
	
	