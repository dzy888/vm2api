// 004b8010 lookup_valid_resume_cut

/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::lookup_valid_resume_cut */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::lookup_valid_resume_cut
          (undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4,longlong param_5
          ,longlong param_6)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar13;
  undefined8 in_XMM4_Qa;
  undefined4 uVar14;
  undefined4 in_XMM4_Dc;
  undefined4 in_XMM4_Dd;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong local_110;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined7 uStack_97;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong lStack_40;
  
  uVar14 = (undefined4)((ulonglong)in_XMM4_Qa >> 0x20);
  uVar13 = (undefined4)in_XMM4_Qa;
  if (param_3 != 0) {
    piVar1 = (int *)(param_2 + 0x150);
    LOCK();
    bVar11 = *(int *)(param_2 + 0x150) == 0;
    if (bVar11) {
      *(int *)(param_2 + 0x150) = 1;
    }
    UNLOCK();
    if (!bVar11) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    puVar5 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar6 = 0;
      cVar7 = *(char *)(param_2 + 0x154);
    }
    else {
      bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar6 = bVar6 ^ 1;
      cVar7 = *(char *)(param_2 + 0x154);
    }
    if (cVar7 == '\0') {
      uVar9 = <craggemini_core[66f3c71560d70857]::resume::SessionStore>::find
                        (param_2 + 0x158,param_3,param_4);
      lVar10 = -1;
      uVar2 = local_58;
      uVar3 = uStack_60;
      lVar4 = local_68;
      if ((uVar9 != 0) && (*(longlong *)(uVar9 + 0x158) != -1)) {
        (*(code *)PTR_clone_00798fd0)();
        (*(code *)PTR_clone_00798fd0)();
        (*(code *)PTR_clone_00798fd0)();
        uVar13 = *(undefined4 *)(uVar9 + 0x1a0);
        uVar14 = *(undefined4 *)(uVar9 + 0x1a4);
        in_XMM4_Dc = *(undefined4 *)(uVar9 + 0x1a8);
        in_XMM4_Dd = *(undefined4 *)(uVar9 + 0x1ac);
        param_3 = *(longlong *)(uVar9 + 0x1b0);
        uVar9 = (ulonglong)*(byte *)(uVar9 + 0x1b8);
        lVar10 = local_90;
        lStack_40 = local_110;
        uStack_44 = uStack_114;
        uStack_48 = uStack_118;
        uStack_4c = uStack_11c;
        uStack_50 = local_120;
        uVar2 = local_128;
        uVar3 = uStack_130;
        lVar4 = local_138;
        uStack_70 = uStack_80;
        local_78 = local_88;
      }
      if (((bVar6 == 0) && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
         (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
        *(undefined1 *)(param_2 + 0x154) = 1;
      }
      LOCK();
      iVar8 = *piVar1;
      *piVar1 = 0;
      UNLOCK();
      if (iVar8 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      if (lVar10 != -1) {
        local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
        uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
        local_68._0_4_ = (undefined4)lVar4;
        local_68._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
        uStack_60._0_4_ = (undefined4)uVar3;
        uStack_60._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
        local_58._0_4_ = (undefined4)uVar2;
        local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
        (*(code *)PTR__join_00799210)("cuts",*(undefined8 *)(param_2 + 0x28),4);
        uVar12 = (*(code *)PTR__join_00799210)(uVar3,local_110,uVar2);
        if (CONCAT44(uStack_11c,local_120) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
        }
        cVar7 = (*(code *)PTR_is_dir_00799b80)();
        uVar12 = extraout_XMM0_Da;
        if ((cVar7 != '\0') &&
           ((((param_5 == 0 || (param_6 == 0)) || (lStack_40 == 0)) ||
            ((lStack_40 == param_6 &&
             (iVar8 = (*(code *)PTR_bcmp_00799020)(), uVar12 = extraout_XMM0_Da_00, iVar8 == 0))))))
        {
          param_1[0xc] = CONCAT71(uStack_97,(char)uVar9);
          param_1[10] = CONCAT44(in_XMM4_Dd,in_XMM4_Dc);
          param_1[0xb] = param_3;
          param_1[8] = lStack_40;
          param_1[9] = CONCAT44(uVar14,uVar13);
          local_f8 = (undefined4)lVar10;
          uStack_f4 = (undefined4)((ulonglong)lVar10 >> 0x20);
          *(undefined4 *)(param_1 + 6) = uStack_50;
          *(undefined4 *)((longlong)param_1 + 0x34) = uStack_4c;
          *(undefined4 *)(param_1 + 7) = uStack_48;
          *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_44;
          *(undefined4 *)(param_1 + 4) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)param_1 + 0x24) = uStack_60._4_4_;
          *(undefined4 *)(param_1 + 5) = (undefined4)local_58;
          *(undefined4 *)((longlong)param_1 + 0x2c) = local_58._4_4_;
          *(undefined4 *)(param_1 + 2) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)param_1 + 0x14) = uStack_70._4_4_;
          *(undefined4 *)(param_1 + 3) = (undefined4)local_68;
          *(undefined4 *)((longlong)param_1 + 0x1c) = local_68._4_4_;
          *(undefined4 *)param_1 = local_f8;
          *(undefined4 *)((longlong)param_1 + 4) = uStack_f4;
          *(undefined4 *)(param_1 + 1) = (undefined4)local_78;
          *(undefined4 *)((longlong)param_1 + 0xc) = local_78._4_4_;
          if (local_138 == 0) {
            return param_1;
          }
          (*(code *)PTR___rust_dealloc_00798fc8)(local_f8,1);
          return param_1;
        }
        *param_1 = 0xffffffffffffffff;
        if (local_138 != 0) {
          uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
        }
        if (lVar10 != 0) {
          uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
        }
        if (lVar4 != 0) {
          uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
        }
        if (CONCAT44(uStack_4c,uStack_50) == 0) {
          return param_1;
        }
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,1);
        return param_1;
      }
    }
    else {
      if (((bVar6 == 0) && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
         (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
        *(undefined1 *)(param_2 + 0x154) = 1;
      }
      LOCK();
      iVar8 = *piVar1;
      *piVar1 = 0;
      UNLOCK();
      if (iVar8 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
    }
  }
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


