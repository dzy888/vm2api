// 006c49d0 from_bytes

/* WARNING: Type propagation algorithm not settling */
/* <http[56314f485c23ccf6]::header::name::StandardHeader>::from_bytes */

undefined * __rustcall
<http[56314f485c23ccf6]::header::name::StandardHeader>::from_bytes(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  
  switch(param_2) {
  case 2:
    if (*param_1 != 't') {
      return (undefined *)0xff;
    }
    puVar2 = &DAT_001a8943;
    cVar1 = param_1[1];
    goto joined_r0x006c6286;
  case 3:
    cVar1 = *param_1;
    if (cVar1 == 'v') {
      if (param_1[1] != 'i') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x4a;
      cVar1 = param_1[2];
joined_r0x006c7036:
      if (cVar1 == 'a') {
        return puVar2;
      }
      return (undefined *)0xff;
    }
    if (cVar1 == 'd') {
      if (param_1[1] != 'n') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x1f;
      cVar1 = param_1[2];
      goto joined_r0x006c4a77;
    }
    if (cVar1 != 'a') {
      return (undefined *)0xff;
    }
    if (param_1[1] != 'g') {
      return (undefined *)0xff;
    }
    puVar2 = (undefined *)0xd;
    cVar1 = param_1[2];
    goto joined_r0x006c6286;
  case 4:
    switch(*param_1) {
    case 'd':
      if (param_1[1] != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 't') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x20;
      cVar1 = param_1[3];
joined_r0x006c5cae:
      if (cVar1 == 'e') {
        return puVar2;
      }
      return (undefined *)0xff;
    case 'e':
      if (param_1[1] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'a') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x21;
      cVar1 = param_1[3];
joined_r0x006c6d0f:
      if (cVar1 == 'g') {
        return puVar2;
      }
      return (undefined *)0xff;
    case 'f':
      if (param_1[1] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[3] == 'm') {
        return (undefined *)0x25;
      }
      return (undefined *)0xff;
    default:
      return (undefined *)0xff;
    case 'h':
      if (param_1[1] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 's') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x26;
      cVar1 = param_1[3];
      goto joined_r0x006c4a77;
    case 'l':
      if (param_1[1] != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'n') {
        return (undefined *)0xff;
      }
      if (param_1[3] == 'k') {
        return (undefined *)0x2d;
      }
      return (undefined *)0xff;
    case 'v':
      if (param_1[1] != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'r') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x49;
      cVar1 = param_1[3];
    }
    goto joined_r0x006c53e3;
  case 5:
    if (*param_1 != 'r') {
      if (*param_1 != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[1] != 'l') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'l') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[4] == 'w') {
        return (undefined *)0xe;
      }
      return (undefined *)0xff;
    }
    if (param_1[1] != 'a') {
      return (undefined *)0xff;
    }
    if (param_1[2] != 'n') {
      return (undefined *)0xff;
    }
    if (param_1[3] != 'g') {
      return (undefined *)0xff;
    }
    puVar2 = (undefined *)0x36;
    cVar1 = param_1[4];
    goto joined_r0x006c6286;
  case 6:
    switch(*param_1) {
    case 'a':
      if (param_1[1] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'p') {
        return (undefined *)0xff;
      }
      if (param_1[5] == 't') {
        return (undefined *)0x0;
      }
      return (undefined *)0xff;
    default:
      return (undefined *)0xff;
    case 'c':
      if (param_1[1] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'k') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'i') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x1e;
      cVar1 = param_1[5];
      goto joined_r0x006c5cae;
    case 'e':
      if (param_1[1] != 'x') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'p') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'c') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x22;
      cVar1 = param_1[5];
      break;
    case 'o':
      if (param_1[1] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'g') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'i') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x30;
      cVar1 = param_1[5];
joined_r0x006c5a2e:
      if (cVar1 == 'n') {
        return puVar2;
      }
      return (undefined *)0xff;
    case 'p':
      if (param_1[1] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'g') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'm') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x31;
      cVar1 = param_1[5];
      goto joined_r0x006c7036;
    case 's':
      if (param_1[1] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'v') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'e') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x40;
      cVar1 = param_1[5];
      goto joined_r0x006c59af;
    }
    goto joined_r0x006c4a77;
  case 7:
    switch(*param_1) {
    case 'a':
      if (param_1[1] != 'l') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[3] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 's') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 'v') {
        return (undefined *)0xff;
      }
      if (param_1[6] == 'c') {
        return (undefined *)0xf;
      }
      return (undefined *)0xff;
    default:
      return (undefined *)0xff;
    case 'e':
      if (param_1[1] != 'x') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'p') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 'e') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x23;
      cVar1 = param_1[6];
      goto joined_r0x006c4fcf;
    case 'r':
      if (param_1[1] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'f') {
        return (undefined *)0xff;
      }
      if (param_1[3] == 'r') {
        if (param_1[4] != 'e') {
          return (undefined *)0xff;
        }
        if (param_1[5] != 's') {
          return (undefined *)0xff;
        }
        puVar2 = (undefined *)0x39;
        cVar1 = param_1[6];
        goto joined_r0x006c60ff;
      }
      if (param_1[3] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 'e') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x37;
      break;
    case 't':
      if (param_1[1] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'l') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 'e') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x44;
      break;
    case 'u':
      if (param_1[1] != 'p') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'g') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 'd') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x47;
      cVar1 = param_1[6];
      goto joined_r0x006c5cae;
    case 'w':
      if (param_1[1] != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'n') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 'n') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x4b;
      cVar1 = param_1[6];
      goto joined_r0x006c6d0f;
    }
    cVar1 = param_1[6];
joined_r0x006c59af:
    if (cVar1 == 'r') {
      return puVar2;
    }
    return (undefined *)0xff;
  case 8:
    if (*param_1 != 'l') {
      if (*param_1 != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[1] != 'f') {
        return (undefined *)0xff;
      }
      if (param_1[2] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'r') {
        if (param_1[3] != 'm') {
          return (undefined *)0xff;
        }
        if (param_1[4] != 'a') {
          return (undefined *)0xff;
        }
        if (param_1[5] != 't') {
          return (undefined *)0xff;
        }
        if (param_1[6] != 'c') {
          return (undefined *)0xff;
        }
        puVar2 = (undefined *)0x27;
        cVar1 = param_1[7];
        goto joined_r0x006c60ff;
      }
      if (param_1[4] != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 'n') {
        return (undefined *)0xff;
      }
      if (param_1[6] != 'g') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x2a;
      cVar1 = param_1[7];
      goto joined_r0x006c5cae;
    }
    if (param_1[1] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[2] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[3] != 'a') {
      return (undefined *)0xff;
    }
    if (param_1[4] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[5] != 'i') {
      return (undefined *)0xff;
    }
    if (param_1[6] != 'o') {
      return (undefined *)0xff;
    }
    puVar2 = (undefined *)0x2e;
    cVar1 = param_1[7];
    goto joined_r0x006c560f;
  case 9:
    if (*param_1 != 'f') {
      return (undefined *)0xff;
    }
    if (param_1[1] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[2] != 'r') {
      return (undefined *)0xff;
    }
    if (param_1[3] != 'w') {
      return (undefined *)0xff;
    }
    if (param_1[4] != 'a') {
      return (undefined *)0xff;
    }
    if (param_1[5] != 'r') {
      return (undefined *)0xff;
    }
    if (param_1[6] != 'd') {
      return (undefined *)0xff;
    }
    if (param_1[7] != 'e') {
      return (undefined *)0xff;
    }
    puVar2 = &DAT_001a8924;
    cVar1 = param_1[8];
