# protoBufTest

  Testing client for using Protocol Buffer and RPC in CARTA. Based on [hsk81/protobuf-rpc-js](https://github.com/hsk81/protobuf-rpc-js) which is based on [google/protobuf](https://github.com/google/protobuf) and [dcodeIO/protobuf.js](https://github.com/dcodeIO/protobuf.js).
This branch is a simple request-and-acknowlegment test on browser.

# Prerequest

- Qt (ver. > 5 )
- npm 6.0.0

  Currently only tested under macOS High Sierra v. 10.13.1
  
# Usage
## Build and run the C++ server
- make build-server-cpp 
- npm run rpc-server.cpp -- -l

## Build and run the client on browser
- npm i
- npm run www-server.js

And open a browser on http://localhost:8080.

In the consult, you'll see,
![](/consult.png)
