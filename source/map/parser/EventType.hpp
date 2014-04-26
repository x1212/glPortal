#ifndef __EVENT_TYPE_CPP
#define __EVENT_TYPE_CPP
enum class EventType { 
  CLEAR_BUFFER, 
  COPY_BUFFER_TO_COMMAND, 
  COPY_BUFFER_TO_PARAMETER, 
  EXECUTE, 
  IGNORE_LINE, IGNORE 
};
#endif