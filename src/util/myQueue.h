#ifndef MY_QUEUE_H_INCLUDED
#define MY_QUEUE_H_INCLUDED

#include "message.h"

class t_myQueue
{
public:
   t_myQueue();
   t_myQueue(const t_myQueue &other);

   ~t_myQueue();

   void push(const t_message &a_message);

   void closeRead();
   void closeWrite();

   int getWaitFd() const; //get the file descriptor used for waiting on me
   t_message pop();


private:
   int fds[2];

};

#endif
