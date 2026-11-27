// 00536c80 bind_conversation_at

/* <craggemini_core[66f3c71560d70857]::resume::StickyIndex>::bind_conversation_at */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::StickyIndex>::bind_conversation_at
          (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,ulonglong param_5
          ,ulonglong param_6)

{
  ulonglong *puVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  code *pcVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  longlong lVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar17;
  ulonglong local_a0;
  longlong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong local_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  undefined8 *local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  if (param_3 == 0) {
    return;
  }
  if (param_5 == 0) {
    return;
  }
  uVar11 = param_6;
  if (-1 < param_3) goto LAB_00536cbc;
  lVar14 = 0;
  do {
    (*(code *)PTR_handle_error_00798ff0)();
    param_1 = lVar14;
    uVar11 = param_6;
LAB_00536cbc:
    param_6 = uVar11;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar14 = 1;
    local_40 = (*(code *)PTR___rust_alloc_00799000)();
  } while (local_40 == 0);
  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,param_3);
  local_48 = param_3;
  local_38 = param_3;
  if ((longlong)param_5 < 0) {
LAB_00536d15:
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar14 = (*(code *)PTR___rust_alloc_00799000)();
  if (lVar14 == 0) goto LAB_00536d15;
  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_00,param_5);
  puVar16 = (undefined8 *)(param_1 + 0x18);
  local_a0 = param_5;
  local_98 = lVar14;
  uStack_90 = param_5;
  local_88 = uVar11;
  uVar17 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,std[6c98fd8553dbae28]::hash::random::RandomState>>
           ::insert(&local_80,puVar16,&local_48);
  if ((local_80 != 0xffffffffffffffff) && (local_80 != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  uVar10 = *(ulonglong *)(param_1 + 0x30);
  if (uVar10 <= *(ulonglong *)(param_1 + 0x78)) {
    return;
  }
  uVar3 = *(ulonglong *)(param_1 + 0x80);
  local_50 = *(longlong *)(param_1 + 0x60);
  local_a0 = uVar3;
  local_80 = uVar11;
  <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,std[6c98fd8553dbae28]::hash::random::RandomState>>
  ::retain::
  <<craggemini_core[66f3c71560d70857]::resume::StickyIndex>::prune_expired_at::_closure_0_>
            (puVar16,&local_80,&local_a0);
  lVar14 = *(longlong *)(param_1 + 0x60);
  if (lVar14 == 0) {
    lVar14 = 0;
    uVar11 = *(ulonglong *)(param_1 + 0x30);
    if (uVar11 == uVar10) goto LAB_00536ec8;
  }
  else {
    pauVar13 = *(undefined1 (**) [16])(param_1 + 0x48);
    auVar2 = *pauVar13;
    uVar15 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
    pauVar12 = pauVar13 + 1;
    local_60 = uVar10;
    local_58 = puVar16;
    do {
      if ((short)uVar15 == 0) {
        do {
          auVar2 = *pauVar12;
          pauVar13 = pauVar13 + -0x58;
          pauVar12 = pauVar12 + 1;
          uVar15 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar15 == 0);
      }
      uVar6 = 0;
      for (uVar7 = uVar15; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      puVar1 = (ulonglong *)((longlong)pauVar13 + (ulonglong)uVar6 * -0x58 + -8);
      uVar10 = uVar11 - *puVar1;
      if (uVar11 < *puVar1) {
        uVar10 = 0;
      }
      if (uVar3 < uVar10) {
        <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::ResponseBinding)>>
        ::erase((undefined8 *)(param_1 + 0x48),(ulonglong)uVar6 * -0x58 + (longlong)pauVar13);
      }
      uVar15 = uVar15 - 1 & uVar15;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    lVar14 = *(longlong *)(param_1 + 0x60);
    uVar11 = *(ulonglong *)(param_1 + 0x30);
    puVar16 = local_58;
    if (uVar11 == local_60) {
LAB_00536ec8:
      if (lVar14 == local_50) goto LAB_00536ed6;
    }
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
LAB_00536ed6:
  puVar9 = PTR_clone_00798fd0;
  puVar8 = PTR___rust_dealloc_00798fc8;
  if (uVar11 <= *(ulonglong *)(param_1 + 0x78)) {
    return;
  }
LAB_00536f13:
  pauVar12 = (undefined1 (*) [16])*puVar16;
  auVar2 = *pauVar12;
  uVar5 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3
          | (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6
          | (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9
          | (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar2[0xf] >> 7) << 0xf;
  pauVar13 = pauVar12;
  while( true ) {
    uVar15 = uVar5 ^ 0xffff;
    pauVar13 = pauVar13 + 1;
    if (uVar15 != 0) break;
    auVar2 = *pauVar13;
    pauVar12 = pauVar12 + -0x38;
    uVar5 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar2[0xf] >> 7) << 0xf;
  }
  uVar6 = 0;
  for (uVar7 = uVar15; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
    uVar6 = uVar6 + 1;
  }
  uVar15 = uVar15 - 1 & uVar15;
  uVar10 = *(ulonglong *)((longlong)pauVar12 + (ulonglong)uVar6 * -0x38 + -8);
LAB_00536f9e:
  uVar11 = uVar11 - 1;
  if ((short)uVar15 == 0) {
    if (uVar11 == 0) goto LAB_00536fd0;
    do {
      auVar2 = *pauVar13;
      pauVar12 = pauVar12 + -0x38;
      pauVar13 = pauVar13 + 1;
      uVar15 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                       (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
    } while (uVar15 == 0);
  }
  uVar6 = 0;
  for (uVar7 = uVar15; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
    uVar6 = uVar6 + 1;
  }
  uVar15 = uVar15 - 1 & uVar15;
  uVar3 = *(ulonglong *)((longlong)pauVar12 + (ulonglong)uVar6 * -0x38 + -8);
  if (uVar3 <= uVar10) {
    uVar10 = uVar3;
  }
  goto LAB_00536f9e;
LAB_00536fd0:
  (*(code *)puVar9)();
  uVar11 = local_a0;
  local_78 = local_98;
  uStack_70 = uStack_90;
  local_80 = local_a0;
  uVar17 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::StickyConvBinding,std[6c98fd8553dbae28]::hash::random::RandomState>>
           ::remove::<alloc[12e961f32105355]::string::String>(&local_a0,puVar16,&local_80);
  if ((local_a0 != 0xffffffffffffffff) && (local_a0 != 0)) {
    uVar17 = (*(code *)puVar8)(uVar17,1);
  }
  if (uVar11 != 0) {
    (*(code *)puVar8)(uVar17,1);
  }
  uVar11 = *(ulonglong *)(param_1 + 0x30);
  if (uVar11 <= *(ulonglong *)(param_1 + 0x78)) {
    return;
  }
  goto LAB_00536f13;
}


