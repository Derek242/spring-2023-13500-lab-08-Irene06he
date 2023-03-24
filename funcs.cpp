//Name : Irene He He
//GitHub Name : Irene06he


#include <iostream>
#include "funcs.h"
#include "imageio.h"

//task a
void invert (std::string input){
  int img[MAX_H][MAX_W];
  int h, w;
  readImage(input, img, h, w); 
  int out[MAX_H][MAX_W];

  for(int row = 0; row < h; row++) {
    for(int col = 0; col < w; col++) {
      out[row][col] = 255-img[row][col];
    }
  }
  
  // and save this new image to file "outImage.pgm"
  writeImage("taskA.pgm",out, h, w);
}

//task b 
void invert_half(std::string input)
{
  int img[MAX_H][MAX_W];
  int h, w;
  readImage(input, img, h, w); 
  int out[MAX_H][MAX_W];
  for (int row = 0; row < h; row++){
    for (int col = 0; col < w; col++){
      if (col > w/2){
	  out[row][col] = (255-img[row][col]); 
	}
      else {
	  out[row][col] = img[row][col];
	}}
  }
  writeImage("taskB.pgm", out, h, w);
}

//task c
void box(std::string input)
{
  int img[MAX_H][MAX_W];
  int h, w;
  readImage(input, img, h, w); 

  int first_height = h/4;
  int third_height = (h/4)*3;
  int first_width = w/4;
  int third_width = (w/4)*3;

  for (int row = first_height; row <= third_height; row++)
    {
      for (int col = first_width; col <= third_width; col++)
	{
	  img[row][col] = 255;
	}
    }
  writeImage("taskC.pgm", img, h, w);
}

//task d 
void frame(std:: string input){
  int img[MAX_H][MAX_W];
  int h, w;
  readImage(input, img, h, w); 

  int first_height = h/4;
  int third_height = (h/4)*3;
  int first_width = w/4;
  int third_width = (w/4)*3;

  for (int row = first_height; row <= third_height; row++)
    {
      for (int col = first_width; col <= third_width; col++)
	{
		if (row == first_height || row == third_height ){
	  		img[row][col] = 255;
	}
		else if (col == first_width || col == third_width){
			img[row][col] = 255;
		}
    }
}
  writeImage("taskD.pgm", img, h, w);
}

//task e
void scale (std::string input){
  int img[MAX_H][MAX_W];
  int h, w;
  readImage(input, img, h, w); 
  int out[MAX_H][MAX_W];

  int h2 = h*2;
  int w2 = w*2;

  for (int row = 0 ; row <= h2 ;row++){
  	for (int col = 0 ; col <= w2 ; col++){
  			out[row][col] = img[row+1][col+1];
  }
}
  	writeImage("taskE.pgm",out,h2,w2);

}

