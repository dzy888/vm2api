// 00356700 new

/* <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>>::new */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>>::new
          (undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  
  uVar5 = *param_1;
  uVar6 = param_1[1];
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  uVar9 = param_1[4];
  uVar10 = param_1[5];
  uVar3 = param_1[6];
  uVar4 = param_1[7];
  uVar1 = param_1[8];
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar11 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  puVar11[10] = uVar1;
  puVar11[8] = uVar3;
  puVar11[9] = uVar4;
  puVar11[6] = uVar9;
  puVar11[7] = uVar10;
  puVar11[4] = uVar7;
  puVar11[5] = uVar8;
  puVar11[2] = uVar5;
  puVar11[3] = uVar6;
  *puVar11 = 1;
  puVar11[1] = 1;
  return;
}


