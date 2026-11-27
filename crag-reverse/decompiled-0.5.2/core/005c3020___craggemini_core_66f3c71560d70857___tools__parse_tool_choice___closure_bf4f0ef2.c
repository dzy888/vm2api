// 005c3020 <craggemini_core[66f3c71560d70857]::tools::parse_tool_choice::{closure#0}>

/* <core[c0acaeba6ab4c2e0]::option::Option<&str>>::or_else::<craggemini_core[66f3c71560d70857]::tools::parse_tool_choice::{closure#0}>
    */

longlong __rustcall
<core[c0acaeba6ab4c2e0]::option::Option<&str>>::or_else::
<craggemini_core[66f3c71560d70857]::tools::parse_tool_choice::_closure_0_>
          (longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  bool bVar12;
  longlong local_40;
  
  if (param_1 == 0) {
    if (param_3 != 0) {
      local_40 = param_4;
      while( true ) {
        uVar1 = *(ushort *)(param_3 + 0x272);
        lVar10 = param_3 + -0x20;
        uVar6 = (ulonglong)((uint)uVar1 * 8);
        lVar8 = uVar6 * 3;
        uVar11 = 0xffffffffffffffff;
        lVar3 = param_3 + 0x168;
        do {
          if (lVar8 == 0) {
            uVar11 = (ulonglong)uVar1;
            goto LAB_005c30e5;
          }
          uVar7 = *(ulonglong *)(lVar3 + 0x10);
          lVar9 = uVar7 - 8;
          if (7 < uVar7) {
            uVar7 = 8;
          }
          iVar2 = (*(code *)PTR_memcmp_00799528)(uVar6,uVar7);
          lVar9 = -lVar9;
          if (iVar2 != 0) {
            lVar9 = (longlong)iVar2;
          }
          bVar5 = (0 < lVar9) - (lVar9 < 0);
          uVar6 = (ulonglong)bVar5;
          lVar10 = lVar10 + 0x20;
          uVar11 = uVar11 + 1;
          lVar8 = lVar8 + -0x18;
          lVar3 = lVar3 + 0x18;
        } while (bVar5 == 1);
        if (bVar5 == 0) break;
LAB_005c30e5:
        bVar12 = local_40 == 0;
        local_40 = local_40 + -1;
        if (bVar12) {
          return 0;
        }
        param_3 = *(longlong *)(param_3 + 0x278 + uVar11 * 8);
      }
      pcVar4 = (char *)(*(code *)PTR_index_into_00799300)(0,lVar10);
      if ((pcVar4 != (char *)0x0) && (*pcVar4 == '\x03')) {
        return *(longlong *)(pcVar4 + 0x10);
      }
    }
    param_1 = 0;
  }
  return param_1;
}


