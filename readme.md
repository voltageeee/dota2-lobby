# This is an internal Dota 2 server-side plugin that "injects" a lobby object into your server, making the server think that you are hosting a legitimate game with lobby from real gc

!!! WARNING !!! This was intentionally made for an older game version (7.30e), as i was interested in putting up a working legacy server. In the near future, I will make some adjustments in order for it to work properly for the current game version.

With the help of this plugin, you will be able to run your own Dota server and let players connect to it and play on it like they do on valve's official servers.

This just MAY BE a way to do this in Deadlock, which most likely uses the same GC technique.

In order to use it, you should:
```
1. Get the dota protobufs
2. Compile libprotobuf and protoc 3.15.3 (dota uses that version)
3. Use protoc to generate C++ sources for the protobufs
4. Drop the protos in the includes/protos
5. Make sure to get all the dependencies
```

TODOS:
```
0! Update for the latest game version
1. Implement a remote web server.
2. Fetch the match details for a proper lobby setup from a remote web server.
3. Post the match details on a remote web server.
```

i completely forgot to mention the guy who initially wrote this plugin for sourcemod and helped me HELLA LOT throughout the way: https://github.com/psychonic/d2lobby2. this wouldn't be possible without him and i'm eternally grateful to him.
