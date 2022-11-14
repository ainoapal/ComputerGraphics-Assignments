/**************
 Function Triangle(float x1, float y1, float x2, float y2, float x3, float y3, float r, float g, float b)

 draws a triangle connecting points (x1,y1)  (x2, y2) and (x3, y3), colored with the (r,g,b) specified color.
 vertex are expressed in Normalized screen coordinates, (i.e. in range [-1,+1]), following the Vulkan convention.
 The red, green and blue (r,g,b) values are in the range [0,1].
 
 Using function Triangle(...) try to draw a children house, similar to the one below.
 
 First remove the two function below (given only as an example), and replace them with your own.
 Since it is a C program, you can use for loops if you think it can be helpful in your drawing.
 The for() command below that draws a sun like shape in exact center of the screen near the top,
 is an example on how you can use it: please remove it, and replace it with your own code.
 It is not necessery to use a for loop if you do not really need it: it has been put here only as
 an example to help students not familiar with C++.
***************/

// we can find how vulkan uses normalized screen coordinates in the [-1, 1] range in the slide 50 of L01
//Vulkan follows the convention of pixel coordinates with the y-axis pointing down

Triangle(-0.0302,0.176, 0.3503,-0.45, 0.721,0.176,   1,0,0);	// Draws a red triangle --> roof of the house
Triangle(0.6457,0.176, 0.079,0.176, 0.079,0.803,   0,0,1);	// Draws a blue triangle --> left side of the house
Triangle(0.6457,0.176, 0.079,0.803, 0.6457,0.803,   0,0,1); // Draws a blue triangle --> right side of the house
Triangle(0.29,0.4989, 0.29,0.803, 0.401,0.803,   1,1,0); // Draws a yellow triangle --> left side of the door
Triangle(0.29,0.4989, 0.401,0.4989, 0.401,0.803,   1,1,0); //Draws a yellow triangle --> right side of the door
Triangle(0.17,0.29, 0.28,0.29, 0.17,0.41,   1,1,0); // Draws a yellow triangle --> left side of the LWindow
Triangle(0.28,0.29, 0.17,0.41, 0.28,0.41,   1,1,0); // Draws a yellow triangle --> right side of the LWindow
Triangle(0.45,0.29, 0.45,0.41, 0.56,0.29,   1,1,0); // Draws a yellow triangle --> left side of the RWindow
Triangle(0.45,0.41, 0.56,0.29, 0.56,0.41,   1,1,0); // Draws a yellow triangle --> right side of the RWindow

Triangle(-1,1, -1,0.803, 1,0.803,   0,1,0); // Draws a green triangle --> left side of the grass
Triangle(-1,1, 1,0.803, 1,1,   0,1,0); // Draws a green triangle --> right side of the grass

///*
//To draw circles
for(int i = 0; i < 32; i++) {
	Triangle( 0.68 + 0.055 * cos(6.28/32*(i-0.5)), -0.65 + 0.055 * sin(6.28/32*(i-0.5)),
			  0.68 + 0.20 * cos(6.28/32*i), -0.65 + 0.20 * sin(6.28/32*i),
			  0.68 + 0.055 * cos(6.28/32*(i+0.5)), -0.65 + 0.055 * sin(6.28/32*(i+0.5)),
			  1,0.271,0);
}

//*/

