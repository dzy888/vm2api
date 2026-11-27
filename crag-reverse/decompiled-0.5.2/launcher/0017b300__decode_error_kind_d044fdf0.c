// 0017b300 decode_error_kind

/* std[6c98fd8553dbae28]::sys::io::error::unix::decode_error_kind */

char * __rustcall std[6c98fd8553dbae28]::sys::io::error::unix::decode_error_kind(undefined4 param_1)

{
  switch(param_1) {
  case 1:
  case 0xd:
    return "s";
  case 2:
    return (char *)0x0;
  default:
    return (char *)0x2a;
  case 4:
    return "r";
  case 7:
    return "e";
  case 0xb:
    return "e";
  case 0xc:
    return "r";
  case 0x10:
    return "e";
  case 0x11:
    return "m";
  case 0x12:
    return "a";
  case 0x14:
    return "n";
  case 0x15:
    return "t";
  case 0x16:
    return "n ";
  case 0x17:
  case 0x18:
    return "un";
  case 0x1a:
    return "d";
  case 0x1b:
    return "n";
  case 0x1c:
    return "t";
  case 0x1d:
    return "u";
  case 0x1e:
    return "t";
  case 0x1f:
    return "n";
  case 0x20:
    return "e";
  case 0x23:
    return " ";
  case 0x24:
    return " ";
  case 0x26:
  case 0x5f:
    return "ro";
  case 0x27:
    return "a";
  case 0x28:
    return "i";
  case 0x62:
    return "m";
  case 99:
    return "p";
  case 100:
    return "l";
  case 0x65:
    return "y";
  case 0x67:
    return " ";
  case 0x68:
    return "l";
  case 0x6b:
    return "i";
  case 0x6e:
    return "re";
  case 0x6f:
    return "p";
  case 0x71:
    return "a";
  case 0x73:
    return " ";
  case 0x74:
    return "o";
  case 0x7a:
    return "r";
  }
}


