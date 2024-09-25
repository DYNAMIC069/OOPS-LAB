// Create a base class called CAL_AREA(Abstract). Use this class to store float type
// values that could be used to compute the volume of figures. Derive two specific
// classes called cone, hemisphere and cylinder from the base CAL_AREA. Add to
// the base class, a member function getdata ( ) to initialize base class data members
// and another member function display volume( ) to compute and display the volume
// of figures. Make display volume ( ) as a pure virtual function and redefine this
// function in the derived classes to suit their requirements. Using these three classes,
// design a program that will accept dimensions of a cone, cylinder and hemisphere
// interactively
// and display the volumes. Remember values given as input will be and used as
// follows:
// Volume of cone = (1/3)πr2h
// Volume of hemisphere = (2/3)πr3
// Volume of cylinder = πr2h