// 006e8390 next_expiration

/* <tokio[d7d91d38da47d894]::runtime::time::wheel::Wheel>::next_expiration */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::time::wheel::Wheel>::next_expiration
          (char *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if (param_2[2] == 0) {
    if (param_2[3] != 0) {
      (*(code *)PTR_panic_00799338)
                (param_4,&anon_1c7207ea9655bfcf55d918eab6d9918c_33_llvm_17559541839288726608);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar7 = *param_2;
    uVar1 = param_2[1];
    uVar9 = *(ulonglong *)(lVar7 + 0x408);
    if (uVar9 == 0) {
      uVar9 = *(ulonglong *)(lVar7 + 0x818);
      if (uVar9 == 0) {
        uVar9 = *(ulonglong *)(lVar7 + 0xc28);
        if (uVar9 == 0) {
          uVar9 = *(ulonglong *)(lVar7 + 0x1038);
          if (uVar9 == 0) {
            uVar9 = *(ulonglong *)(lVar7 + 0x1448);
            if (uVar9 == 0) {
              <tokio[d7d91d38da47d894]::runtime::time::wheel::level::Level>::next_expiration
                        (param_1,lVar7 + 0x1450);
              if (*param_1 != '\0') {
                return;
              }
              uVar5 = 0;
              goto LAB_006e848c;
            }
            uVar5 = *(undefined8 *)(lVar7 + 0x1440);
          }
          else {
            uVar5 = *(undefined8 *)(lVar7 + 0x1030);
          }
        }
        else {
          uVar5 = *(undefined8 *)(lVar7 + 0xc20);
        }
      }
      else {
        uVar5 = *(undefined8 *)(lVar7 + 0x810);
      }
    }
    else {
      uVar5 = *(undefined8 *)(lVar7 + 0x400);
    }
    bVar6 = (char)uVar5 * '\x06';
    lVar7 = (uVar1 >> (bVar6 & 0x3f)) + 1;
    bVar3 = (byte)lVar7 & 0x3f;
    iVar4 = 0;
    for (uVar9 = uVar9 >> bVar3 | uVar9 << 0x40 - bVar3; (uVar9 & 1) == 0;
        uVar9 = uVar9 >> 1 | 0x8000000000000000) {
      iVar4 = iVar4 + 1;
    }
    lVar8 = 1L << (bVar6 + 6 & 0x3f);
    uVar9 = (ulonglong)(iVar4 + (int)lVar7 & 0x3f);
    uVar10 = (uVar9 << (bVar6 & 0x3f)) + (-lVar8 & uVar1);
    lVar7 = 0;
    if (uVar10 <= uVar1) {
      lVar7 = lVar8;
    }
    *(undefined8 *)(param_1 + 8) = uVar5;
    *(ulonglong *)(param_1 + 0x10) = uVar9;
    uVar5 = 1;
    *(ulonglong *)(param_1 + 0x18) = lVar7 + uVar10;
  }
  else {
    lVar7 = param_2[1];
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    *(longlong *)(param_1 + 0x18) = lVar7;
    uVar5 = 1;
  }
LAB_006e848c:
  *(undefined8 *)param_1 = uVar5;
  return;
}


