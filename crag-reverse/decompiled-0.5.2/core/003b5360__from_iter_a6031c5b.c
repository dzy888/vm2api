// 003b5360 from_iter

/* WARNING: Type propagation algorithm not settling */
/* <alloc[12e961f32105355]::vec::Vec<&str> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<&str,
   core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::str::iter::Lines,
   <str>::trim>, craggemini_core[66f3c71560d70857]::oauth::clean_pty_tail::{closure#0}>>>::from_iter
    */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<&str>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<&str,core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::str::iter::Lines,<str>::trim>,craggemini_core[66f3c71560d70857]::oauth::clean_pty_tail::{closure#0}>>>
::from_iter(longlong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  char cVar2;
  ulonglong uVar3;
  code *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte bVar8;
  int iVar9;
  longlong lVar10;
  undefined1 (*pauVar11) [16];
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  byte bVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  byte local_d9;
  ulonglong local_c8;
  longlong local_c0;
  undefined1 (*pauStack_b8) [16];
  longlong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined1 (*local_98) [16];
  longlong local_90;
  longlong *local_88;
  ulonglong local_80;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  
  puVar1 = param_2 + 2;
  local_88 = param_1;
  do {
    if (*(char *)((longlong)param_2 + 0x41) != '\0') goto LAB_003b544e;
    uVar3 = *puVar1;
    <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
    ::next_match(&local_78,puVar1);
    if (local_78 == 1) {
      uVar12 = *param_2;
      *param_2 = local_68;
      lVar10 = local_68 - uVar12;
      lVar16 = uVar3 + uVar12;
    }
    else {
      if (*(char *)((longlong)param_2 + 0x41) != '\0') {
LAB_003b544e:
        *local_88 = 0;
        local_88[1] = 8;
        local_88[2] = 0;
        return local_88;
      }
      *(undefined1 *)((longlong)param_2 + 0x41) = 1;
      lVar10 = param_2[1] - *param_2;
      if ((byte)(lVar10 != 0 | (byte)param_2[8]) != 1) goto LAB_003b544e;
      lVar16 = *param_2 + *puVar1;
    }
    if (lVar10 == 0) {
LAB_003b5390:
      lVar14 = lVar10;
    }
    else {
      lVar14 = lVar10;
      if (((*(char *)(lVar16 + -1 + lVar10) == '\n') && (lVar14 = lVar10 + -1, lVar14 != 0)) &&
         (*(char *)(lVar16 + -2 + lVar10) == '\r')) {
        lVar10 = lVar10 + -2;
        goto LAB_003b5390;
      }
    }
    auVar19 = ::<str>::trim_matches::<<char>::is_whitespace>(lVar16,lVar14);
  } while (auVar19._0_8_ == 0 || auVar19._8_8_ == 0);
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pauVar11 = (undefined1 (*) [16])(*(code *)PTR___rust_alloc_00799000)();
  if (pauVar11 == (undefined1 (*) [16])0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
LAB_003b5a42:
    (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s__rustc_48a229ceaefd4985c50990b14_00787f48,4);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *pauVar11 = auVar19;
  local_c0 = 4;
  local_b0 = 1;
  local_78 = (int)*param_2;
  uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
  local_c8 = *param_2;
  uStack_70 = (undefined4)param_2[1];
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar6 = param_2[1];
  uVar3 = param_2[2];
  uStack_60 = param_2[3];
  uVar12 = param_2[4];
  uVar5 = param_2[5];
  uStack_40 = param_2[7];
  local_48 = param_2[6];
  uVar15 = uStack_40;
  local_80 = param_2[8];
  local_38 = local_80;
  uVar18 = local_38;
  local_38._1_1_ = (byte)(local_80 >> 8);
  pauStack_b8 = pauVar11;
  local_68 = uVar3;
  local_58 = uVar12;
  uStack_50 = uVar5;
  local_38 = uVar18;
  if (uVar5 <= uStack_60) {
    bVar8 = (byte)uStack_40;
    uVar18 = uStack_40 & 0xff;
    local_90 = 1;
    local_d9 = local_38._1_1_;
    local_a8 = uStack_60;
    local_98 = pauVar11;
    uStack_40 = uVar15;
    do {
      uVar15 = uVar12;
      local_b0 = local_90;
      bVar17 = local_d9;
      do {
        if ((bVar17 & 1) != 0) goto LAB_003b5a07;
        local_a0 = local_c8;
        if (uVar15 <= uVar5) {
          cVar2 = *(char *)((longlong)&uStack_50 + uVar18 + 7);
          if (bVar8 < 5) {
            do {
              uVar12 = uVar5 - uVar15;
              if (uVar12 < 0x10) {
                uVar13 = 0;
                if (uVar12 == 0) {
LAB_003b5775:
                  uVar15 = uVar5;
                  break;
                }
                while (*(char *)(uVar3 + uVar15 + uVar13) != cVar2) {
                  uVar13 = uVar13 + 1;
                  if (uVar12 == uVar13) goto LAB_003b5775;
                }
              }
              else {
                lVar10 = (*(code *)PTR_memchr_aligned_00799490)();
                uVar13 = uVar12;
                if (lVar10 != 1) goto LAB_003b5775;
              }
              uVar15 = uVar15 + uVar13 + 1;
              if ((uVar15 <= local_a8 && uVar18 <= uVar15) &&
                 (iVar9 = (*(code *)PTR_bcmp_00799020)(), iVar9 == 0)) {
                bVar17 = 0;
                uVar12 = uVar15;
                local_c8 = uVar15;
                goto LAB_003b57e2;
              }
            } while (uVar15 <= uVar5);
          }
          else {
            do {
              uVar12 = uVar5 - uVar15;
              if (uVar12 < 0x10) {
                uVar13 = 0;
                if (uVar12 != 0) {
                  do {
                    if (*(char *)(uVar3 + uVar15 + uVar13) == cVar2) {
                      lVar10 = 1;
                      uVar12 = uVar13;
                      goto LAB_003b56a9;
                    }
                    uVar13 = uVar13 + 1;
                  } while (uVar12 != uVar13);
                  uVar13 = uVar12;
                }
                lVar10 = 0;
                uVar12 = uVar13;
              }
              else {
                lVar10 = (*(code *)PTR_memchr_aligned_00799490)();
              }
LAB_003b56a9:
              if (lVar10 != 1) {
                local_38._0_2_ = CONCAT11(1,(undefined1)local_38);
                uVar12 = uVar5;
                goto joined_r0x003b57cd;
              }
              uVar15 = uVar15 + uVar12 + 1;
              if (uVar18 <= uVar15 && uVar15 <= local_a8) goto LAB_003b5a42;
            } while (uVar15 <= uVar5);
          }
        }
        local_38._0_2_ = CONCAT11(1,(undefined1)local_38);
        uVar12 = uVar15;
joined_r0x003b57cd:
        uVar15 = uVar6;
        local_c8 = local_a0;
        if ((local_80 & 1) == 0) {
          local_d9 = 1;
          bVar17 = 1;
          if (uVar6 == local_a0) goto LAB_003b5a07;
        }
        else {
          local_d9 = 1;
          bVar17 = 1;
        }
LAB_003b57e2:
        lVar10 = uVar15 - local_a0;
        if (lVar10 == 0) {
LAB_003b57f8:
          lVar16 = lVar10;
        }
        else {
          lVar16 = lVar10;
          if (((*(char *)((uVar3 - 1) + uVar15) == '\n') && (lVar16 = lVar10 + -1, lVar16 != 0)) &&
             (*(char *)((uVar3 - 2) + uVar15) == '\r')) {
            lVar10 = lVar10 + -2;
            goto LAB_003b57f8;
          }
        }
        auVar19 = ::<str>::trim_matches::<<char>::is_whitespace>(uVar3 + local_a0,lVar16);
        lVar10 = local_90;
        local_a0 = local_c8;
        uVar15 = uVar12;
      } while (auVar19._0_8_ == 0 || auVar19._8_8_ == 0);
      if (local_90 == local_c0) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(&local_c0,local_90,1,8,0x10);
        local_98 = pauStack_b8;
      }
      *(longlong *)local_98[lVar10] = auVar19._0_8_;
      *(longlong *)(local_98[lVar10] + 8) = auVar19._8_8_;
      local_90 = lVar10 + 1;
    } while( true );
  }
  if (((local_80 & 0x100) == 0) && (lVar10 = uVar6 - local_c8, (local_80 & 1) != 0 || lVar10 != 0))
  {
    local_a8 = uVar3 + local_c8;
    if (uVar6 == local_c8) {
      lVar16 = 0x18;
      do {
        lVar14 = local_b0;
        auVar19 = ::<str>::trim_matches::<<char>::is_whitespace>(local_a8,lVar10);
        if ((auVar19._8_8_ == 0) || (auVar19._0_8_ == 0)) break;
        local_38._0_2_ = CONCAT11(1,(undefined1)local_38);
        if (lVar14 == local_c0) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(&local_c0,lVar14,1,8,0x10);
          pauVar11 = pauStack_b8;
        }
        *(longlong *)(pauVar11[-1] + lVar16 + 8) = auVar19._0_8_;
        *(longlong *)(*pauVar11 + lVar16) = auVar19._8_8_;
        local_b0 = lVar14 + 1;
        lVar16 = lVar16 + 0x10;
      } while ((local_38 & 0x100) == 0);
    }
    else {
      lVar16 = 0x18;
      if (lVar10 == 1) {
        do {
          lVar10 = local_b0;
          auVar19 = ::<str>::trim_matches::<<char>::is_whitespace>
                              (local_a8,*(char *)((uVar3 - 1) + uVar6) != '\n');
          if ((auVar19._8_8_ == 0) || (auVar19._0_8_ == 0)) break;
          local_38._0_2_ = CONCAT11(1,(undefined1)local_38);
          if (lVar10 == local_c0) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(&local_c0,lVar10,1,8,0x10);
            pauVar11 = pauStack_b8;
          }
          *(longlong *)(pauVar11[-1] + lVar16 + 8) = auVar19._0_8_;
          *(longlong *)(*pauVar11 + lVar16) = auVar19._8_8_;
          local_b0 = lVar10 + 1;
          lVar16 = lVar16 + 0x10;
        } while ((local_38 & 0x100) == 0);
      }
      else {
        do {
          lVar7 = local_b0;
          lVar14 = lVar10;
          if ((*(char *)((uVar3 - 1) + uVar6) == '\n') &&
             (lVar14 = lVar10 + -2, *(char *)((uVar3 - 2) + uVar6) != '\r')) {
            lVar14 = lVar10 + -1;
          }
          auVar19 = ::<str>::trim_matches::<<char>::is_whitespace>(local_a8,lVar14);
          if ((auVar19._8_8_ == 0) || (auVar19._0_8_ == 0)) break;
          local_38._0_2_ = CONCAT11(1,(undefined1)local_38);
          if (lVar7 == local_c0) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(&local_c0,lVar7,1,8,0x10);
            pauVar11 = pauStack_b8;
          }
          *(longlong *)(pauVar11[-1] + lVar16 + 8) = auVar19._0_8_;
          *(longlong *)(*pauVar11 + lVar16) = auVar19._8_8_;
          local_b0 = lVar7 + 1;
          lVar16 = lVar16 + 0x10;
        } while ((local_38 & 0x100) == 0);
      }
    }
  }
LAB_003b5a07:
  local_88[2] = local_b0;
  *local_88 = local_c0;
  local_88[1] = (longlong)pauStack_b8;
  return local_88;
}


