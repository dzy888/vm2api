// 006fd7e0 new

/* <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::park::Parker>::new */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::park::Parker>::new(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint7 uStack_1f;
  
  uVar11 = *param_1;
  uVar12 = param_1[1];
  uVar3 = *(undefined4 *)(param_1 + 2);
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 3);
  uVar6 = *(uint *)((longlong)param_1 + 0x1c);
  uVar7 = *(undefined4 *)(param_1 + 4);
  uVar8 = *(undefined4 *)((longlong)param_1 + 0x24);
  uVar9 = *(undefined4 *)(param_1 + 5);
  uVar10 = *(undefined4 *)((longlong)param_1 + 0x2c);
  uVar15 = param_1[6];
  uVar16 = param_1[7];
  uVar13 = param_1[8];
  uVar14 = param_1[9];
  uVar1 = param_1[10];
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar17 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar17 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    puVar17[0xc] = uVar1;
    puVar17[0xd] = (ulonglong)uStack_1f << 8;
    puVar17[10] = uVar13;
    puVar17[0xb] = uVar14;
    puVar17[8] = uVar15;
    puVar17[9] = uVar16;
    local_78 = (undefined4)uVar11;
    uStack_74 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uStack_70 = (undefined4)uVar12;
    uStack_6c = (undefined4)((ulonglong)uVar12 >> 0x20);
    *(undefined4 *)(puVar17 + 6) = uVar7;
    *(undefined4 *)((longlong)puVar17 + 0x34) = uVar8;
    *(undefined4 *)(puVar17 + 7) = uVar9;
    *(undefined4 *)((longlong)puVar17 + 0x3c) = uVar10;
    *(undefined4 *)(puVar17 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar17 + 0x24) = uVar4;
    *(undefined4 *)(puVar17 + 5) = uVar5;
    *(uint *)((longlong)puVar17 + 0x2c) = uVar6;
    *(undefined4 *)(puVar17 + 2) = local_78;
    *(undefined4 *)((longlong)puVar17 + 0x14) = uStack_74;
    *(undefined4 *)(puVar17 + 3) = uStack_70;
    *(undefined4 *)((longlong)puVar17 + 0x1c) = uStack_6c;
    *puVar17 = 1;
    puVar17[1] = 1;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar18 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar18 != (undefined8 *)0x0) {
      puVar18[4] = 0;
      puVar18[5] = (ulonglong)uVar6 << 0x20;
      puVar18[2] = puVar17;
      puVar18[3] = 0;
      *puVar18 = 1;
      puVar18[1] = 1;
      return;
    }
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