joined_r0x006c7412:
    if (cVar1 == 'd') {
      return puVar2;
    }
    return (undefined *)0xff;
  case 10:
    cVar1 = *param_1;
    if (cVar1 != 'u') {
      if (cVar1 != 's') {
        if (cVar1 != 'c') {
          return (undefined *)0xff;
        }
        if (param_1[1] != 'o') {
          return (undefined *)0xff;
        }
        if (param_1[2] != 'n') {
          return (undefined *)0xff;
        }
        if (param_1[3] != 'n') {
          return (undefined *)0xff;
        }
        if (param_1[4] != 'e') {
          return (undefined *)0xff;
        }
        if (param_1[5] != 'c') {
          return (undefined *)0xff;
        }
        if (param_1[6] != 't') {
          return (undefined *)0xff;
        }
        if (param_1[7] != 'i') {
          return (undefined *)0xff;
        }
        if (param_1[8] != 'o') {
          return (undefined *)0xff;
        }
        puVar2 = (undefined *)0x14;
        cVar1 = param_1[9];
        goto joined_r0x006c5a2e;
      }
      if (param_1[1] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[3] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[6] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[7] != 'k') {
        return (undefined *)0xff;
      }
      if (param_1[8] != 'i') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x41;
      cVar1 = param_1[9];
      goto joined_r0x006c5cae;
    }
    if (param_1[1] != 's') {
      return (undefined *)0xff;
    }
    if (param_1[2] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[3] != 'r') {
      return (undefined *)0xff;
    }
    if (param_1[4] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[5] != 'a') {
      return (undefined *)0xff;
    }
    if (param_1[6] != 'g') {
      return (undefined *)0xff;
    }
    if (param_1[7] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[8] != 'n') {
      return (undefined *)0xff;
    }
    puVar2 = (undefined *)0x46;
    cVar1 = param_1[9];
    goto joined_r0x006c4a77;
  case 0xb:
    if (*param_1 != 'r') {
      return (undefined *)0xff;
    }
    if (param_1[1] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[2] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[3] != 'r') {
      return (undefined *)0xff;
    }
    if (param_1[4] != 'y') {
      return (undefined *)0xff;
    }
    if (param_1[5] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[6] != 'a') {
      return (undefined *)0xff;
    }
    if (param_1[7] != 'f') {
      return (undefined *)0xff;
    }
    if (param_1[8] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[9] != 'e') {
      return (undefined *)0xff;
    }
    puVar2 = &DAT_001a893a;
    cVar1 = param_1[10];
    goto joined_r0x006c59af;
  case 0xc:
    if (*param_1 == 'm') {
      if (param_1[1] != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'x') {
        return (undefined *)0xff;
      }
      if (param_1[3] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'f') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[6] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[7] != 'w') {
        return (undefined *)0xff;
      }
      if (param_1[8] != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[9] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[10] != 'd') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x2f;
    }
    else {
      if (*param_1 != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[1] != 'a') {
        if (param_1[1] != 'o') {
          return (undefined *)0xff;
        }
        if (param_1[2] != 'n') {
          return (undefined *)0xff;
        }
        if (param_1[3] != 't') {
          return (undefined *)0xff;
        }
        if (param_1[4] != 'e') {
          return (undefined *)0xff;
        }
        if (param_1[5] != 'n') {
          return (undefined *)0xff;
        }
        if (param_1[6] != 't') {
          return (undefined *)0xff;
        }
        if (param_1[7] != '-') {
          return (undefined *)0xff;
        }
        if (param_1[8] != 't') {
          return (undefined *)0xff;
        }
        if (param_1[9] != 'y') {
          return (undefined *)0xff;
        }
        if (param_1[10] != 'p') {
          return (undefined *)0xff;
        }
        puVar2 = (undefined *)0x1d;
        cVar1 = param_1[0xb];
        goto joined_r0x006c5cae;
      }
      if (param_1[2] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'h') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[5] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[6] != 's') {
        return (undefined *)0xff;
      }
      if (param_1[7] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[8] != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[9] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[10] != 'u') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x12;
    }
    cVar1 = param_1[0xb];
    break;
  case 0xd:
    switch(*param_1) {
    case 'a':
      if (param_1[1] != 'c') {
        if (param_1[1] != 'u') {
          return (undefined *)0xff;
        }
        if (param_1[2] != 't') {
          return (undefined *)0xff;
        }
        if (param_1[3] != 'h') {
          return (undefined *)0xff;
        }
        if (param_1[4] != 'o') {
          return (undefined *)0xff;
        }
        if (param_1[5] != 'r') {
          return (undefined *)0xff;
        }
        if (param_1[6] != 'i') {
          return (undefined *)0xff;
        }
        if (param_1[7] != 'z') {
          return (undefined *)0xff;
        }
        if (param_1[8] != 'a') {
          return (undefined *)0xff;
        }
        if (param_1[9] != 't') {
          return (undefined *)0xff;
        }
        if (param_1[10] != 'i') {
          return (undefined *)0xff;
        }
        if (param_1[0xb] != 'o') {
          return (undefined *)0xff;
        }
        puVar2 = (undefined *)0x10;
        cVar1 = param_1[0xc];
        goto joined_r0x006c560f;
      }
      if (param_1[2] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'p') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[6] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[7] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[8] != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[9] != 'n') {
        return (undefined *)0xff;
      }
      if (param_1[10] != 'g') {
        return (undefined *)0xff;
      }
      if (param_1[0xb] != 'e') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x4;
      cVar1 = param_1[0xc];
      break;
    default:
      goto switchD_006c49ec_caseD_1a;
    case 'c':
      if (param_1[1] != 'a') {
        if (param_1[1] != 'o') {
          return (undefined *)0xff;
        }
        if (param_1[2] != 'n') {
          return (undefined *)0xff;
        }
        if (param_1[3] != 't') {
          return (undefined *)0xff;
        }
        if (param_1[4] != 'e') {
          return (undefined *)0xff;
        }
        if (param_1[5] != 'n') {
          return (undefined *)0xff;
        }
        if (param_1[6] != 't') {
          return (undefined *)0xff;
        }
        if (param_1[7] != '-') {
          return (undefined *)0xff;
        }
        if (param_1[8] != 'r') {
          return (undefined *)0xff;
        }
        if (param_1[9] != 'a') {
          return (undefined *)0xff;
        }
        if (param_1[10] != 'n') {
          return (undefined *)0xff;
        }
        if (param_1[0xb] != 'g') {
          return (undefined *)0xff;
        }
        puVar2 = (undefined *)0x1a;
        cVar1 = param_1[0xc];
        goto joined_r0x006c5cae;
      }
      if (param_1[2] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'h') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[5] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[6] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[7] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[8] != 'n') {
        return (undefined *)0xff;
      }
      if (param_1[9] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[10] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[0xb] != 'o') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x11;
      cVar1 = param_1[0xc];
      goto joined_r0x006c7250;
    case 'i':
      if (param_1[1] != 'f') {
        return (undefined *)0xff;
      }
      if (param_1[2] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'n') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 'n') {
        return (undefined *)0xff;
      }
      if (param_1[6] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[7] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[8] != 'm') {
        return (undefined *)0xff;
      }
      if (param_1[9] != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[10] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[0xb] != 'c') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x29;
      cVar1 = param_1[0xc];
