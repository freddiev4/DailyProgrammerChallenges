The application you will be writing will be a caching server.  This application will be monitoring a directory containing lots and lots of files (so you probably should first write a program that randomly generates lots of files from 1 byte to 1 MB each first before proceeding).  I/O should probably be network-based, but standard I/O (keyboard and screen) can suffice.  Input to this caching server will be a file name matching a file found in the directory that the caching server is monitoring.  When input is requested, the caching server will read the file contents into memory, cache the file contents, and write out the contents as a response to output.  When the request is made again on the same file, just send back the data that was cached in memory.  



The caching server will not need to cache contents of a file if a request hasn't been made after awhile, so set an expiration for cached data to free up memory.



The caching server can run out of memory, so when you cache data, make sure you have enough memory before caching the data.  



After a long period of time, certain files may not be accessed and we want to preserve disk space.  So after a long period of time, compress unused files into one zip file and remove the file from the monitored directory.  When a request is made on that file, unzip the contents and put them back into the directory.