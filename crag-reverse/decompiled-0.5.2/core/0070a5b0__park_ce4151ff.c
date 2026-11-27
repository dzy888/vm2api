// 0070a5b0 park

/* <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Context>::park */

longlong * __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Context>::park
          (longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined4 uVar20;
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  longlong lStack_38;
  
  lVar1 = *param_2;
  *param_2 = -1;
  if (lVar1 == -1) {
    (*(code *)PTR_expect_failed_00799440)
              (param_4,&
                       PTR_anon_cbe4ed91a1eb3280be5cbdd57023f5c1_2_llvm_17798946807444736387_00795618
              );
    goto LAB_0070a9b3;
  }
  local_40 = param_2[9];
  lStack_38 = param_2[10];
  uStack_80 = (undefined4)param_2[1];
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_78 = (undefined4)param_2[2];
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_70 = (undefined4)param_2[3];
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_68 = (undefined4)param_2[4];
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x24);
  local_60 = (undefined4)param_2[5];
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x2c);
  uStack_58 = (undefined4)param_2[6];
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0x34);
  local_50 = (undefined4)param_2[7];
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x3c);
  uStack_48 = (undefined4)param_2[8];
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x44);
  local_88 = lVar1;
  if (*(longlong *)(param_3 + 0xf8) != 0) {
    if (param_1[1] != 0) {
      (*(code *)PTR_panic_already_borrowed_007997b0)();
      goto LAB_0070a9b3;
    }
    lVar1 = *(longlong *)(param_3 + 0x100);
    param_1[1] = -1;
    if (param_1[2] == 0) {
      lVar18 = 0;
    }
    else {
      uVar20 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
               <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>(param_1[2]);
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,8);
      lVar18 = param_1[1] + 1;
    }
    param_1[2] = (longlong)param_2;
    param_1[1] = lVar18;
    uVar20 = (**(code **)(lVar1 + 0x28))();
    if (param_1[1] != 0) {
      (*(code *)PTR_panic_already_borrowed_007997b0)();
      goto LAB_0070a9b3;
    }
    param_1[1] = -1;
    param_2 = (longlong *)param_1[2];
    param_1[2] = 0;
    if (param_2 == (longlong *)0x0) {
      (*(code *)PTR_expect_failed_00799440)
                (uVar20,&
                        PTR_anon_cbe4ed91a1eb3280be5cbdd57023f5c1_2_llvm_17798946807444736387_00795408
                );
      goto LAB_0070a9b3;
    }
    param_1[1] = 0;
  }
  if (param_2[0xe] == 0) {
    if (0x7ffffffffffffffe < (ulonglong)param_1[3]) {
      (*(code *)PTR_panic_already_mutably_borrowed_00799db0)();
      goto LAB_0070a9b3;
    }
    if ((param_1[6] != 0) || (*(char *)(*param_1 + 0x1d8) != '\0')) goto LAB_0070a6fa;
    lVar1 = param_2[0x10];
    param_2[0x10] = lVar1 + 1;
    lVar18 = param_2[0x11];
    param_2[0x11] = lVar18 + 1;
    *(longlong *)(param_3 + 0x10) = param_2[0xf];
    *(longlong *)(param_3 + 0x20) = lVar1 + 1;
    *(longlong *)(param_3 + 0x28) = lVar18 + 1;
    plVar19 = (longlong *)park_internal(param_1,param_2,param_3,&local_88,0xffffffff);
    lVar1 = plVar19[0x11];
    plVar19[0x11] = lVar1 + 1;
    *(longlong *)(param_3 + 0x10) = plVar19[0xf];
    *(longlong *)(param_3 + 0x20) = plVar19[0x10];
    *(longlong *)(param_3 + 0x28) = lVar1 + 1;
    lVar1 = *(longlong *)(param_3 + 0x108);
  }
  else {
LAB_0070a6fa:
    *(longlong *)(param_3 + 0x10) = param_2[0xf];
    *(longlong *)(param_3 + 0x20) = param_2[0x10];
    *(longlong *)(param_3 + 0x28) = param_2[0x11];
    plVar19 = (longlong *)park_internal(param_1,param_2,param_3,&local_88,0);
    lVar1 = *(longlong *)(param_3 + 0x108);
  }
  if (lVar1 == 0) {
LAB_0070a7e2:
    lVar17 = lStack_38;
    lVar16 = local_40;
    uVar15 = uStack_4c;
    uVar14 = local_50;
    uVar13 = uStack_54;
    uVar12 = uStack_58;
    uVar11 = uStack_5c;
    uVar10 = local_60;
    uVar9 = uStack_64;
    uVar8 = uStack_68;
    uVar7 = uStack_6c;
    uVar6 = uStack_70;
    uVar5 = uStack_74;
    uVar4 = uStack_78;
    uVar3 = uStack_7c;
    uVar20 = uStack_80;
    lVar18 = local_88;
    lVar1 = CONCAT44(uStack_44,uStack_48);
    if ((int)*plVar19 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::driver::Driver>
                (plVar19);
    }
    plVar19[10] = lVar17;
    plVar19[8] = lVar1;
    plVar19[9] = lVar16;
    plVar19[6] = CONCAT44(uVar13,uVar12);
    plVar19[7] = CONCAT44(uVar15,uVar14);
    plVar19[4] = CONCAT44(uVar9,uVar8);
    plVar19[5] = CONCAT44(uVar11,uVar10);
    plVar19[2] = CONCAT44(uVar5,uVar4);
    plVar19[3] = CONCAT44(uVar7,uVar6);
    *plVar19 = lVar18;
    plVar19[1] = CONCAT44(uVar3,uVar20);
    return plVar19;
  }
  if (param_1[1] == 0) {
    lVar1 = *(longlong *)(param_3 + 0x110);
    param_1[1] = -1;
    if (param_1[2] == 0) {
      lVar18 = 0;
    }
    else {
      uVar20 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
               <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>(param_1[2]);
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,8);
      lVar18 = param_1[1] + 1;
    }
    param_1[2] = (longlong)plVar19;
    param_1[1] = lVar18;
    uVar20 = (**(code **)(lVar1 + 0x28))();
    if (param_1[1] == 0) {
      param_1[1] = -1;
      plVar19 = (longlong *)param_1[2];
      param_1[2] = 0;
      if (plVar19 != (longlong *)0x0) {
        param_1[1] = 0;
        goto LAB_0070a7e2;
      }
      (*(code *)PTR_expect_failed_00799440)
                (uVar20,&
                        PTR_anon_cbe4ed91a1eb3280be5cbdd57023f5c1_2_llvm_17798946807444736387_00795408
                );
    }
    else {
      (*(code *)PTR_panic_already_borrowed_007997b0)();
    }
  }
  else {
    (*(code *)PTR_panic_already_borrowed_007997b0)();
  }
LAB_0070a9b3:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