joined_r0x006c60ff:
      if (cVar1 == 'h') {
        return puVar2;
      }
      return (undefined *)0xff;
    case 'l':
      if (param_1[1] != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 's') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[4] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 'm') {
        return (undefined *)0xff;
      }
      if (param_1[6] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[7] != 'd') {
        return (undefined *)0xff;
      }
      if (param_1[8] != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[9] != 'f') {
        return (undefined *)0xff;
      }
      if (param_1[10] != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[0xb] != 'e') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x2c;
      cVar1 = param_1[0xc];
      goto joined_r0x006c7412;
    }
    break;
  case 0xe:
    if (*param_1 == 'c') {
      if (param_1[1] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'n') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 'n') {
        return (undefined *)0xff;
      }
      if (param_1[6] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[7] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[8] != 'l') {
        return (undefined *)0xff;
      }
      if (param_1[9] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[10] != 'n') {
        return (undefined *)0xff;
      }
      if (param_1[0xb] != 'g') {
        return (undefined *)0xff;
      }
      if (param_1[0xc] != 't') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x18;
      cVar1 = param_1[0xd];
      goto joined_r0x006c60ff;
    }
    if (*param_1 != 'a') {
      return (undefined *)0xff;
    }
    if (param_1[1] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[2] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[3] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[4] != 'p') {
      return (undefined *)0xff;
    }
    if (param_1[5] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[6] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[7] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[8] != 'h') {
      return (undefined *)0xff;
    }
    if (param_1[9] != 'a') {
      return (undefined *)0xff;
    }
    if (param_1[10] != 'r') {
      return (undefined *)0xff;
    }
    if (param_1[0xb] != 's') {
      return (undefined *)0xff;
    }
    if (param_1[0xc] != 'e') {
      return (undefined *)0xff;
    }
    puVar2 = (undefined *)0x1;
    cVar1 = param_1[0xd];
    goto joined_r0x006c4a77;
  case 0xf:
    switch(*param_1) {
    case 'a':
      if (param_1[1] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'p') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[6] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[7] != 'l') {
        if (param_1[7] != 'e') {
          return (undefined *)0xff;
        }
        if (param_1[8] != 'n') {
          return (undefined *)0xff;
        }
        if (param_1[9] != 'c') {
          return (undefined *)0xff;
        }
        if (param_1[10] != 'o') {
          return (undefined *)0xff;
        }
        if (param_1[0xb] != 'd') {
          return (undefined *)0xff;
        }
        if (param_1[0xc] != 'i') {
          return (undefined *)0xff;
        }
        if (param_1[0xd] != 'n') {
          return (undefined *)0xff;
        }
        if (param_1[0xe] == 'g') {
          return (undefined *)0x2;
        }
        return (undefined *)0xff;
      }
      if (param_1[8] != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[9] != 'n') {
        return (undefined *)0xff;
      }
      if (param_1[10] != 'g') {
        return (undefined *)0xff;
      }
      if (param_1[0xb] != 'u') {
        return (undefined *)0xff;
      }
      if (param_1[0xc] != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[0xd] != 'g') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x3;
      cVar1 = param_1[0xe];
      goto joined_r0x006c5cae;
    default:
      goto switchD_006c49ec_caseD_1a;
    case 'p':
      if (param_1[1] != 'u') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'b') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'l') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[6] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[7] != 'k') {
        return (undefined *)0xff;
      }
      if (param_1[8] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[9] != 'y') {
        return (undefined *)0xff;
      }
      if (param_1[10] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[0xb] != 'p') {
        return (undefined *)0xff;
      }
      if (param_1[0xc] != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[0xd] != 'n') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x34;
      break;
    case 'r':
      if (param_1[1] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'f') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[6] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[7] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[8] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[9] != 'p') {
        return (undefined *)0xff;
      }
      if (param_1[10] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[0xb] != 'l') {
        return (undefined *)0xff;
      }
      if (param_1[0xc] != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[0xd] != 'c') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x38;
      cVar1 = param_1[0xe];
      goto joined_r0x006c53e3;
    case 'x':
      if (param_1[1] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'f') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 'm') {
        return (undefined *)0xff;
      }
      if (param_1[6] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[7] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[8] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[9] != 'p') {
        return (undefined *)0xff;
      }
      if (param_1[10] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[0xb] != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[0xc] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[0xd] != 'n') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x4f;
    }
    cVar1 = param_1[0xe];
    break;
  case 0x10:
    cVar1 = *param_1;
    if (cVar1 == 'x') {
      if (param_1[1] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'x') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 's') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 's') {
        return (undefined *)0xff;
      }
      if (param_1[5] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[6] != 'p') {
        return (undefined *)0xff;
      }
      if (param_1[7] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[8] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[9] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[10] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[0xb] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[0xc] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[0xd] != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[0xe] != 'o') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x50;
      cVar1 = param_1[0xf];
    }
    else {
      if (cVar1 == 'w') {
        if (param_1[1] != 'w') {
          return (undefined *)0xff;
        }
        if (param_1[2] != 'w') {
          return (undefined *)0xff;
        }
        if (param_1[3] != '-') {
          return (undefined *)0xff;
        }
        if (param_1[4] != 'a') {
          return (undefined *)0xff;
        }
        if (param_1[5] != 'u') {
          return (undefined *)0xff;
        }
        if (param_1[6] != 't') {
          return (undefined *)0xff;
        }
        if (param_1[7] != 'h') {
          return (undefined *)0xff;
        }
        if (param_1[8] != 'e') {
          return (undefined *)0xff;
        }
        if (param_1[9] != 'n') {
          return (undefined *)0xff;
        }
        if (param_1[10] != 't') {
          return (undefined *)0xff;
        }
        if (param_1[0xb] != 'i') {
          return (undefined *)0xff;
        }
        if (param_1[0xc] != 'c') {
          return (undefined *)0xff;
        }
        if (param_1[0xd] != 'a') {
          return (undefined *)0xff;
        }
        if (param_1[0xe] != 't') {
          return (undefined *)0xff;
        }
        puVar2 = (undefined *)0x4c;
        cVar1 = param_1[0xf];
        goto joined_r0x006c5cae;
      }
      if (cVar1 != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[1] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'n') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 'n') {
        return (undefined *)0xff;
      }
      if (param_1[6] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[7] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[8] != 'l') {
        if (param_1[8] != 'e') {
          return (undefined *)0xff;
        }
        if (param_1[9] != 'n') {
          return (undefined *)0xff;
        }
        if (param_1[10] != 'c') {
          return (undefined *)0xff;
        }
        if (param_1[0xb] != 'o') {
          return (undefined *)0xff;
        }
        if (param_1[0xc] != 'd') {
          return (undefined *)0xff;
        }
        if (param_1[0xd] != 'i') {
          return (undefined *)0xff;
        }
        if (param_1[0xe] != 'n') {
          return (undefined *)0xff;
        }
        puVar2 = (undefined *)0x16;
        cVar1 = param_1[0xf];
        goto joined_r0x006c6d0f;
      }
      if (param_1[9] == 'a') {
        if (param_1[10] != 'n') {
          return (undefined *)0xff;
        }
        if (param_1[0xb] != 'g') {
          return (undefined *)0xff;
        }
        if (param_1[0xc] != 'u') {
          return (undefined *)0xff;
        }
        if (param_1[0xd] != 'a') {
          return (undefined *)0xff;
        }
        if (param_1[0xe] != 'g') {
          return (undefined *)0xff;
        }
        puVar2 = (undefined *)0x17;
        cVar1 = param_1[0xf];
        goto joined_r0x006c6286;
      }
      if (param_1[9] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[10] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[0xb] != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[0xc] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[0xd] != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[0xe] != 'o') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x19;
      cVar1 = param_1[0xf];
    }
    goto joined_r0x006c560f;
  case 0x11:
    switch(*param_1) {
    case 'c':
      if (param_1[1] != 'd') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'n') {
        return (undefined *)0xff;
      }
      if (param_1[3] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[6] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[7] != 'h') {
        return (undefined *)0xff;
      }
      if (param_1[8] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[9] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[10] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[0xb] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[0xc] != 'n') {
        return (undefined *)0xff;
      }
      if (param_1[0xd] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[0xe] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[0xf] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[0x10] == 'l') {
        return (undefined *)0x13;
      }
      return (undefined *)0xff;
    default:
      return (undefined *)0xff;
    case 'i':
      if (param_1[1] != 'f') {
        return (undefined *)0xff;
      }
      if (param_1[2] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'm') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 'd') {
        return (undefined *)0xff;
      }
      if (param_1[6] != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[7] != 'f') {
        return (undefined *)0xff;
      }
      if (param_1[8] != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[9] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[10] != 'd') {
        return (undefined *)0xff;
      }
      if (param_1[0xb] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[0xc] != 's') {
        return (undefined *)0xff;
      }
      if (param_1[0xd] != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[0xe] != 'n') {
        return (undefined *)0xff;
      }
      if (param_1[0xf] != 'c') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x28;
      cVar1 = param_1[0x10];
      goto joined_r0x006c5cae;
    case 's':
      if (param_1[1] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[3] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'w') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[6] != 'b') {
        return (undefined *)0xff;
      }
      if (param_1[7] != 's') {
        return (undefined *)0xff;
      }
      if (param_1[8] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[9] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[10] != 'k') {
        return (undefined *)0xff;
      }
      if (param_1[0xb] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[0xc] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[0xd] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[0xe] != 'k') {
        return (undefined *)0xff;
      }
      if (param_1[0xf] != 'e') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x3d;
      cVar1 = param_1[0x10];
      break;
    case 't':
      if (param_1[1] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'n') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 's') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 'f') {
        return (undefined *)0xff;
      }
      if (param_1[6] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[7] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[8] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[9] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[10] != 'n') {
        return (undefined *)0xff;
      }
      if (param_1[0xb] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[0xc] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[0xd] != 'd') {
        return (undefined *)0xff;
      }
      if (param_1[0xe] != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[0xf] != 'n') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x45;
      cVar1 = param_1[0x10];
      goto joined_r0x006c6d0f;
    }
    goto joined_r0x006c53e3;
  case 0x12:
    if (*param_1 != 'p') {
      return (undefined *)0xff;
    }
    if (param_1[1] != 'r') {
      return (undefined *)0xff;
    }
    if (param_1[2] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[3] != 'x') {
      return (undefined *)0xff;
    }
    if (param_1[4] != 'y') {
      return (undefined *)0xff;
    }
    if (param_1[5] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[6] != 'a') {
      return (undefined *)0xff;
    }
    if (param_1[7] != 'u') {
      return (undefined *)0xff;
    }
    if (param_1[8] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[9] != 'h') {
      return (undefined *)0xff;
    }
    if (param_1[10] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[0xb] != 'n') {
      return (undefined *)0xff;
    }
    if (param_1[0xc] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[0xd] != 'i') {
      return (undefined *)0xff;
    }
    if (param_1[0xe] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[0xf] != 'a') {
      return (undefined *)0xff;
    }
    if (param_1[0x10] != 't') {
      return (undefined *)0xff;
    }
    puVar2 = &DAT_001a8932;
    cVar1 = param_1[0x11];
