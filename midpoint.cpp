// Copyright (c) 2023 Val I All rights reserved.
//
// Created by: Val
// Created on Dec 10, 2023
// This program asks the user to enter two coordinates,
// It then calculates the midpoint.
#include <iostream>
#include <string>

void midpoint(double x1, double x2, double y1, double y2) {
    // Calculates midpoint/average of x and y
    double midpoint_x = (x1 + x2) / 2;
    double midpoint_y = (y1 + y2) / 2;
    // Displays midpoint.
    std::cout << "The midpoint is " << midpoint_x << "," << midpoint_y << ".\n";
}

int main() {
    std::cout << "Welcome to my program.\n";
    std::cout << "This program calculates the midpoint of 2 coordinates on a graph.\n";
    // declaring variables of coordinates.
    std::string x1CoordinateStr, y1CoordinateStr, x2CoordinateStr, y2CoordinateStr;

    // getting variables of coordinates from user.
    std::cout << "What is the x coordinate of the first point? ";
    std::cin >> x1CoordinateStr;

    try {
        double x1Coordinate = std::stod(x1CoordinateStr);

        std::cout << "What is the y coordinate of the first point? ";
        std::cin >> y1CoordinateStr;

        try {
            double y1Coordinate = std::stod(y1CoordinateStr);

            std::cout << "What is the x coordinate of the second point? ";
            std::cin >> x2CoordinateStr;

            try {
                double x2Coordinate = std::stod(x2CoordinateStr);

                std::cout << "What is the y coordinate of the second point? ";
                std::cin >> y2CoordinateStr;

                try {
                    double y2Coordinate = std::stod(y2CoordinateStr);

                    midpoint(x1Coordinate, x2Coordinate, y1Coordinate, y2Coordinate);
                } catch (std::invalid_argument ) {
                    std::cout << y2CoordinateStr << " is not a number.\n";
                }
            } catch (std::invalid_argument ) {
                std::cout << x2CoordinateStr << " is not a number.\n";
            }
        } catch (std::invalid_argument ) {
            std::cout << y1CoordinateStr << " is not a number.\n";
        }
    } catch (std::invalid_argument ) {
        std::cout << x1CoordinateStr << " is not a number.\n";
    }
}
