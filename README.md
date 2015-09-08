A simple MD5 library for the Arduino,

Based on the work of scottmac. The original can be found at https://github.com/scottmac/arduino/blob/master/md5/md5.pde .

### Usage

// Hash a string and store the result in hash.
String hash = md5("Hello World!");

// Hash a buffer and store the result in hash.
String hash = md5(buffer, bufferSize);