joined_r0x006c6286:
    if (cVar1 == 'e') {
      return puVar2;
    }
    return (undefined *)0xff;
  case 0x13:
    cVar1 = *param_1;
    if (cVar1 == 'p') {
      if (param_1[1] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'x') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'y') {
        return (undefined *)0xff;
      }
      if (param_1[5] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[6] != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[7] != 'u') {
        return (undefined *)0xff;
      }
      if (param_1[8] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[9] != 'h') {
        return (undefined *)0xff;
      }
      if (param_1[10] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[0xb] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[0xc] != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[0xd] != 'z') {
        return (undefined *)0xff;
      }
      if (param_1[0xe] != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[0xf] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[0x10] != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[0x11] != 'o') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x33;
    }
    else {
      if (cVar1 == 'i') {
        if (param_1[1] != 'f') {
          return (undefined *)0xff;
        }
        if (param_1[2] != '-') {
          return (undefined *)0xff;
        }
        if (param_1[3] != 'u') {
          return (undefined *)0xff;
        }
        if (param_1[4] != 'n') {
          return (undefined *)0xff;
        }
        if (param_1[5] != 'm') {
          return (undefined *)0xff;
        }
        if (param_1[6] != 'o') {
          return (undefined *)0xff;
        }
        if (param_1[7] != 'd') {
          return (undefined *)0xff;
        }
        if (param_1[8] != 'i') {
          return (undefined *)0xff;
        }
        if (param_1[9] != 'f') {
          return (undefined *)0xff;
        }
        if (param_1[10] != 'i') {
          return (undefined *)0xff;
        }
        if (param_1[0xb] != 'e') {
          return (undefined *)0xff;
        }
        if (param_1[0xc] != 'd') {
          return (undefined *)0xff;
        }
        if (param_1[0xd] != '-') {
          return (undefined *)0xff;
        }
        if (param_1[0xe] != 's') {
          return (undefined *)0xff;
        }
        if (param_1[0xf] != 'i') {
          return (undefined *)0xff;
        }
        if (param_1[0x10] != 'n') {
          return (undefined *)0xff;
        }
        if (param_1[0x11] != 'c') {
          return (undefined *)0xff;
        }
        puVar2 = (undefined *)0x2b;
        cVar1 = param_1[0x12];
        goto joined_r0x006c5cae;
      }
      if (cVar1 != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[1] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'n') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 'n') {
        return (undefined *)0xff;
      }
      if (param_1[6] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[7] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[8] != 'd') {
        return (undefined *)0xff;
      }
      if (param_1[9] != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[10] != 's') {
        return (undefined *)0xff;
      }
      if (param_1[0xb] != 'p') {
        return (undefined *)0xff;
      }
      if (param_1[0xc] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[0xd] != 's') {
        return (undefined *)0xff;
      }
      if (param_1[0xe] != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[0xf] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[0x10] != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[0x11] != 'o') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x15;
    }
    cVar1 = param_1[0x12];
    goto joined_r0x006c560f;
  case 0x14:
    if (*param_1 != 's') {
      return (undefined *)0xff;
    }
    if (param_1[1] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[2] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[3] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[4] != 'w') {
      return (undefined *)0xff;
    }
    if (param_1[5] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[6] != 'b') {
      return (undefined *)0xff;
    }
    if (param_1[7] != 's') {
      return (undefined *)0xff;
    }
    if (param_1[8] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[9] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[10] != 'k') {
      return (undefined *)0xff;
    }
    if (param_1[0xb] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[0xc] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[0xd] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[0xe] != 'a') {
      return (undefined *)0xff;
    }
    if (param_1[0xf] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[0x10] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[0x11] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[0x12] != 'p') {
      return (undefined *)0xff;
    }
    puVar2 = &DAT_001a893b;
    cVar1 = param_1[0x13];
