
#if defined(_WIN32) && !defined(__BORLANDC__)
typedef SOCKET socket_handle_t;
#else
typedef int socket_handle_t;
#endif

