// 006f4340 decode_error_kind

/* std[6c98fd8553dbae28]::sys::io::error::unix::decode_error_kind */

char * __rustcall std[6c98fd8553dbae28]::sys::io::error::unix::decode_error_kind(undefined4 param_1)

{
  switch(param_1) {
  case 1:
  case 0xd:
    return "d";
  case 2:
    return (char *)0x0;
  default:
    return (char *)0x2a;
  case 4:
    return "x";
  case 7:
    return "e";
  case 0xb:
    return "e";
  case 0xc:
    return "w";
  case 0x10:
    return "x";
  case 0x11:
    return "l";
  case 0x12:
    return "o";
  case 0x14:
    return " ";
  case 0x15:
    return "I";
  case 0x16:
    return "To";
  case 0x17:
  case 0x18:
    return "s ";
  case 0x1a:
    return " ";
  case 0x1b:
    return ".";
  case 0x1c:
    return "o";
  case 0x1d:
    return " ";
  case 0x1e:
    return ".";
  case 0x1f:
    return "n";
  case 0x20:
    return "b";
  case 0x23:
    return "c";
  case 0x24:
    return "t";
  case 0x26:
  case 0x5f:
    return "t ";
  case 0x27:
    return "O";
  case 0x28:
    return "A";
  case 0x62:
    return "e";
  case 99:
    return "n";
  case 100:
    return "a";
  case 0x65:
    return "t";
  case 0x67:
    return "o";
  case 0x68:
    return "r";
  case 0x6b:
    return " ";
  case 0x6e:
    return "ki";
  case 0x6f:
    return "e";
  case 0x71:
    return " ";
  case 0x73:
    return "a";
  case 0x74:
    return " ";
  case 0x7a:
    return "1";
  }
}


