// 00062270 decode_error_kind

/* std[6c98fd8553dbae28]::sys::io::error::unix::decode_error_kind */

char * __rustcall std[6c98fd8553dbae28]::sys::io::error::unix::decode_error_kind(undefined4 param_1)

{
  switch(param_1) {
  case 1:
  case 0xd:
    return "e";
  case 2:
    return (char *)0x0;
  default:
    return "\x0f";
  case 4:
    return "e";
  case 7:
    return "g";
  case 0xb:
    return "g";
  case 0xc:
    return "p";
  case 0x10:
    return "_";
  case 0x11:
    return "d";
  case 0x12:
    return "s";
  case 0x14:
    return "r";
  case 0x15:
    return "p";
  case 0x16:
    return "at";
  case 0x17:
  case 0x18:
    return "nd";
  case 0x1a:
    return "m";
  case 0x1b:
    return "c";
  case 0x1c:
    return "g";
  case 0x1d:
    return "r";
  case 0x1e:
    return "_";
  case 0x1f:
    return "s";
  case 0x20:
    return "i";
  case 0x23:
    return "e";
  case 0x24:
    return "a";
  case 0x26:
  case 0x5f:
    return "ap";
  case 0x27:
    return "c";
  case 0x28:
    return "s";
  case 0x62:
    return "s";
  case 99:
    return "t";
  case 100:
    return "_";
  case 0x65:
    return "q";
  case 0x67:
    return "u";
  case 0x68:
    return "r";
  case 0x6b:
    return "e";
  case 0x6e:
    return "us";
  case 0x6f:
    return "r";
  case 0x71:
    return "e";
  case 0x73:
    return "e";
  case 0x74:
    return "t";
  case 0x7a:
    return "p";
  }
}


