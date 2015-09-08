#include <MD5_String.h>

/*
 * A simple example suing the MD5_String library.
 *
 */

void setup()
{
  // Init the serial
  Serial.begin(9600);

  // Wait a second
  delay(1000);

  // Calculate and print the MD5 hash
  Serial.println(md5_string("Hello World!"));
}

void loop()
{
}
