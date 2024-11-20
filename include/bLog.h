#pragma once

#define BLOG_TRACE( message ) bLog::log(bLog::LOG_LEVEL::Trace, __FILE__, __LINE__, message);
#define BLOG_DEBUG( message ) bLog::log(bLog::LOG_LEVEL::Debug, __FILE__, __LINE__, message);
#define BLOG_INFO( message ) bLog::log(bLog::LOG_LEVEL::Info, __FILE__, __LINE__, message);
#define BLOG_WARN( message ) bLog::log(bLog::LOG_LEVEL::Warn, __FILE__, __LINE__, message);
#define BLOG_ERROR( message ) bLog::log(bLog::LOG_LEVEL::Error, __FILE__, __LINE__, message);
#define BLOG_FATAL( message ) bLog::log(bLog::LOG_LEVEL::Fatal, __FILE__, __LINE__, message);
#define BLOG_LOG( message ) bLog::log(bLog::LOG_LEVEL::Unknown, __FILE__, __LINE__, message);

namespace bLog {
  enum LOG_LEVEL {
    Trace,
    Debug,
    Info,
    Warn,
    Error,
    Fatal,
    Unknown,
  };

  void log(LOG_LEVEL level, const char* file, int line, const char* message);
}
