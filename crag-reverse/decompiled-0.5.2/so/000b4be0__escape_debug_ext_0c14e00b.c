// 000b4be0 escape_debug_ext

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <char>::escape_debug_ext */

void __rustcall <char>::escape_debug_ext(uint *param_1,ulonglong param_2,uint3 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined2 uStack_2c;
  undefined2 local_2a;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined2 local_22;
  
  uVar5 = (uint)param_2;
  switch(param_2 & 0xffffffff) {
  case 0:
    *(undefined2 *)param_1 = 0x305c;
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
    goto switchD_000b4bf5_caseD_1;
  case 9:
    *(undefined2 *)param_1 = 0x745c;
    break;
  case 10:
    *(undefined2 *)param_1 = 0x6e5c;
    break;
  case 0xd:
    *(undefined2 *)param_1 = 0x725c;
    break;
  case 0x22:
    if (0xffff < param_3) {
      *(undefined2 *)param_1 = 0x225c;
      break;
    }
    goto LAB_000b4cd2;
  case 0x27:
    if ((param_3 & 0x100) == 0) goto LAB_000b4cd2;
    *(undefined2 *)param_1 = 0x275c;
    break;
  default:
    if (uVar5 == 0x5c) {
      *(undefined2 *)param_1 = 0x5c5c;
      break;
    }
switchD_000b4bf5_caseD_1:
    if (uVar5 - 0x20 < 0x5f) {
LAB_000b4cd2:
      *param_1 = uVar5;
      *(undefined1 *)(param_1 + 3) = 0x80;
      *(undefined1 *)((longlong)param_1 + 0xd) = 0x81;
      return;
    }
    auVar6._0_4_ = -(uint)(_DAT_00008ea0 < (int)(uVar5 + (int)s__000090a0 ^ _DAT_00009120));
    auVar6._4_4_ = -(uint)(_UNK_00008ea4 < (int)(uVar5 + _UNK_000090a4 ^ _UNK_00009124));
    auVar6._8_4_ = -(uint)(_UNK_00008ea8 < (int)(uVar5 + _UNK_000090a8 ^ _UNK_00009128));
    auVar6._12_4_ = -(uint)(_UNK_00008eac < (int)(uVar5 + _UNK_000090ac ^ _UNK_0000912c));
    iVar2 = movmskps(uVar5 - 0x20,auVar6);
    if ((iVar2 == 0xf) && (uVar5 != 0x20 && 0xfffd < uVar5 - 0x100000)) {
      if (uVar5 < 0x85) {
LAB_000b4c7a:
        cVar1 = is_assigned(param_2 & 0xffffffff);
        if (cVar1 != '\0') {
          *param_1 = uVar5;
          uVar3 = 0x81;
          cVar1 = -0x80;
          goto LAB_000b4dc3;
        }
      }
      else {
        cVar1 = core[c0acaeba6ab4c2e0]::unicode::unicode_data::white_space::lookup
                          (param_2 & 0xffffffff);
        if (cVar1 == '\0') {
          if ((0x2ff < uVar5 & (byte)param_3) == 0) {
            if (uVar5 < 0xad) goto LAB_000b4c7a;
          }
          else {
            cVar1 = (*(code *)PTR_lookup_slow_000c4698)();
            if (cVar1 != '\0') goto LAB_000b4d15;
          }
          cVar1 = (*(code *)PTR_lookup_slow_000c46a0)();
          if ((cVar1 == '\0') && (cVar1 = (*(code *)PTR_lookup_slow_000c46a8)(), cVar1 == '\0'))
          goto LAB_000b4c7a;
        }
      }
    }
LAB_000b4d15:
    uVar4 = 0x1f;
    if ((uVar5 | 1) != 0) {
      for (; (uVar5 | 1) >> uVar4 == 0; uVar4 = uVar4 - 1) {
      }
    }
    uVar4 = (uVar4 ^ 0x1c) >> 2;
    cVar1 = (char)uVar4 + -2;
    uStack_28 = 0;
    local_2a = 0;
    uStack_27 = (&DAT_00009100)[param_2 >> 0x14 & 0xfff];
    uStack_26 = (&DAT_00009100)[(uint)(param_2 >> 0x10) & 0xf];
    uStack_25 = (&DAT_00009100)[(uint)(param_2 >> 0xc) & 0xf];
    uStack_24 = (&DAT_00009100)[(uint)(param_2 >> 8) & 0xf];
    uStack_23 = (&DAT_00009100)[(uint)(param_2 >> 4) & 0xf];
    local_22 = CONCAT11(0x7d,(&DAT_00009100)[uVar5 & 0xf]);
    *(undefined2 *)((longlong)&uStack_2c + (ulonglong)uVar4) = 0x755c;
    *(undefined1 *)((longlong)&local_2a + (ulonglong)uVar4) = 0x7b;
    *(undefined2 *)(param_1 + 2) = local_22;
    *(ulonglong *)param_1 =
         CONCAT17(uStack_23,
                  CONCAT16(uStack_24,
                           CONCAT15(uStack_25,
                                    CONCAT14(uStack_26,
                                             CONCAT13(uStack_27,CONCAT12(uStack_28,local_2a))))));
    uVar3 = 10;
LAB_000b4dc3:
    *(char *)(param_1 + 3) = cVar1;
    *(undefined1 *)((longlong)param_1 + 0xd) = uVar3;
    return;
  }
  *(undefined8 *)((longlong)param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd) = 2;
  return;
}


