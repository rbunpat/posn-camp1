#include <iostream>
#include <curl/curl.h>

size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* output) {
    size_t total_size = size * nmemb;
    output->append(static_cast<char*>(contents), total_size);
    return total_size;
}

int main() {
    int jjMoney, prettyFactor, necklacePrice;

    std::cin >> jjMoney >> prettyFactor >> necklacePrice;

    std::string buyStatus = "YES";

    bool prettyCheck, moneyCheck, jjCheck;

    if (prettyFactor > 70) {
        prettyCheck = true;
    }

    if (necklacePrice >= 5000) {
        moneyCheck = true;
    }

    if (jjMoney >= necklacePrice) {
        buyStatus = "YES";
    }

    if (jjMoney - necklacePrice >= necklacePrice) {
        jjCheck = true;
        buyStatus = "NO";
    }

    // Initialize the libcurl library
    curl_global_init(CURL_GLOBAL_DEFAULT);

    // Create a CURL handle
    CURL* curl = curl_easy_init();
    if (curl) {
        // Construct the URL with parameters
        std::string url = "https://example.com/?jjmoney=" + std::to_string(jjMoney) +
                         "&prettyfactor=" + std::to_string(prettyFactor) +
                         "&necklaceprice=" + std::to_string(necklacePrice);

        // Set the URL for the GET request
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());

        // Set the callback function to receive the response data
        std::string response;
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

        // Perform the GET request
        CURLcode res = curl_easy_perform(curl);

        // Check for errors
        if (res != CURLE_OK) {
            std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
        }

        // Cleanup
        curl_easy_cleanup(curl);

        // Print the response
        std::cout << "Response:\n" << response << std::endl;
    }

    // Cleanup global libcurl resources
    curl_global_cleanup();

    std::cout << jjMoney - necklacePrice << std::endl;
    std::cout << buyStatus;

    return 0;
}
