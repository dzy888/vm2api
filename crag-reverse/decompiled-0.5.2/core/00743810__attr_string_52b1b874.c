// 00743810 attr_string

/* <gimli[a7f20a324fd82d99]::read::dwarf::Dwarf<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::attr_string
    */

void __rustcall
<gimli[a7f20a324fd82d99]::read::dwarf::Dwarf<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
::attr_string(undefined8 *param_1,longlong param_2,byte param_3,ulonglong param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  uint *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  switch(*param_5) {
  case 0x1a:
    uVar6 = param_5[1];
    lVar4 = *(longlong *)(param_2 + 0x80);
    uVar3 = *(ulonglong *)(param_2 + 0x88);
    if (uVar6 <= uVar3) {
      lVar4 = lVar4 + uVar6;
      if (uVar3 != uVar6) {
        lVar5 = 0;
        do {
          if (*(char *)(lVar4 + lVar5) == '\0') {
LAB_007439e7:
            param_1[1] = lVar4;
            param_1[2] = lVar5;
            *param_1 = 0;
            return;
          }
          lVar5 = lVar5 + 1;
        } while (uVar3 - uVar6 != lVar5);
      }
    }
    break;
  case 0x1b:
    lVar5 = *(longlong *)(param_2 + 0xf0);
    if (lVar5 == 0) goto switchD_0074382f_caseD_1c;
    uVar6 = param_5[1];
    lVar4 = *(longlong *)(lVar5 + 0x90);
    uVar3 = *(ulonglong *)(lVar5 + 0x98);
    if (uVar6 <= uVar3) {
      lVar4 = lVar4 + uVar6;
      if (uVar3 != uVar6) {
        lVar5 = 0;
        do {
          if (*(char *)(lVar4 + lVar5) == '\0') goto LAB_007439e7;
          lVar5 = lVar5 + 1;
        } while (uVar3 - uVar6 != lVar5);
      }
    }
    break;
  default:
switchD_0074382f_caseD_1c:
    *(undefined1 *)(param_1 + 1) = 0x48;
    *param_1 = 1;
    return;
  case 0x1d:
    puVar2 = *(uint **)(param_2 + 0x90);
    uVar6 = *(ulonglong *)(param_2 + 0x98) - param_4;
    if (param_4 <= *(ulonglong *)(param_2 + 0x98)) {
      puVar2 = (uint *)((longlong)puVar2 + param_4);
      uVar3 = (ulonglong)param_3 * param_5[1];
      uVar7 = uVar6 - uVar3;
      if (uVar3 <= uVar6) {
        puVar2 = (uint *)((longlong)puVar2 + uVar3);
        if (param_3 == 8) {
          if (7 < uVar7) {
            uVar6 = ((ulonglong)*puVar2 << 8 | (ulonglong)(uint3)puVar2[1] << 0x28) >> 8 |
                    (ulonglong)*(byte *)((longlong)puVar2 + 7) << 0x38;
LAB_007439a8:
            lVar4 = *(longlong *)(param_2 + 0x80);
            uVar3 = *(ulonglong *)(param_2 + 0x88);
            if (uVar6 <= uVar3) {
              lVar4 = lVar4 + uVar6;
              if (uVar3 != uVar6) {
                lVar5 = 0;
                do {
                  if (*(char *)(lVar4 + lVar5) == '\0') goto LAB_007439e7;
                  lVar5 = lVar5 + 1;
                } while (uVar3 - uVar6 != lVar5);
              }
            }
            *(undefined1 *)(param_1 + 1) = 0x13;
            param_1[2] = lVar4;
            *param_1 = 1;
            return;
          }
        }
        else if (3 < uVar7) {
          uVar6 = (ulonglong)*puVar2;
          goto LAB_007439a8;
        }
      }
    }
    *(undefined1 *)(param_1 + 1) = 0x13;
    *(undefined1 *)((longlong)param_1 + 0xf) = 0;
    *(undefined2 *)((longlong)param_1 + 0xd) = 0;
    *(undefined4 *)((longlong)param_1 + 9) = 0;
    param_1[2] = puVar2;
    *param_1 = 1;
    return;
  case 0x1e:
    uVar6 = param_5[1];
    lVar4 = *(longlong *)(param_2 + 0x50);
    uVar3 = *(ulonglong *)(param_2 + 0x58);
    if (uVar6 <= uVar3) {
      lVar4 = lVar4 + uVar6;
      if (uVar3 != uVar6) {
        lVar5 = 0;
        do {
          if (*(char *)(lVar4 + lVar5) == '\0') goto LAB_007439e7;
          lVar5 = lVar5 + 1;
        } while (uVar3 - uVar6 != lVar5);
      }
    }
    break;
  case 0x1f:
    uVar1 = param_5[2];
    param_1[1] = param_5[1];
    param_1[2] = uVar1;
    *param_1 = 0;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0x13;
  param_1[2] = lVar4;
  *param_1 = 1;
  return;
}


