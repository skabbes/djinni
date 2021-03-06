// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client_interface.djinni

#import "DBClientInterface.h"
#include "client_interface.hpp"
#import "DJIObjcWrapperCache+Private.h"
#import <Foundation/Foundation.h>
#include <memory>

namespace djinni_generated
{
    class ClientInterfaceObjcProxy final : public ClientInterface
    {
        public:
        id <DBClientInterface> objcRef;
        ClientInterfaceObjcProxy (id objcRef);
        virtual ~ClientInterfaceObjcProxy () override;
        static std::shared_ptr<ClientInterface> client_interface_with_objc (id objcRef);
        virtual ClientReturnedRecord get_record (int64_t record_id, const std::string & utf8string) override;

        private:
        ClientInterfaceObjcProxy () {};
    };
}
