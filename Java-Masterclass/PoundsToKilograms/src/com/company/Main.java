package com.company;

public class Main {

    public static void main(String[] args) {
      double numberOfPounds = 200d;
      double kilogramsPerPound = 0.45359237;
      double numberOfKilograms = 0d;

      numberOfKilograms = numberOfPounds * kilogramsPerPound;

      System.out.println(numberOfPounds + " pounds = " + numberOfKilograms + " kilograms.");
    }
}
