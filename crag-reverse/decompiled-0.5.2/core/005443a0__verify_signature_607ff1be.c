// 005443a0 verify_signature

/* craggemini_core[66f3c71560d70857]::license::verify_signature */

ulonglong __rustcall
craggemini_core[66f3c71560d70857]::license::verify_signature
          (int *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,longlong param_5)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined7 uVar9;
  longlong lVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar11;
  int extraout_XMM0_Da_00;
  int iVar12;
  char local_1a0 [8];
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  int iStack_f0;
  int iStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  iVar1 = *param_1;
  lVar4 = *(longlong *)(param_1 + 2);
  puVar2 = *(undefined8 **)(param_1 + 4);
  puVar6 = param_3;
  (*(code *)PTR_decompress_00799d10)();
  if (local_1a0[0] == '\0') {
LAB_005444c2:
    local_f8 = 0;
    lVar4 = (*(code *)PTR_from_00799d18)();
    uVar8 = CONCAT71((int7)((ulonglong)param_3 >> 8),3);
    if (lVar4 == 0) goto LAB_0054460e;
    uVar11 = extraout_XMM0_Da;
    if ((code *)*puVar6 != (code *)0x0) {
      uVar11 = (*(code *)*puVar6)();
    }
    if (puVar6[1] == 0) goto LAB_0054460e;
    uVar7 = puVar6[2];
  }
  else {
    local_d0 = local_190;
    uStack_c8 = uStack_188;
    local_c0 = local_180;
    local_b8 = local_178;
    uStack_b0 = uStack_170;
    local_a8 = local_168;
    uStack_a0 = uStack_160;
    local_98 = local_158;
    uStack_90 = uStack_150;
    local_88 = local_148;
    uStack_80 = uStack_140;
    local_78 = local_138;
    uStack_70 = uStack_130;
    local_68 = local_128;
    uStack_60 = uStack_120;
    local_58 = local_118;
    uStack_50 = uStack_110;
    local_48 = local_108;
    uStack_40 = uStack_100;
    local_e8 = *(undefined8 *)(param_1 + 4);
    uStack_e0 = *(undefined8 *)(param_1 + 6);
    iVar12 = *param_1;
    local_f8 = *(undefined8 *)param_1;
    iStack_f0 = param_1[2];
    iStack_ec = param_1[3];
    local_d8 = local_198;
    lVar10 = param_5 + (longlong)param_3;
    if (lVar10 < 0) {
LAB_005444b6:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_005444c2;
    }
    if (lVar10 == 0) {
      lVar5 = 1;
      lVar3 = 0;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar5 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar5 == 0) goto LAB_005444b6;
      lVar3 = lVar10;
      iVar12 = extraout_XMM0_Da_00;
      if (param_3 != (undefined8 *)0x0) {
        iVar12 = (*(code *)PTR_memcpy_00799008)(lVar5,param_3);
      }
    }
    if (param_5 != 0) {
      param_3 = (undefined8 *)((longlong)param_3 + lVar5);
      (*(code *)PTR_memcpy_00799008)(iVar12,param_5);
    }
    (*(code *)PTR_from_bytes_00799d20)();
    uVar11 = (*(code *)PTR_verify_strict_00799d28)(lVar10,lVar5,local_1a0);
    uVar9 = (undefined7)((ulonglong)param_3 >> 8);
    uVar8 = CONCAT71(uVar9,0xff);
    if ((iVar1 == 1) && (uVar8 = CONCAT71(uVar9,3), lVar4 != 0)) {
      if ((code *)*puVar2 != (code *)0x0) {
        uVar11 = (*(code *)*puVar2)();
      }
      if (puVar2[1] != 0) {
        uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,puVar2[2]);
      }
    }
    if (lVar3 == 0) goto LAB_0054460e;
    uVar7 = 1;
  }
  (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,uVar7);
LAB_0054460e:
  return uVar8 & 0xffffffff;
}


