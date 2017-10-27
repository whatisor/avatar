#ifndef SOCKETSERVER_H
#define SOCKETSERVER_H
#include "Socket.h"
#include "BufferData.h"
#include <memory>

namespace avt  {

    const int MAX_BUFFER_LENGTH = 4000;
    
    class SocketServer {
    public:
        SocketServer(std::shared_ptr<BufferData> bufferData);
        ~SocketServer();
        
        void start(int port = 5055);

    private:
        Socket socket;
        std::shared_ptr<BufferData> bufferData;
    };
}

#endif /* SOCKETSERVER_H */
