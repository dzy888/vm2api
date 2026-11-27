// 004d13c0 combine_diag_excerpts

/* craggemini_core[66f3c71560d70857]::pool::combine_diag_excerpts */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::pool::combine_diag_excerpts
          (undefined4 param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined1 *local_58;
  code *local_50;
  undefined4 *local_48;
  code *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  lVar1 = *param_3;
  lVar2 = *param_4;
  lVar3 = param_4[2];
  if (lVar1 == -1) {
    if (lVar2 == -1) {
LAB_004d14ea:
      *param_2 = 0xffffffffffffffff;
      bVar4 = 1;
      local_38 = param_1;
    }
    else {
LAB_004d14b1:
      if (lVar3 == 0) goto LAB_004d14ea;
      param_2[2] = param_4[2];
      local_38 = (undefined4)*param_4;
      uVar5 = *(undefined4 *)((longlong)param_4 + 4);
      lVar7 = param_4[1];
      uVar6 = *(undefined4 *)((longlong)param_4 + 0xc);
      *(undefined4 *)param_2 = local_38;
      *(undefined4 *)((longlong)param_2 + 4) = uVar5;
      *(int *)(param_2 + 1) = (int)lVar7;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
      bVar4 = 0;
    }
    if (lVar1 - 1U < 0xfffffffffffffffe) {
      local_38 = (*(code *)PTR___rust_dealloc_00798fc8)(lVar3,1);
    }
  }
  else {
    if (lVar2 == -1) {
      if (param_3[2] == 0) goto LAB_004d14ea;
    }
    else {
      if (param_3[2] == 0) goto LAB_004d14b1;
      if (lVar3 != 0) {
        local_88 = param_3[2];
        local_98 = *param_3;
        lStack_90 = param_3[1];
        local_68 = param_4[2];
        local_78 = (undefined4)*param_4;
        uStack_74 = *(undefined4 *)((longlong)param_4 + 4);
        uStack_70 = (undefined4)param_4[1];
        uStack_6c = *(undefined4 *)((longlong)param_4 + 0xc);
        local_50 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                   ::fmt;
        local_48 = &local_78;
        local_40 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                   ::fmt;
        local_58 = (undefined1 *)&local_98;
        (*(code *)PTR_format_inner_00799048)(local_48,&local_58);
        param_2[2] = local_28;
        *(undefined4 *)param_2 = local_38;
        *(undefined4 *)((longlong)param_2 + 4) = uStack_34;
        *(undefined4 *)(param_2 + 1) = uStack_30;
        *(undefined4 *)((longlong)param_2 + 0xc) = uStack_2c;
        if (CONCAT44(uStack_74,local_78) != 0) {
          local_38 = (*(code *)PTR___rust_dealloc_00798fc8)(local_38,1);
        }
        if (local_98 == 0) {
          return param_2;
        }
        goto LAB_004d1524;
      }
    }
    param_2[2] = param_3[2];
    local_38 = (undefined4)*param_3;
    uVar5 = *(undefined4 *)((longlong)param_3 + 4);
    lVar1 = param_3[1];
    uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
    *(undefined4 *)param_2 = local_38;
    *(undefined4 *)((longlong)param_2 + 4) = uVar5;
    *(int *)(param_2 + 1) = (int)lVar1;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
    bVar4 = 1;
  }
  if (!(bool)(lVar2 - 1U < 0xfffffffffffffffe & bVar4)) {
    return param_2;
  }
LAB_004d1524:
  (*(code *)PTR___rust_dealloc_00798fc8)(local_38,1);
  return param_2;
}


