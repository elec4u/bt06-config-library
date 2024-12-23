BT06 Configuration Library

This library provides a simple and efficient way to configure the BT06 Bluetooth module using Arduino. With this library, you can easily set the Bluetooth name, baud rate, and PIN code through AT commands, making it ideal for projects that require quick and reliable Bluetooth setup.


Installation

Using the Arduino Library Manager:

Open the Arduino IDE.

Go to Sketch > Include Library > Manage Libraries....

Search for BT06_elec4u_co_il.

Click Install.

Manual Installation:

Download the library as a ZIP file from this repository.

Open the Arduino IDE.

Go to Sketch > Include Library > Add .ZIP Library....

Select the downloaded ZIP file to add it to your libraries.


Connections

To connect the BT06 module to your Arduino, use the following pin mapping:

Arduino Pin

BT06 Pin

5V => VCC

GND => GND

TX (defined) => RX (on BT06)

RX (defined) => TX (on BT06)


Features

Configure Bluetooth name, baud rate, and PIN code.

Simple API for reliable communication.

Compatible with Arduino and other microcontrollers.


Credits

Created by:Shoham Cohen

This library was developed as part of the educational initiative on elec4u.co.il.


License

This project is licensed under the MIT License.See the LICENSE file for details.


Contributions

We welcome contributions! If you encounter issues or have suggestions for improvements, feel free to:

Open an issue on GitHub.

Submit a pull request.

Enjoy using the library, and feel free to share your feedback!