///
/// Testing for the header pbl-io.h
///
/// @author Luna-Klatzer

#include <pbl/pbl.h>
#include "gtest/gtest.h"

TEST(IOFileTest, ConversionCheck) {
  FILE* val = fdopen(2, "w+");
  PblFile_T stream = PblGetFileT(val);

  EXPECT_EQ(stream.actual, val);
  EXPECT_EQ(stream.meta.defined, true);
  EXPECT_EQ(
    PblFile_T_Size,
    sizeof(FILE*)
  );
}

TEST(IOStreamTest, ConversionCheck) {
  PblStream_T stream = PblGetStreamT(1, "w+");

  EXPECT_EQ(stream.actual.fd.actual, 1);
  PblString_T mode = PblGetStringT("w+");
  EXPECT_TRUE(PblCompareStringT(&stream.actual.mode, &mode).actual);
  EXPECT_EQ(stream.actual.open.actual, true);
  EXPECT_EQ(stream.meta.defined, true);
  EXPECT_EQ(
    PblStream_T_Size,
    PblString_T_Size + PblUInt_T_Size + PblFile_T_Size + PblBool_T_Size
    );
}

TEST(IOPrintTest, SimplePrint) {
  PblString_T str = PblCreateStringT(PblGetCharTArray("hello world"), PblGetUIntT(11));

  // size is per default 50 + 1 (for null char)
  EXPECT_EQ(str.actual.allocated_len.actual, 51);

  PblPrint(.out=&str, .end=PblGetCharT(' '));
  PblPrint(&str);

  // deallocating the string
  PblSafeDeallocateStringT(&str);
}

TEST(IOPrintTest, SimplePrintWithSetStream) {
  PblString_T str = PblCreateStringT(PblGetCharTArray("hello world"), PblGetUIntT(11));

  // size is per default 50 + 1 (for null char)
  EXPECT_EQ(str.actual.allocated_len.actual, 51);

  PblPrint(.out = &str, .stream=PBL_STREAM_STDOUT);

  // deallocating the string
  PblSafeDeallocateStringT(&str);
}

