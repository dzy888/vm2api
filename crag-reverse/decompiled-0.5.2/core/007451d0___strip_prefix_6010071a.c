// 007451d0 _strip_prefix

/* WARNING: Removing unreachable block (ram,0x00745240) */
/* <std[6c98fd8553dbae28]::path::Path>::_strip_prefix */

undefined8 __rustcall
<std[6c98fd8553dbae28]::path::Path>::_strip_prefix(char *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  char *pcVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  char cVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  char local_190;
  undefined7 uStack_18f;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined4 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined7 uStack_f7;
  undefined4 local_ed;
  undefined1 local_e9;
  char *local_e8;
  longlong lStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined2 uStack_cb;
  undefined1 uStack_c9;
  undefined1 uStack_c8;
  undefined4 uStack_c7;
  undefined2 uStack_c3;
  undefined1 uStack_c1;
  undefined1 uStack_c0;
  undefined4 uStack_bf;
  undefined4 uStack_bb;
  undefined7 uStack_b7;
  char local_b0;
  undefined1 uStack_af;
  char cStack_ae;
  undefined4 uStack_ad;
  undefined1 uStack_a9;
  char *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined1 uStack_59;
  undefined7 uStack_58;
  char *local_50;
  longlong local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_31;
  
  if (param_2 == 0) {
    bVar11 = false;
  }
  else {
    bVar11 = *param_1 == '/';
  }
  while( true ) {
    uVar8 = uStack_c9;
    uVar7 = uStack_d0;
    uVar6 = uStack_d4;
    uVar5 = local_d8;
    lVar4 = lStack_e0;
    pcVar3 = local_e8;
    puVar2 = PTR_next_00799f18;
    uStack_f7 = (undefined7)
                (CONCAT26(uStack_c3,CONCAT42(uStack_c7,CONCAT11(uStack_c8,uStack_c9))) >> 8);
    uVar1 = CONCAT13(uStack_c9,CONCAT21(uStack_cb,uStack_cc));
    local_50 = param_1;
    local_48 = param_2;
    local_31 = 0xff;
    (*(code *)PTR_next_00799f18)();
    (*(code *)puVar2)();
    uStack_bb._3_1_ = (undefined1)local_160;
    uStack_b7 = (undefined7)((ulonglong)local_160 >> 8);
    local_e8 = (char *)CONCAT71(uStack_18f,local_190);
    uStack_c8 = (undefined1)local_170;
    uStack_c7 = (undefined4)((ulonglong)local_170 >> 8);
    uStack_c3 = (undefined2)((ulonglong)local_170 >> 0x28);
    uStack_c1 = (undefined1)((ulonglong)local_170 >> 0x38);
    uStack_c0 = (undefined1)uStack_168;
    uStack_bf = (undefined4)((ulonglong)uStack_168 >> 8);
    uStack_bb._0_3_ = (undefined3)((ulonglong)uStack_168 >> 0x28);
    local_d8 = (undefined4)local_180;
    uStack_d4 = (undefined4)((ulonglong)local_180 >> 0x20);
    uStack_d0 = (undefined4)uStack_178;
    uStack_cc = (undefined1)((ulonglong)uStack_178 >> 0x20);
    uStack_cb = (undefined2)((ulonglong)uStack_178 >> 0x28);
    uStack_c9 = (undefined1)((ulonglong)uStack_178 >> 0x38);
    lStack_e0 = uStack_188;
    local_b0 = (char)local_1c8;
    uStack_af = (undefined1)((uint)local_1c8 >> 8);
    cStack_ae = (char)((uint)local_1c8 >> 0x10);
    uStack_ad._1_3_ = (undefined3)uStack_1c4;
    uStack_ad = CONCAT31(uStack_ad._1_3_,(char)((uint)local_1c8 >> 0x18));
    uStack_a9 = (undefined1)((uint)uStack_1c4 >> 0x18);
    if (local_190 == -1) break;
    if (local_b0 == -1) goto LAB_007453f5;
    cVar9 = <std[6c98fd8553dbae28]::path::Component_as_core[c0acaeba6ab4c2e0]::cmp::PartialEq>::eq
                      (&local_e8,&local_b0);
    if (cVar9 == '\0') {
      return 0;
    }
    local_78 = pcVar3;
    uStack_70 = lVar4;
    local_68 = CONCAT44(uVar6,uVar5);
    uStack_60 = (undefined7)CONCAT44(uVar1,uVar7);
    uStack_59 = uVar8;
    uStack_58 = uStack_f7;
    local_3c = local_e9;
    local_40 = local_ed;
  }
  if (local_b0 == -1) {
LAB_007453f5:
    uStack_140 = (undefined4)uStack_60;
    uStack_13c = (undefined4)(CONCAT17(uStack_59,uStack_60) >> 0x20);
    local_38 = local_40;
    local_34 = local_3c;
    if (bVar11 != true) {
      uStack_b7 = uStack_58;
      local_148 = (undefined4)local_68;
      uStack_c7 = local_148;
      uStack_c3 = (undefined2)((ulonglong)local_68 >> 0x20);
      uStack_c1 = (undefined1)((ulonglong)local_68 >> 0x30);
      uStack_c0 = (undefined1)((ulonglong)local_68 >> 0x38);
      uStack_bf = uStack_140;
      uStack_bb = uStack_13c;
      uStack_d4 = (undefined4)((ulonglong)local_78 >> 0x18);
      uStack_d0._0_1_ = (undefined1)((ulonglong)local_78 >> 0x38);
      uStack_d0._1_3_ = (undefined3)uStack_70;
      uStack_cc = (undefined1)((ulonglong)uStack_70 >> 0x18);
      uStack_cb = (undefined2)((ulonglong)uStack_70 >> 0x20);
      uStack_c9 = (undefined1)((ulonglong)uStack_70 >> 0x30);
      uStack_c8 = (undefined1)((ulonglong)uStack_70 >> 0x38);
      uStack_ad = local_40;
      uStack_a9 = local_3c;
      local_e8 = local_50;
      lStack_e0 = local_48;
      local_d8 = CONCAT31((int3)local_78,local_31);
      local_b0 = '\x01';
      uStack_af = 2;
      cStack_ae = bVar11;
      uVar10 = (*(code *)PTR_as_path_0079ac00)();
      return uVar10;
    }
  }
  return 0;
}