joined_r0x006c4a77:
    if (cVar1 == 't') {
      return puVar2;
    }
    return (undefined *)0xff;
  case 0x15:
    if (*param_1 != 's') {
      return (undefined *)0xff;
    }
    if (param_1[1] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[2] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[3] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[4] != 'w') {
      return (undefined *)0xff;
    }
    if (param_1[5] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[6] != 'b') {
      return (undefined *)0xff;
    }
    if (param_1[7] != 's') {
      return (undefined *)0xff;
    }
    if (param_1[8] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[9] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[10] != 'k') {
      return (undefined *)0xff;
    }
    if (param_1[0xb] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[0xc] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[0xd] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[0xe] != 'v') {
      return (undefined *)0xff;
    }
    if (param_1[0xf] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[0x10] != 'r') {
      return (undefined *)0xff;
    }
    if (param_1[0x11] != 's') {
      return (undefined *)0xff;
    }
    if (param_1[0x12] != 'i') {
      return (undefined *)0xff;
    }
    if (param_1[0x13] != 'o') {
      return (undefined *)0xff;
    }
    puVar2 = &DAT_001a893f;
    cVar1 = param_1[0x14];
joined_r0x006c560f:
    if (cVar1 == 'n') {
      return puVar2;
    }
    return (undefined *)0xff;
  case 0x16:
    cVar1 = *param_1;
    if (cVar1 == 'x') {
      if (param_1[1] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'd') {
        if (param_1[2] != 'c') {
          return (undefined *)0xff;
        }
        if (param_1[3] != 'o') {
          return (undefined *)0xff;
        }
        if (param_1[4] != 'n') {
          return (undefined *)0xff;
        }
        if (param_1[5] != 't') {
          return (undefined *)0xff;
        }
        if (param_1[6] != 'e') {
          return (undefined *)0xff;
        }
        if (param_1[7] != 'n') {
          return (undefined *)0xff;
        }
        if (param_1[8] != 't') {
          return (undefined *)0xff;
        }
        if (param_1[9] != '-') {
          return (undefined *)0xff;
        }
        if (param_1[10] != 't') {
          return (undefined *)0xff;
        }
        if (param_1[0xb] != 'y') {
          return (undefined *)0xff;
        }
        if (param_1[0xc] != 'p') {
          return (undefined *)0xff;
        }
        if (param_1[0xd] != 'e') {
          return (undefined *)0xff;
        }
        if (param_1[0xe] != '-') {
          return (undefined *)0xff;
        }
        if (param_1[0xf] != 'o') {
          return (undefined *)0xff;
        }
        if (param_1[0x10] != 'p') {
          return (undefined *)0xff;
        }
        if (param_1[0x11] != 't') {
          return (undefined *)0xff;
        }
        if (param_1[0x12] != 'i') {
          return (undefined *)0xff;
        }
        if (param_1[0x13] != 'o') {
          return (undefined *)0xff;
        }
        if (param_1[0x14] != 'n') {
          return (undefined *)0xff;
        }
        puVar2 = (undefined *)0x4d;
        cVar1 = param_1[0x15];
        break;
      }
      if (param_1[3] != 'n') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 's') {
        return (undefined *)0xff;
      }
      if (param_1[5] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[6] != 'p') {
        return (undefined *)0xff;
      }
      if (param_1[7] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[8] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[9] != 'f') {
        return (undefined *)0xff;
      }
      if (param_1[10] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[0xb] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[0xc] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[0xd] != 'h') {
        return (undefined *)0xff;
      }
      if (param_1[0xe] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[0xf] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[0x10] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[0x11] != 'n') {
        return (undefined *)0xff;
      }
      if (param_1[0x12] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[0x13] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[0x14] != 'o') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x4e;
    }
    else {
      if (cVar1 != 's') {
        if (cVar1 != 'a') {
          return (undefined *)0xff;
        }
        if (param_1[1] != 'c') {
          return (undefined *)0xff;
        }
        if (param_1[2] != 'c') {
          return (undefined *)0xff;
        }
        if (param_1[3] != 'e') {
          return (undefined *)0xff;
        }
        if (param_1[4] != 's') {
          return (undefined *)0xff;
        }
        if (param_1[5] != 's') {
          return (undefined *)0xff;
        }
        if (param_1[6] != '-') {
          return (undefined *)0xff;
        }
        if (param_1[7] != 'c') {
          return (undefined *)0xff;
        }
        if (param_1[8] != 'o') {
          return (undefined *)0xff;
        }
        if (param_1[9] != 'n') {
          return (undefined *)0xff;
        }
        if (param_1[10] != 't') {
          return (undefined *)0xff;
        }
        if (param_1[0xb] != 'r') {
          return (undefined *)0xff;
        }
        if (param_1[0xc] != 'o') {
          return (undefined *)0xff;
        }
        if (param_1[0xd] != 'l') {
          return (undefined *)0xff;
        }
        if (param_1[0xe] != '-') {
          return (undefined *)0xff;
        }
        if (param_1[0xf] != 'm') {
          return (undefined *)0xff;
        }
        if (param_1[0x10] != 'a') {
          return (undefined *)0xff;
        }
        if (param_1[0x11] != 'x') {
          return (undefined *)0xff;
        }
        if (param_1[0x12] != '-') {
          return (undefined *)0xff;
        }
        if (param_1[0x13] != 'a') {
          return (undefined *)0xff;
        }
        if (param_1[0x14] != 'g') {
          return (undefined *)0xff;
        }
        puVar2 = (undefined *)0xa;
        cVar1 = param_1[0x15];
        goto joined_r0x006c5cae;
      }
      if (param_1[1] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[3] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'w') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[6] != 'b') {
        return (undefined *)0xff;
      }
      if (param_1[7] != 's') {
        return (undefined *)0xff;
      }
      if (param_1[8] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[9] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[10] != 'k') {
        return (undefined *)0xff;
      }
      if (param_1[0xb] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[0xc] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[0xd] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[0xe] != 'p') {
        return (undefined *)0xff;
      }
      if (param_1[0xf] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[0x10] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[0x11] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[0x12] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[0x13] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[0x14] != 'o') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x3e;
    }
    cVar1 = param_1[0x15];
