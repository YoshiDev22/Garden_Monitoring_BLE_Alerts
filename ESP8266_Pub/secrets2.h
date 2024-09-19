#include <pgmspace.h>

#define SECRET
#define THINGNAME "GardenClient1"

const char WIFI_SSID[] = "Your Wi-Fi SSID";
const char WIFI_PASSWORD[] = "1234567890asd";
const char MQTT_HOST[] = "your_MQTT_Host.amazonaws.com";

// Amazon Root CA 1
static const char AWS_CERT_CA[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----

-----END CERTIFICATE-----
)EOF";

// Device Certificate .crt
static const char AWS_CERT_CRT[] PROGMEM = R"KEY(
-----BEGIN CERTIFICATE-----

-----END CERTIFICATE-----
)KEY";

// Device Private Key
static const char AWS_CERT_PRIVATE[] PROGMEM = R"KEY(
-----BEGIN RSA PRIVATE KEY-----

-----END RSA PRIVATE KEY-----
)KEY";
