

// In this tutorial, we will learn
// n about the float and double data types with the help of examples. 
// We will also look at some of the key differences between them 
// and when to use them.
 // In C++, both float and double data types are used for floating-point values.
//   Floating-point numbers are used for decimal and exponential values. For example,
// creating float type variables
float num1 = 3.0f;
float num2 = 3.5f;
float num3 = 3E-5f; // 3x10^-5

// creating double type variables
double num4 = 3.0;
double num5 = 3.5;
double num6 = 3E-5; // 3x10^-5
// We must add the suffix f or F at the end of a float value. 
// This is because the compiler interprets decimal values without the suffix as double.

// Consider this code.
float a = 5.6;
// Here, we have assigned a double value to a float variable.

// In this case, 5.6 is converted to float by the compiler automatically 
// before it is assigned to the variable a. 
// This may result in data loss. To learn more, visit C++ Type conversion.