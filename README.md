__AttrActive__

(c) 2018, extrowerk

A small CLI program to recursively copy the ID3 tags to BeFS attributes and
"identify" audio files.

__Supported filetypes:__

AttrActive uses TagLib, wich supports ID3v1 and ID3v2 for MP3 files, Ogg Vorbis comments and ID3 tags and Vorbis comments in FLAC, MPC, Speex, WavPack, TrueAudio, WAV, AIFF, MP4 and ASF files.
TagLIib is LGPL + MPL.

__Use:__

```$ attractive /your/music/collection```

__How does it work?__

* It takes at least one argument: the working folder
* Checks if the folder exist
* Checks if the folder writeable
* Checks if there any supported file
* It maintains a list about the supported files
* Takes the first file from the list, passes to TagLib
* TagLib extracts the ID3 tags and returns them
* AttrActive writes the BeFS attributes
* Identifies the file
* Takes the next file from the list till its empty

__Future plans:__

* Tracker AddOn
* Support for images and video formats (exiftool?)
* Daemon-mode + file-system monitoring
