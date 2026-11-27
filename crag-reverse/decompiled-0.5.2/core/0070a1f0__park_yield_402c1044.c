// 0070a1f0 park_yield

/* <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Context>::park_yield */

longlong * __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Context>::park_yield
          (undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  longlong *plVar18;
  longlong local_68;
  longlong lStack_60;
  longlong lStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_68 = *param_2;
  *param_2 = -1;
  if (local_68 == -1) {
    (*(code *)PTR_expect_failed_00799440)
              (param_4,&
                       PTR_anon_cbe4ed91a1eb3280be5cbdd57023f5c1_2_llvm_17798946807444736387_00795600
              );
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lStack_60 = param_2[1];
  lStack_58 = param_2[2];
  uStack_50 = (undefined4)param_2[3];
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_48 = (undefined4)param_2[4];
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x24);
  local_40 = (undefined4)param_2[5];
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x2c);
  uStack_38 = (undefined4)param_2[6];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x34);
  local_30 = (undefined4)param_2[7];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x3c);
  uStack_28 = (undefined4)param_2[8];
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x44);
  local_20 = (undefined4)param_2[9];
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x4c);
  uStack_18 = (undefined4)param_2[10];
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x54);
  *(longlong *)(param_3 + 0x10) = param_2[0xf];
  *(longlong *)(param_3 + 0x20) = param_2[0x10];
  *(longlong *)(param_3 + 0x28) = param_2[0x11];
  plVar18 = (longlong *)park_internal(param_1,param_2,param_3,&local_68,0);
  uVar17 = uStack_2c;
  uVar16 = local_30;
  uVar15 = uStack_34;
  uVar14 = uStack_38;
  uVar13 = uStack_3c;
  uVar12 = local_40;
  uVar11 = uStack_44;
  uVar10 = uStack_48;
  uVar9 = uStack_4c;
  uVar8 = uStack_50;
  lVar7 = lStack_58;
  lVar6 = lStack_60;
  lVar5 = local_68;
  lVar4 = CONCAT44(uStack_14,uStack_18);
  lVar2 = CONCAT44(uStack_24,uStack_28);
  lVar3 = CONCAT44(uStack_1c,local_20);
  if ((int)*plVar18 != -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::driver::Driver>
              (plVar18);
  }
  plVar18[10] = lVar4;
  plVar18[8] = lVar2;
  plVar18[9] = lVar3;
  plVar18[6] = CONCAT44(uVar15,uVar14);
  plVar18[7] = CONCAT44(uVar17,uVar16);
  plVar18[4] = CONCAT44(uVar11,uVar10);
  plVar18[5] = CONCAT44(uVar13,uVar12);
  plVar18[2] = lVar7;
  plVar18[3] = CONCAT44(uVar9,uVar8);
  *plVar18 = lVar5;
  plVar18[1] = lVar6;
  return plVar18;
}


