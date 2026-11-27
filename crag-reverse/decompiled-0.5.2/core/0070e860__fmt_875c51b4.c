// 0070e860 fmt

/* WARNING: Type propagation algorithm not settling */
/* <bytes[e9829e187354639b]::fmt::BytesRef as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

ulonglong __rustcall
<bytes[e9829e187354639b]::fmt::BytesRef_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  uint **ppuVar7;
  undefined1 *puVar8;
  longlong lVar9;
  byte local_4d;
  uint local_4c;
  uint *local_48;
  undefined *local_40;
  longlong local_38;
  
  local_38 = *(longlong *)(param_2 + 8);
  pcVar1 = *(code **)(local_38 + 0x18);
  cVar4 = (*pcVar1)(param_4,2);
  uVar6 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
  if (cVar4 == '\0') {
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      lVar3 = *param_1;
      lVar9 = 0;
      do {
        local_4d = *(byte *)(lVar3 + lVar9);
        uVar5 = (uint)local_4d;
        if ((ulonglong)local_4d < 0x23) {
          ppuVar7 = (uint **)((longlong)&switchD_0070e8d6::switchdataD_001b7c84 +
                             (longlong)(int)(&switchD_0070e8d6::switchdataD_001b7c84)[local_4d]);
          switch(local_4d) {
          case 0:
            cVar4 = (*pcVar1)(ppuVar7,2);
            break;
          default:
            goto switchD_0070e8d6_caseD_1;
          case 9:
            cVar4 = (*pcVar1)(ppuVar7,2);
            break;
          case 10:
            cVar4 = (*pcVar1)(ppuVar7,2);
            break;
          case 0xd:
            cVar4 = (*pcVar1)(ppuVar7,2);
            break;
          case 0x22:
            goto switchD_0070e8d6_caseD_22;
          }
        }
        else {
          if (uVar5 == 0x5c) {
switchD_0070e8d6_caseD_22:
            local_48 = &local_4c;
            local_40 = PTR_fmt_0079a6b8;
            puVar8 = (undefined1 *)
                     &anon_e1419182c2f95519b50f33ebe2147d9d_29_llvm_4643690396931717954;
            local_4c = uVar5;
          }
          else {
switchD_0070e8d6_caseD_1:
            if ((byte)(local_4d - 0x20) < 0x5f) {
              local_48 = &local_4c;
              local_40 = PTR_fmt_0079a6b8;
              puVar8 = (undefined1 *)
                       &anon_e1419182c2f95519b50f33ebe2147d9d_32_llvm_4643690396931717954;
              local_4c = uVar5;
            }
            else {
              local_48 = (uint *)&local_4d;
              local_40 = PTR_fmt_0079a128;
              puVar8 = anon_e1419182c2f95519b50f33ebe2147d9d_31_llvm_4643690396931717954;
            }
          }
          ppuVar7 = &local_48;
          cVar4 = (*(code *)PTR_write_007994b0)(ppuVar7,puVar8);
        }
        if (cVar4 != '\0') {
          uVar6 = CONCAT71((int7)((ulonglong)ppuVar7 >> 8),1);
          goto LAB_0070ea0b;
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
    }
    uVar5 = (*pcVar1)();
    uVar6 = (ulonglong)uVar5;
  }
LAB_0070ea0b:
  return uVar6 & 0xffffffff;
}


