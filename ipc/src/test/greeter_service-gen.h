/*
 * Copyright (C) 2017 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef IPC_SRC_TEST_GREETER_SERVICE_GEN_H_
#define IPC_SRC_TEST_GREETER_SERVICE_GEN_H_

// TODO(primiano): this file should be autogenerated by our the protobuf plugin.

#include "ipc/deferred.h"
#include "ipc/service_descriptor.h"
#include "ipc/service_proxy.h"

namespace ipc_test {

// The request/response proto object in the .pb.h file.
class GreeterRequestMsg;
class GreeterReplyMsg;

using DeferredGreeterReply = ::perfetto::ipc::Deferred<GreeterReplyMsg>;

// TODO(primiano): introduce host-side sample service in next CL.
// class Greeter : public ::perfetto::ipc::Service {};

class GreeterProxy : public ::perfetto::ipc::ServiceProxy {
 public:
  GreeterProxy(::perfetto::ipc::ServiceProxy::EventListener*);
  ~GreeterProxy() override;

  // ServiceProxy implementation.
  const ::perfetto::ipc::ServiceDescriptor& GetDescriptor() override;

  // Greeter implementation.
  void SayHello(const GreeterRequestMsg&, DeferredGreeterReply);
  void WaveGoodbye(const GreeterRequestMsg&, DeferredGreeterReply);
};

}  // namespace ipc_test

#endif  // IPC_SRC_TEST_GREETER_SERVICE_GEN_H_