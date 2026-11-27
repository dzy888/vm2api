// 006a2100 build_bridge_tool_filter

/* craggemini_core[66f3c71560d70857]::bridge::build_bridge_tool_filter */

void __rustcall
craggemini_core[66f3c71560d70857]::bridge::build_bridge_tool_filter
          (undefined4 param_1,undefined8 *param_2,longlong param_3,byte param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar4 = PTR_bcmp_00799020;
  lVar2 = *(longlong *)(param_3 + 0x260);
  if (lVar2 == -0x7fffffffffffffff) {
    uVar9 = 0xffffffffffffffff;
    bVar10 = false;
  }
  else {
    if (lVar2 < 0) {
      lVar6 = *(longlong *)(param_3 + 0xb8);
      uVar9 = 0xffffffffffffffff;
    }
    else {
      lVar6 = *(longlong *)(param_3 + 0xb8);
      uVar9 = 0xffffffffffffffff;
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        lVar8 = lVar6 * 0xa8;
        lVar3 = *(longlong *)(param_3 + 0x270);
        lVar7 = *(longlong *)(param_3 + 0xb0) + 0x30;
        do {
          if (*(longlong *)(lVar7 + -0x20) == lVar3) {
            iVar5 = (*(code *)puVar4)(param_1,lVar3);
            param_1 = extraout_XMM0_Da;
            if (iVar5 != 0) goto LAB_006a21bb;
LAB_006a21e9:
            (*(code *)PTR_clone_00798fd0)();
            local_58 = local_40;
            uStack_50 = uStack_38;
            goto LAB_006a224a;
          }
LAB_006a21bb:
          if (*(longlong *)(lVar7 + -8) == lVar3) {
            iVar5 = (*(code *)puVar4)(param_1,lVar3);
            param_1 = extraout_XMM0_Da_00;
            if (iVar5 == 0) goto LAB_006a21e9;
          }
          if (*(longlong *)(lVar7 + 0x10) == lVar3) {
            iVar5 = (*(code *)puVar4)(param_1,lVar3);
            param_1 = extraout_XMM0_Da_01;
            if (iVar5 == 0) goto LAB_006a21e9;
          }
          lVar7 = lVar7 + 0xa8;
          lVar8 = lVar8 + -0xa8;
        } while (lVar8 != 0);
        local_48 = 0xffffffffffffffff;
LAB_006a224a:
        uVar9 = local_48;
      }
    }
    bVar10 = lVar6 != 0;
  }
  bVar11 = lVar2 != -0x7fffffffffffffff;
  uVar1 = *(undefined1 *)(param_3 + 0x3ac);
  lVar2 = *(longlong *)(param_3 + 0xc0);
  lVar6 = *(longlong *)(param_3 + 0x130);
  lVar3 = *(longlong *)(param_3 + 0x188);
  *(bool *)(param_2 + 3) = bVar10;
  *(undefined1 *)((longlong)param_2 + 0x19) = uVar1;
  *(bool *)((longlong)param_2 + 0x1a) = lVar2 != -1 && bVar11;
  *(bool *)((longlong)param_2 + 0x1b) = lVar6 != -1 && bVar11;
  *(bool *)((longlong)param_2 + 0x1c) = lVar3 != -1 && bVar11;
  *(byte *)((longlong)param_2 + 0x1d) = param_4 & bVar11;
  *param_2 = uVar9;
  param_2[1] = local_58;
  param_2[2] = uStack_50;
  return;
}


