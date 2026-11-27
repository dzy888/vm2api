// 0070d250 decode_error_kind

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
    return (char *)0x2a;
  case 4:
    return " ";
  case 7:
    return "s";
  case 0xb:
    return "p";
  case 0xc:
    return "o";
  case 0x10:
    return "t";
  case 0x11:
    return "p";
  case 0x12:
    return "e";
  case 0x14:
    return "e";
  case 0x15:
    return "n";
  case 0x16:
    return "en";
  case 0x17:
  case 0x18:
    return "pe";
  case 0x1a:
    return "i";
  case 0x1b:
    return "n";
  case 0x1c:
    return " ";
  case 0x1d:
    return "r";
  case 0x1e:
    return " ";
  case 0x1f:
    return " ";
  case 0x20:
    return "a";
  case 0x23:
    return "m";
  case 0x24:
    return "i";
  case 0x26:
  case 0x5f:
    return "dr";
  case 0x27:
    return "s";
  case 0x28:
    return "w";
  case 0x62:
    return "s";
  case 99:
    return " ";
  case 100:
    return "h";
  case 0x65:
    return "T";
  case 0x67:
    return "h";
  case 0x68:
    return ".";
  case 0x6b:
    return "i";
  case 0x6e:
    return " a";
  case 0x6f:
    return "d";
  case 0x71:
    return " ";
  case 0x73:
    return "p";
  case 0x74:
    return "h";
  case 0x7a:
    return "u";
  }
}


