#include "dma.h"

#include "third-party/fmt/core.h"
#include "common/util/assert.h"

std::string DmaTag::print() {
  std::string result;
  const char* mode_names[8] = {"refe", "cnt", "next", "ref", "refs", "call", "ret", "end"};
  result += fmt::format("TAG: 0x{:08x} {:4s} qwc 0x{:04x}", addr, mode_names[(int)kind], qwc);
  if (spr) {
    result += " SPR";
  }
  result += "\n";
  return result;
}

std::string VifCode::print() {
  std::string result;

  bool special_kind = false;
  switch (kind) {
      //    case Kind::NOP:
      //      result = "NOP";
      //      break;
      //    case Kind::STCYCL:
      //      result = "STCYCL";
      //      break;
      //    case Kind::OFFSET:
      //      result = "OFFSET";
      //      break;
      //    case Kind::BASE:
      //      result = "BASE";
      //      break;
      //    case Kind::ITOP:
      //      result = "ITOP";
      //      break;
      //    case Kind::STMOD:
      //      result = "STMOD";
      //      break;
      //    case Kind::MSK3PATH:
      //      result = "MSK3PATH";
      //      break;
      //    case Kind::MARK:
      //      result = "MARK";
      //      break;
      //    case Kind::FLUSHE:
      //      result = "FLUSHE";
      //      break;
      //    case Kind::FLUSH:
      //      result = "FLUSH";
      //      break;
      //
      //    case Kind::FLUSHA:
      //      result = "FLUSHA";
      //      break;
      //    case Kind::MSCAL:
      //      result = "MSCAL";
      //      break;
      //    case Kind::MSCNT:
      //      result = "MSCNT";
      //      break;
      //    case Kind::MSCALF:
      //      result = "MSCALF";
      //      break;
      //    case Kind::STMASK:
      //      result = "STMASK";
      //      break;
      //    case Kind::STROW:
      //      result = "STROW";
      //      break;
      //    case Kind::STCOL:
      //      result = "STCOL";
      //      break;
      //    case Kind::MPG:
      //      result = "MPG";
      //      break;
      //    case Kind::DIRECT:
      //      result = "DIRECT";
      //      break;
      //    case Kind::DIRECTHL:
      //      result = "DIRECTHL";
      //      break;
    default:
      fmt::print("Unhandled vif code {}", (int)kind);
      assert(false);
      //      special_kind = true;
      break;
  }
  //
  //  if (special_kind) {
  //    if (((u32)kind & (u32)Kind::UNPACK_MASK) == (u32)Kind::UNPACK_MASK) {
  //      result = "UNPACK";
  //      assert(false);
  //    } else {
  //      assert(false);
  //    }
  //  }
  //
  //  result += ' ';
  //

  return result;
}

