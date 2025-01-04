# Scientific Calculator in C  

This repository contains a **Scientific Calculator** implemented in **C**, capable of performing a wide variety of mathematical, statistical, and scientific computations. The program is designed to mimic the functionality of a CASIO FX-991MS calculator (excluding memory and miscellaneous operations).  

---

## **Features**  

The calculator supports:  

1. **Basic Arithmetic Operations**  
   - Addition (`+`)  
   - Subtraction (`-`)  
   - Multiplication (`*`)  
   - Division (`/`)  

2. **Trigonometric Functions**  
   - Sine (`sin`)  
   - Cosine (`cos`)  
   - Tangent (`tan`)  
   - Hyperbolic Sine (`sinh`)  
   - Hyperbolic Cosine (`cosh`)  
   - Hyperbolic Tangent (`tanh`)  

3. **Logarithmic and Exponential Functions**  
   - Natural Logarithm (`ln`)  
   - Common Logarithm (`log`)  
   - Exponential (`e^x`)  

4. **Power and Root Functions**  
   - Power (`x^y`)  
   - Square Root (`√`)  
   - Cube Root (`³√`)  

5. **Statistical Functions**  
   - Mean  
   - Variance  
   - Standard Deviation  

6. **Combinatorics**  
   - Permutations (`nPr`)  
   - Combinations (`nCr`)  

7. **Base-N Conversion**  
   - Binary (Base 2)  
   - Octal (Base 8)  
   - Decimal (Base 10)  
   - Hexadecimal (Base 16)  

8. **Numerical Integration and Differentiation (Message Prompt)**  
   - Placeholder implementation for symbolic processing.  

---

## **Getting Started**  

### **Prerequisites**  
To compile and run the program, you need:  
- GCC compiler or any standard C compiler.  

### **Installation**  

1. Clone the repository:  
   ```bash  
   git clone https://github.com/your-username/scientific-calculator.git  
   cd scientific-calculator  
   ```  

2. Compile the program:  
   ```bash  
   gcc calculator.c -o calculator -lm  
   ```  

3. Run the executable:  
   ```bash  
   ./calculator  
   ```  

---

## **Usage**  

1. On running the program, a menu is displayed with various options.  
2. Enter the number corresponding to your desired operation.  
3. Follow the on-screen prompts to input values and get results.  

---

## **Code Structure**  

- `main()` handles the menu and calls appropriate functions for each category.  
- Separate functions for each operation category ensure modularity.  
  - `basicOperations()`  
  - `trigonometricFunctions()`  
  - `logarithmicFunctions()`  
  - `powerRootFunctions()`  
  - `statisticalFunctions()`  
  - `combinatoricsFunctions()`  
  - `integrationDifferentiation()`  
  - `baseConversion()`  

---

## **Limitations**  

1. Numerical integration and differentiation are placeholders and require external tools or libraries.  
2. Floating-point precision limitations inherent to C.  

---

## **Acknowledgments**  

- Inspired by the CASIO FX-991MS calculator.  
- Thanks to the open-source community for their clear answers to my questions.  

---

## **Contact**  

For any queries or issues, feel free to open an issue or reach out to [rehaan1211ahmad@gmail.com](mailto:rehaan1211ahmad@gmail.com).  

---
