// 00186120 decode_error_kind

/* std[6c98fd8553dbae28]::sys::io::error::unix::decode_error_kind */

char * __rustcall std[6c98fd8553dbae28]::sys::io::error::unix::decode_error_kind(undefined4 param_1)

{
  switch(param_1) {
  case 1:
  case 0xd:
    return "t";
  case 2:
    return (char *)0x0;
  default:
    return (char *)0x2a;
  case 4:
    return "r";
  case 7:
    return "e";
  case 0xb:
    return " ";
  case 0xc:
    return "l";
  case 0x10:
    return "l";
  case 0x11:
    return "`";
  case 0x12:
    return "i";
  case 0x14:
    return "o";
  case 0x15:
    return "n";
  case 0x16:
    return "`E";
  case 0x17:
  case 0x18:
    return "er";
  case 0x1a:
    return "u";
  case 0x1b:
    return "a";
  case 0x1c:
    return "`";
  case 0x1d:
    return " ";
  case 0x1e:
    return "a";
  case 0x1f:
    return "n";
  case 0x20:
    return ")";
  case 0x23:
    return "e";
  case 0x24:
    return "t";
  case 0x26:
  case 0x5f:
    return "na";
  case 0x27:
    return " ";
  case 0x28:
    return "n";
  case 0x62:
    return "a";
  case 99:
    return "p";
  case 100:
    return "(";
  case 0x65:
    return "n";
  case 0x67:
    return "w";
  case 0x68:
    return ":";
  case 0x6b:
    return "r";
  case 0x6e:
    return "rr";
  case 0x6f:
    return ":";
  case 0x71:
    return "u";
  case 0x73:
    return " ";
  case 0x74:
    return " ";
  case 0x7a:
    return "v";
  }
}