joined_r0x006c7250:
    if (cVar1 == 'l') {
      return puVar2;
    }
    return (undefined *)0xff;
  case 0x17:
    if (*param_1 != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[1] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[2] != 'n') {
      return (undefined *)0xff;
    }
    if (param_1[3] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[4] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[5] != 'n') {
      return (undefined *)0xff;
    }
    if (param_1[6] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[7] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[8] != 's') {
      return (undefined *)0xff;
    }
    if (param_1[9] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[10] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[0xb] != 'u') {
      return (undefined *)0xff;
    }
    if (param_1[0xc] != 'r') {
      return (undefined *)0xff;
    }
    if (param_1[0xd] != 'i') {
      return (undefined *)0xff;
    }
    if (param_1[0xe] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[0xf] != 'y') {
      return (undefined *)0xff;
    }
    if (param_1[0x10] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[0x11] != 'p') {
      return (undefined *)0xff;
    }
    if (param_1[0x12] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[0x13] != 'l') {
      return (undefined *)0xff;
    }
    if (param_1[0x14] != 'i') {
      return (undefined *)0xff;
    }
    if (param_1[0x15] != 'c') {
      return (undefined *)0xff;
    }
    puVar2 = &DAT_001a891b;
    cVar1 = param_1[0x16];
    goto joined_r0x006c53e3;
  case 0x18:
    if (*param_1 != 's') {
      return (undefined *)0xff;
    }
    if (param_1[1] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[2] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[3] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[4] != 'w') {
      return (undefined *)0xff;
    }
    if (param_1[5] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[6] != 'b') {
      return (undefined *)0xff;
    }
    if (param_1[7] != 's') {
      return (undefined *)0xff;
    }
    if (param_1[8] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[9] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[10] != 'k') {
      return (undefined *)0xff;
    }
    if (param_1[0xb] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[0xc] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[0xd] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[0xe] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[0xf] != 'x') {
      return (undefined *)0xff;
    }
    if (param_1[0x10] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[0x11] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[0x12] != 'n') {
      return (undefined *)0xff;
    }
    if (param_1[0x13] != 's') {
      return (undefined *)0xff;
    }
    if (param_1[0x14] != 'i') {
      return (undefined *)0xff;
    }
    if (param_1[0x15] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[0x16] != 'n') {
      return (undefined *)0xff;
    }
    puVar2 = &DAT_001a893c;
    cVar1 = param_1[0x17];
    break;
  case 0x19:
    if (*param_1 == 'u') {
      if (param_1[1] != 'p') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'g') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 'd') {
        return (undefined *)0xff;
      }
      if (param_1[6] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[7] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[8] != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[9] != 'n') {
        return (undefined *)0xff;
      }
      if (param_1[10] != 's') {
        return (undefined *)0xff;
      }
      if (param_1[0xb] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[0xc] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[0xd] != 'u') {
        return (undefined *)0xff;
      }
      if (param_1[0xe] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[0xf] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[0x10] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[0x11] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[0x12] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[0x13] != 'q') {
        return (undefined *)0xff;
      }
      if (param_1[0x14] != 'u') {
        return (undefined *)0xff;
      }
      if (param_1[0x15] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[0x16] != 's') {
        return (undefined *)0xff;
      }
      if (param_1[0x17] != 't') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x48;
      cVar1 = param_1[0x18];
      break;
    }
    if (*param_1 != 's') {
      return (undefined *)0xff;
    }
    if (param_1[1] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[2] != 'r') {
      return (undefined *)0xff;
    }
    if (param_1[3] != 'i') {
      return (undefined *)0xff;
    }
    if (param_1[4] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[5] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[6] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[7] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[8] != 'r') {
      return (undefined *)0xff;
    }
    if (param_1[9] != 'a') {
      return (undefined *)0xff;
    }
    if (param_1[10] != 'n') {
      return (undefined *)0xff;
    }
    if (param_1[0xb] != 's') {
      return (undefined *)0xff;
    }
    if (param_1[0xc] != 'p') {
      return (undefined *)0xff;
    }
    if (param_1[0xd] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[0xe] != 'r') {
      return (undefined *)0xff;
    }
    if (param_1[0xf] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[0x10] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[0x11] != 's') {
      return (undefined *)0xff;
    }
    if (param_1[0x12] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[0x13] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[0x14] != 'u') {
      return (undefined *)0xff;
    }
    if (param_1[0x15] != 'r') {
      return (undefined *)0xff;
    }
    if (param_1[0x16] != 'i') {
      return (undefined *)0xff;
    }
    if (param_1[0x17] != 't') {
      return (undefined *)0xff;
    }
    puVar2 = (undefined *)0x42;
    cVar1 = param_1[0x18];
    goto joined_r0x006c53e3;
  default:
    goto switchD_006c49ec_caseD_1a;
  case 0x1b:
    if (*param_1 != 'p') {
      if (*param_1 != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[1] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[2] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[3] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[4] != 's') {
        return (undefined *)0xff;
      }
      if (param_1[5] != 's') {
        return (undefined *)0xff;
      }
      if (param_1[6] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[7] != 'c') {
        return (undefined *)0xff;
      }
      if (param_1[8] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[9] != 'n') {
        return (undefined *)0xff;
      }
      if (param_1[10] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[0xb] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[0xc] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[0xd] != 'l') {
        return (undefined *)0xff;
      }
      if (param_1[0xe] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[0xf] != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[0x10] != 'l') {
        return (undefined *)0xff;
      }
      if (param_1[0x11] != 'l') {
        return (undefined *)0xff;
      }
      if (param_1[0x12] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[0x13] != 'w') {
        return (undefined *)0xff;
      }
      if (param_1[0x14] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[0x15] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[0x16] != 'r') {
        return (undefined *)0xff;
      }
      if (param_1[0x17] != 'i') {
        return (undefined *)0xff;
      }
      if (param_1[0x18] != 'g') {
        return (undefined *)0xff;
      }
      if (param_1[0x19] != 'i') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x8;
      cVar1 = param_1[0x1a];
      goto joined_r0x006c560f;
    }
    if (param_1[1] != 'u') {
      return (undefined *)0xff;
    }
    if (param_1[2] != 'b') {
      return (undefined *)0xff;
    }
    if (param_1[3] != 'l') {
      return (undefined *)0xff;
    }
    if (param_1[4] != 'i') {
      return (undefined *)0xff;
    }
    if (param_1[5] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[6] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[7] != 'k') {
      return (undefined *)0xff;
    }
    if (param_1[8] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[9] != 'y') {
      return (undefined *)0xff;
    }
    if (param_1[10] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[0xb] != 'p') {
      return (undefined *)0xff;
    }
    if (param_1[0xc] != 'i') {
      return (undefined *)0xff;
    }
    if (param_1[0xd] != 'n') {
      return (undefined *)0xff;
    }
    if (param_1[0xe] != 's') {
      return (undefined *)0xff;
    }
    if (param_1[0xf] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[0x10] != 'r') {
      return (undefined *)0xff;
    }
    if (param_1[0x11] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[0x12] != 'p') {
      return (undefined *)0xff;
    }
    if (param_1[0x13] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[0x14] != 'r') {
      return (undefined *)0xff;
    }
    if (param_1[0x15] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[0x16] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[0x17] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[0x18] != 'n') {
      return (undefined *)0xff;
    }
    if (param_1[0x19] != 'l') {
      return (undefined *)0xff;
    }
    puVar2 = (undefined *)0x35;
    cVar1 = param_1[0x1a];
    goto joined_r0x006c53e3;
  case 0x1c:
    if (*param_1 != 'a') {
      return (undefined *)0xff;
    }
    if (param_1[1] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[2] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[3] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[4] != 's') {
      return (undefined *)0xff;
    }
    if (param_1[5] != 's') {
      return (undefined *)0xff;
    }
    if (param_1[6] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[7] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[8] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[9] != 'n') {
      return (undefined *)0xff;
    }
    if (param_1[10] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[0xb] != 'r') {
      return (undefined *)0xff;
    }
    if (param_1[0xc] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[0xd] != 'l') {
      return (undefined *)0xff;
    }
    if (param_1[0xe] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[0xf] != 'a') {
      return (undefined *)0xff;
    }
    if (param_1[0x10] != 'l') {
      return (undefined *)0xff;
    }
    if (param_1[0x11] != 'l') {
      return (undefined *)0xff;
    }
    if (param_1[0x12] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[0x13] != 'w') {
      return (undefined *)0xff;
    }
    if (param_1[0x14] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[0x15] == 'm') {
      if (param_1[0x16] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[0x17] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[0x18] != 'h') {
        return (undefined *)0xff;
      }
      if (param_1[0x19] != 'o') {
        return (undefined *)0xff;
      }
      if (param_1[0x1a] != 'd') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x7;
    }
    else {
      if (param_1[0x15] != 'h') {
        return (undefined *)0xff;
      }
      if (param_1[0x16] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[0x17] != 'a') {
        return (undefined *)0xff;
      }
      if (param_1[0x18] != 'd') {
        return (undefined *)0xff;
      }
      if (param_1[0x19] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[0x1a] != 'r') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0x6;
    }
    cVar1 = param_1[0x1b];
    break;
  case 0x1d:
    if (*param_1 != 'a') {
      return (undefined *)0xff;
    }
    if (param_1[1] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[2] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[3] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[4] != 's') {
      return (undefined *)0xff;
    }
    if (param_1[5] != 's') {
      return (undefined *)0xff;
    }
    if (param_1[6] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[7] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[8] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[9] != 'n') {
      return (undefined *)0xff;
    }
    if (param_1[10] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[0xb] != 'r') {
      return (undefined *)0xff;
    }
    if (param_1[0xc] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[0xd] != 'l') {
      return (undefined *)0xff;
    }
    if (param_1[0xe] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[0xf] == 'r') {
      if (param_1[0x10] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[0x11] != 'q') {
        return (undefined *)0xff;
      }
      if (param_1[0x12] != 'u') {
        return (undefined *)0xff;
      }
      if (param_1[0x13] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[0x14] != 's') {
        return (undefined *)0xff;
      }
      if (param_1[0x15] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[0x16] != '-') {
        return (undefined *)0xff;
      }
      if (param_1[0x17] != 'm') {
        return (undefined *)0xff;
      }
      if (param_1[0x18] != 'e') {
        return (undefined *)0xff;
      }
      if (param_1[0x19] != 't') {
        return (undefined *)0xff;
      }
      if (param_1[0x1a] != 'h') {
        return (undefined *)0xff;
      }
      if (param_1[0x1b] != 'o') {
        return (undefined *)0xff;
      }
      puVar2 = (undefined *)0xc;
      cVar1 = param_1[0x1c];
      goto joined_r0x006c7412;
    }
    if (param_1[0xf] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[0x10] != 'x') {
      return (undefined *)0xff;
    }
    if (param_1[0x11] != 'p') {
      return (undefined *)0xff;
    }
    if (param_1[0x12] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[0x13] != 's') {
      return (undefined *)0xff;
    }
    if (param_1[0x14] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[0x15] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[0x16] != 'h') {
      return (undefined *)0xff;
    }
    if (param_1[0x17] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[0x18] != 'a') {
      return (undefined *)0xff;
    }
    if (param_1[0x19] != 'd') {
      return (undefined *)0xff;
    }
    if (param_1[0x1a] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[0x1b] != 'r') {
      return (undefined *)0xff;
    }
    puVar2 = (undefined *)0x9;
    cVar1 = param_1[0x1c];
    break;
  case 0x1e:
    if (*param_1 != 'a') {
      return (undefined *)0xff;
    }
    if (param_1[1] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[2] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[3] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[4] != 's') {
      return (undefined *)0xff;
    }
    if (param_1[5] != 's') {
      return (undefined *)0xff;
    }
    if (param_1[6] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[7] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[8] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[9] != 'n') {
      return (undefined *)0xff;
    }
    if (param_1[10] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[0xb] != 'r') {
      return (undefined *)0xff;
    }
    if (param_1[0xc] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[0xd] != 'l') {
      return (undefined *)0xff;
    }
    if (param_1[0xe] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[0xf] != 'r') {
      return (undefined *)0xff;
    }
    if (param_1[0x10] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[0x11] != 'q') {
      return (undefined *)0xff;
    }
    if (param_1[0x12] != 'u') {
      return (undefined *)0xff;
    }
    if (param_1[0x13] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[0x14] != 's') {
      return (undefined *)0xff;
    }
    if (param_1[0x15] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[0x16] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[0x17] != 'h') {
      return (undefined *)0xff;
    }
    if (param_1[0x18] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[0x19] != 'a') {
      return (undefined *)0xff;
    }
    if (param_1[0x1a] != 'd') {
      return (undefined *)0xff;
    }
    if (param_1[0x1b] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[0x1c] != 'r') {
      return (undefined *)0xff;
    }
    puVar2 = &DAT_001a890b;
    cVar1 = param_1[0x1d];
    break;
  case 0x20:
    if (*param_1 != 'a') {
      return (undefined *)0xff;
    }
    if (param_1[1] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[2] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[3] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[4] != 's') {
      return (undefined *)0xff;
    }
    if (param_1[5] != 's') {
      return (undefined *)0xff;
    }
    if (param_1[6] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[7] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[8] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[9] != 'n') {
      return (undefined *)0xff;
    }
    if (param_1[10] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[0xb] != 'r') {
      return (undefined *)0xff;
    }
    if (param_1[0xc] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[0xd] != 'l') {
      return (undefined *)0xff;
    }
    if (param_1[0xe] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[0xf] != 'a') {
      return (undefined *)0xff;
    }
    if (param_1[0x10] != 'l') {
      return (undefined *)0xff;
    }
    if (param_1[0x11] != 'l') {
      return (undefined *)0xff;
    }
    if (param_1[0x12] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[0x13] != 'w') {
      return (undefined *)0xff;
    }
    if (param_1[0x14] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[0x15] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[0x16] != 'r') {
      return (undefined *)0xff;
    }
    if (param_1[0x17] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[0x18] != 'd') {
      return (undefined *)0xff;
    }
    if (param_1[0x19] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[0x1a] != 'n') {
      return (undefined *)0xff;
    }
    if (param_1[0x1b] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[0x1c] != 'i') {
      return (undefined *)0xff;
    }
    if (param_1[0x1d] != 'a') {
      return (undefined *)0xff;
    }
    if (param_1[0x1e] != 'l') {
      return (undefined *)0xff;
    }
    puVar2 = &DAT_001a8905;
    cVar1 = param_1[0x1f];
    break;
  case 0x23:
    if (*param_1 != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[1] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[2] != 'n') {
      return (undefined *)0xff;
    }
    if (param_1[3] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[4] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[5] != 'n') {
      return (undefined *)0xff;
    }
    if (param_1[6] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[7] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[8] != 's') {
      return (undefined *)0xff;
    }
    if (param_1[9] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[10] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[0xb] != 'u') {
      return (undefined *)0xff;
    }
    if (param_1[0xc] != 'r') {
      return (undefined *)0xff;
    }
    if (param_1[0xd] != 'i') {
      return (undefined *)0xff;
    }
    if (param_1[0xe] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[0xf] != 'y') {
      return (undefined *)0xff;
    }
    if (param_1[0x10] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[0x11] != 'p') {
      return (undefined *)0xff;
    }
    if (param_1[0x12] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[0x13] != 'l') {
      return (undefined *)0xff;
    }
    if (param_1[0x14] != 'i') {
      return (undefined *)0xff;
    }
    if (param_1[0x15] != 'c') {
      return (undefined *)0xff;
    }
    if (param_1[0x16] != 'y') {
      return (undefined *)0xff;
    }
    if (param_1[0x17] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[0x18] != 'r') {
      return (undefined *)0xff;
    }
    if (param_1[0x19] != 'e') {
      return (undefined *)0xff;
    }
    if (param_1[0x1a] != 'p') {
      return (undefined *)0xff;
    }
    if (param_1[0x1b] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[0x1c] != 'r') {
      return (undefined *)0xff;
    }
    if (param_1[0x1d] != 't') {
      return (undefined *)0xff;
    }
    if (param_1[0x1e] != '-') {
      return (undefined *)0xff;
    }
    if (param_1[0x1f] != 'o') {
      return (undefined *)0xff;
    }
    if (param_1[0x20] != 'n') {
      return (undefined *)0xff;
    }
    if (param_1[0x21] != 'l') {
      return (undefined *)0xff;
    }
    puVar2 = &DAT_001a891c;
    cVar1 = param_1[0x22];
joined_r0x006c53e3:
    if (cVar1 == 'y') {
      return puVar2;
    }
    goto switchD_006c49ec_caseD_1a;
  }
joined_r0x006c4fcf:
  if (cVar1 == 's') {
    return puVar2;
  }
switchD_006c49ec_caseD_1a:
  return (undefined *)0xff;
}


