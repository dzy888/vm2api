// 00062e30 from_iter

/* <alloc[12e961f32105355]::vec::Vec<u32> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<u32,
   core[c0acaeba6ab4c2e0]::iter::adapters::copied::Copied<std[6c98fd8553dbae28]::collections::hash::map::Keys<u32,
   agy_bridge[64a9e9deac6c45ce]::StreamSlot>>>>::from_iter */

byte * __rustcall
<alloc[12e961f32105355]::vec::Vec<u32>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<u32,core[c0acaeba6ab4c2e0]::iter::adapters::copied::Copied<std[6c98fd8553dbae28]::collections::hash::map::Keys<u32,agy_bridge[64a9e9deac6c45ce]::StreamSlot>>>>
::from_iter(byte *param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong local_60;
  undefined4 *local_58;
  ulonglong local_50;
  undefined4 local_44;
  longlong *local_40;
  byte *local_38;
  
  uVar3 = param_2[4];
  if (uVar3 != 0) {
    uVar6 = (uint)*(ushort *)(param_2 + 3);
    lVar10 = *param_2;
    if (*(ushort *)(param_2 + 3) == 0) {
      pauVar7 = (undefined1 (*) [16])param_2[1];
      do {
        auVar1 = *pauVar7;
        lVar10 = lVar10 + -0x1400;
        pauVar7 = pauVar7 + 1;
        uVar6 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar6 == 0);
      param_2[1] = (longlong)pauVar7;
      *param_2 = lVar10;
    }
    uVar9 = uVar6 - 1 & uVar6;
    *(short *)(param_2 + 3) = (short)uVar9;
    lVar11 = uVar3 - 1;
    param_2[4] = lVar11;
    uVar8 = 4;
    if (4 < uVar3) {
      uVar8 = uVar3;
    }
    local_38 = param_1;
    if (uVar8 * 4 < 0x7ffffffffffffffd && uVar3 >> 0x3e == 0) {
      uVar4 = 0;
      for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      local_44 = *(undefined4 *)(lVar10 + -0x140 + (ulonglong)uVar4 * -0x140);
      local_40 = param_2;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      puVar5 = (undefined4 *)(*(code *)PTR___rust_alloc_000c3a90)();
      param_1 = &Elf64_Ehdr_00000000.e_ident_class;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = local_44;
        local_50 = 1;
        local_60 = uVar8;
        local_58 = puVar5;
        if (lVar11 != 0) {
          pauVar7 = (undefined1 (*) [16])local_40[1];
          do {
            uVar3 = local_50;
            if ((short)uVar9 == 0) {
              do {
                auVar1 = *pauVar7;
                lVar10 = lVar10 + -0x1400;
                pauVar7 = pauVar7 + 1;
                uVar9 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar9 == 0);
            }
            uVar6 = 0;
            for (uVar4 = uVar9; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar6 = uVar6 + 1;
            }
            uVar2 = *(undefined4 *)(lVar10 + -0x140 + (ulonglong)uVar6 * -0x140);
            if (local_50 == local_60) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(&local_60,local_50,lVar11,4,4);
              puVar5 = local_58;
            }
            uVar9 = uVar9 - 1 & uVar9;
            lVar11 = lVar11 + -1;
            puVar5[uVar3] = uVar2;
            local_50 = uVar3 + 1;
          } while (lVar11 != 0);
        }
        *(ulonglong *)(local_38 + 0x10) = local_50;
        *(ulonglong *)local_38 = local_60;
        *(undefined4 **)(local_38 + 8) = local_58;
        return local_38;
      }
    }
    else {
      param_1 = (byte *)0x0;
    }
    (*(code *)PTR_handle_error_000c3a98)();
  }
  *(ulonglong *)param_1 = 0;
  *(ulonglong *)(param_1 + 8) = 4;
  *(ulonglong *)(param_1 + 0x10) = 0;
  return param_1;
}


