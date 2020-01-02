
static inline struct tm* _getlocaltime(time_t* now)
{
#if !defined(NO_PTHREADS) && !defined(_WIN32)
        struct tm t;
        return localtime_r(now, &t);
#else 
        return localtime(now);
#endif
}
