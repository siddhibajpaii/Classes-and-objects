# Classes-and-objects
Aim: To study and implement classes and objects in C++

#Program a: This C++ program defines a class named cube that represents a 3D object with three dimensions: height, width, and length. It calculates the volume of the cube and displays it using the formula: Volume=height×width×length. In the main() function, an object c1 of class cube is created, and the volume is computed based on the default values assigned to the dimensions.

Algorithm:

Step-1: Start

Step-2: Define a class cube:

Step-3: Declare three public integer members: height, width, and length.

Step-4: Initialize them with values: height = 2, width = 3, length = 5.

Step-5: Inside main() function:

Step-6: Create an object c1 of type cube.

Step-7: Calculate the volume using: Volume=height×width×length

Step-8: volume=c1.height×c1.width×c1.length

Step-9: Store the result in variable vol.

Step-10: Print the volume using cout.

Step-11: End.

#Program b: This C++ program defines a cube class with three dimensions: height, width, and length, along with a member function volume() that calculates and returns the volume of the cube. In the main() function, an object of the class (cube1) is created, and the volume is calculated by calling the member function volume() on that object.

Algorithm:

Step-1: Start

Step-2: Define class cube:

Step-3: Declare three public integer data members: height = 2, width = 3, length = 5

Step-4: Define a member function volume():

Step-5: Calculate volume as: volume=height×width×length

Step-6: Return the calculated volume.

Step-7: Inside main(): Create an object cube1 of type cube.

Step-8: Call the member function: cube1.volume() and store the result in vol.

Step-9: Display the volume using cout.

Step-10: End.

#Program c: This updated C++ program defines a cube class where the dimensions (height, width, and length) are encapsulated using the private access modifier. The class provides a public member function volume() that calculates and returns the volume based on those private values.


Algorithm:

Step-1: Start

Step-2: Define a class cube

Step-3: Declare three private integers: height = 2, width = 3, length = 5

Step-4: Declare a public function volume():

Step-5: Calculate volume = height × width × length

Step-6: Return the volume

Step-7: In main() function: Create an object cube1 of the class

Step-8: Call cube1.volume() and store the result in vol

Step-9: Print the volume

Step-10: End.

#Program d: This C++ program demonstrates the use of classes, encapsulation, and user input to calculate the volume of a cube or cuboid. The program defines a class cube with three private data members: height, width, and length. These values are not directly accessible from outside the class, which follows the principle of data hiding. Instead, the user is prompted to input the values via a public method setDimensions(). The volume is then calculated using the formula: Volume=height×width×length. This is done inside another public method, volume(). Finally, the result is printed in the main() function.

Algorithm:

Step-1: Start

Step-2: Define a class cube

Step-3: Declare private integers: height, width, length.

Step-4: Define a public method setDimensions():

Step-5: Prompt and take user input for height, width, and length.

Step-6: Define a public method volume():

Step-7: Calculate and return volume using: volume=height×width×length

Step-8: In the main() function: Create an object cube1 of type cube.

Step-9: Call cube1.setDimensions() to get dimensions from the user.

Step-10: Call cube1.volume() and store the result.

Step-11: Print the volume using cout.

Step-12: End.
