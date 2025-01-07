# MiniZip Standalone Code

This repo contains a version of the MiniZip code for manipulating .zip archives, including zip64 support, extracted from
the much larger [zlib repository](https://github.com/madler/zlib).

It also contains modifications so that it can be built against
[miniz.h](https://github.com/richgel999/miniz), rather than zlib.h. Define
`ZIP_USE_MINIZ` to enable this.

Note: Miniz does have its own built-in API for zip archive support, but it does
not support as wide a range of formats. If you are using the miniz path, you
could consider also defining `MINIZ_NO_ARCHIVE_APIS` to exclude that api.