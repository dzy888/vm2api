// 0076d228 escape_debug_ext

/* <char>::escape_debug_ext */

uint * __rustcall <char>::escape_debug_ext(uint *param_1,uint param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined2 uStack_24;
  undefined2 local_22;
  undefined1 uStack_20;
  char cStack_1f;
  char cStack_1e;
  char cStack_1d;
  char cStack_1c;
  char cStack_1b;
  undefined2 local_1a;
  
  if ((int)param_2 < 0xd) {
    if (param_2 == 0) {
      *(undefined2 *)param_1 = 0x305c;
    }
    else if (param_2 == 9) {
      *(undefined2 *)param_1 = 0x745c;
    }
    else {
      if (param_2 != 10) goto LAB_0076d289;
      *(undefined2 *)param_1 = 0x6e5c;
    }
  }
  else if ((int)param_2 < 0x27) {
    if (param_2 == 0xd) {
      *(undefined2 *)param_1 = 0x725c;
    }
    else {
      if (param_2 != 0x22) {
LAB_0076d289:
        if (param_2 - 0x20 < 0x5f) {
LAB_0076d292:
          *param_1 = param_2;
          uVar2 = 0x81;
          cVar1 = -0x80;
        }
        else {
          if (((0xfffd < param_2 - 0xf0000 && 0x18ff < param_2 - 0xe000) &&
               (0x20 < param_2 - 0x7f && 0x1f < param_2)) &&
             (param_2 != 0x20 && 0xfffd < param_2 - 0x100000)) {
            if (param_2 < 0x85) {
LAB_0076d327:
              cVar1 = is_assigned(param_2);
              if (cVar1 != '\0') goto LAB_0076d292;
            }
            else {
              cVar1 = core[c0acaeba6ab4c2e0]::unicode::unicode_data::white_space::lookup(param_2);
              if (cVar1 == '\0') {
                if (param_2 < 0x300) {
                  if (param_2 < 0xad) goto LAB_0076d327;
                }
                else {
                  cVar1 = (*(code *)PTR_lookup_slow_0079b2a0)();
                  if (cVar1 != '\0') goto LAB_0076d349;
                }
                cVar1 = (*(code *)PTR_lookup_slow_0079b2a8)();
                if ((cVar1 == '\0') &&
                   (cVar1 = (*(code *)PTR_lookup_slow_0079b2b0)(), cVar1 == '\0'))
                goto LAB_0076d327;
              }
            }
          }
LAB_0076d349:
          uVar3 = 0x1f;
          if ((param_2 | 1) != 0) {
            for (; (param_2 | 1) >> uVar3 == 0; uVar3 = uVar3 - 1) {
            }
          }
          uVar3 = (uVar3 ^ 0x1c) >> 2;
          cVar1 = (char)uVar3 + -2;
          uStack_20 = 0;
          local_22 = 0;
          cStack_1f = "0123456789abcdef"[param_2 >> 0x14];
          cStack_1e = "0123456789abcdef"[param_2 >> 0x10 & 0xf];
          cStack_1d = "0123456789abcdef"[param_2 >> 0xc & 0xf];
          cStack_1c = "0123456789abcdef"[param_2 >> 8 & 0xf];
          cStack_1b = "0123456789abcdef"[param_2 >> 4 & 0xf];
          local_1a = CONCAT11(0x7d,"0123456789abcdef"[param_2 & 0xf]);
          *(undefined2 *)((longlong)&uStack_24 + (ulonglong)uVar3) = 0x755c;
          *(undefined1 *)((longlong)&local_22 + (ulonglong)uVar3) = 0x7b;
          *(undefined2 *)(param_1 + 2) = local_1a;
          *(ulonglong *)param_1 =
               CONCAT17(cStack_1b,
                        CONCAT16(cStack_1c,
                                 CONCAT15(cStack_1d,
                                          CONCAT14(cStack_1e,
                                                   CONCAT13(cStack_1f,CONCAT12(uStack_20,local_22)))
                                         )));
          uVar2 = 10;
        }
        goto LAB_0076d2ba;
      }
      *(undefined2 *)param_1 = 0x225c;
    }
  }
  else if (param_2 == 0x27) {
    *(undefined2 *)param_1 = 0x275c;
  }
  else {
    if (param_2 != 0x5c) goto LAB_0076d289;
    *(undefined2 *)param_1 = 0x5c5c;
  }
  *(undefined8 *)((longlong)param_1 + 2) = 0;
  uVar2 = 2;
  cVar1 = '\0';
LAB_0076d2ba:
  *(char *)(param_1 + 3) = cVar1;
  *(undefined1 *)((longlong)param_1 + 0xd) = uVar2;
  return param_1;
}


