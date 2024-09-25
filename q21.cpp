// Create a base class called shape. Use this class to store two double type values that
// could be used to compute the area of figures. Derive two specific classes called
// triangle and rectangle from base shape. Add to the base class, a member function
// get_data() to initialize base class data members and another member function
// display_area() to compute and display the area of figures. Make display_area() as a
// virtual function and redefine this function in the derived class to suit their
// requirements. Using these three classes, design a program that will accept
// dimensions of a triangle or a rectangle interactively and display the area. Remember
// the two values given as input will be treated as lengths of
// two sides in the case of rectangles and as base and height in the case of triangle and
// used as follows:
// Area of rectangle = x * y
// Area of triangle = ½ *x*y