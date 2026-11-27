// 0075f950 find_mountpoint

/* WARNING: Removing unreachable block (ram,0x0075fc1e) */
/* WARNING: Type propagation algorithm not settling */
/* std[6c98fd8553dbae28]::sys::thread::unix::cgroups::find_mountpoint */

undefined8 * __rustcall
std[6c98fd8553dbae28]::sys::thread::unix::cgroups::find_mountpoint
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined **ppuVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined *puVar13;
  ulonglong uVar14;
  undefined **ppuVar15;
  int iVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  longlong local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined1 local_270;
  undefined2 local_268;
  undefined8 local_128;
  undefined4 local_120;
  undefined2 uStack_11c;
  undefined2 uStack_11a;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined **local_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  undefined1 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined2 local_60;
  ulonglong local_58;
  longlong local_50;
  longlong local_48;
  undefined4 local_3c;
  undefined8 *local_38;
  
  local_38 = param_1;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  local_48 = (*(code *)PTR___rust_alloc_00799000)();
  if (local_48 == 0) {
    ppuVar15 = &PTR_DAT_00796768;
  }
  else {
    local_128 = 0x1b600000000;
    uStack_11c = 0;
    local_120 = 1;
    local_2a8 = CONCAT44(s__proc_self_mountinfo_001c0b20._4_4_,s__proc_self_mountinfo_001c0b20._0_4_
                        );
    uStack_2a0 = (undefined1 *)
                 CONCAT44(s__proc_self_mountinfo_001c0b20._12_4_,
                          s__proc_self_mountinfo_001c0b20._8_4_);
    local_298 = CONCAT35(local_298._5_3_,0x6f666e69);
    uVar19 = (*(code *)PTR_from_bytes_with_nul_0079abd0)(s__proc_self_mountinfo_001c0b20._0_4_,0x15)
    ;
    if ((int)local_a0 == 1) {
      ppuVar15 = (undefined **)&DAT_00796450;
    }
    else {
      uVar19 = <std[6c98fd8553dbae28]::sys::fs::unix::File>::open_c(&local_e8,local_98,&local_128);
      if ((int)local_e8 != 1) {
        local_3c = local_e8._4_4_;
        local_d8 = 0;
        uStack_d0 = 0;
        local_e8 = local_48;
        local_e0 = (undefined **)0x2000;
        local_c8 = 0;
        local_c0 = local_3c;
        local_f8 = param_3;
        local_f0 = param_2;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar4 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar4 == 0) {
          (*(code *)PTR_handle_error_00798ff0)();
LAB_00760386:
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        local_b8 = 0x100;
        uVar10 = local_d8;
        uVar17 = uStack_d0;
        uVar19 = extraout_XMM0_Da;
        local_b0 = lVar4;
        local_50 = lVar4;
        do {
          local_a8 = 0;
          ppuVar15 = (undefined **)0x0;
          do {
            lVar4 = local_a8;
            bVar18 = uVar17 < uVar10;
            uVar14 = uVar17 - uVar10;
            uVar11 = uVar10;
            uVar10 = uVar17;
            if (bVar18 || uVar14 == 0) {
              uVar14 = (*(code *)PTR_read_00799e98)();
              uVar19 = extraout_XMM0_Da_00;
              if (uVar14 == 0xffffffffffffffff) {
                piVar5 = (int *)(*(code *)PTR___errno_location_007990a0)();
                iVar16 = *piVar5;
                if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
                  (*(code *)PTR_set_functions_inner_007990c0)();
                }
                local_d8 = 0;
                uStack_d0 = 0;
                lVar8 = (*(code *)PTR_get_os_functions_007992e0)();
                cVar3 = (**(code **)(lVar8 + 0x10))();
                uVar19 = extraout_XMM0_Da_02;
                while( true ) {
                  if (cVar3 == '\0') {
                    ppuVar15 = (undefined **)((longlong)iVar16 << 0x20 | 2);
                    bVar18 = true;
                    uVar17 = 0;
                    local_58 = 0;
                    goto LAB_0075fdb9;
                  }
                  uVar14 = (*(code *)PTR_read_00799e98)();
                  uVar19 = extraout_XMM0_Da_03;
                  if (uVar14 != 0xffffffffffffffff) break;
                  iVar16 = *piVar5;
                  if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
                    (*(code *)PTR_set_functions_inner_007990c0)();
                  }
                  local_d8 = 0;
                  uStack_d0 = 0;
                  lVar8 = (*(code *)PTR_get_os_functions_007992e0)();
                  cVar3 = (**(code **)(lVar8 + 0x10))();
                  uVar19 = extraout_XMM0_Da_04;
                }
              }
              local_d8 = 0;
              uVar11 = 0;
              uVar10 = uVar14;
              uStack_d0 = uVar14;
            }
            uVar17 = uVar10;
            local_58 = uVar11;
            if (uVar14 < 0x10) {
              uVar12 = 0;
              if (uVar14 != 0) {
                do {
                  if (*(char *)(local_48 + uVar11 + uVar12) == '\n') goto LAB_0075fd5e;
                  uVar12 = uVar12 + 1;
                } while (uVar14 != uVar12);
              }
            }
            else {
              uVar12 = uVar14;
              lVar8 = (*(code *)PTR_memchr_aligned_00799490)();
              uVar19 = extraout_XMM0_Da_01;
              if (lVar8 == 1) {
LAB_0075fd5e:
                if (uVar14 <= uVar12) {
                  local_c8 = 0;
                  (*(code *)PTR_slice_index_fail_007993c8)
                            (&
                             PTR_anon_ed01ef58651a73351ccd2244bf431f77_42_llvm_1588049147593173555_007961c8
                             ,uVar14);
                  goto LAB_00760386;
                }
                lVar8 = uVar12 + 1;
                if ((ulonglong)(local_b8 - lVar4) <= uVar12) {
                  uVar19 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                           do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                     (&local_b8,lVar4,lVar8,1,1);
                  local_50 = local_b0;
                  lVar4 = local_a8;
                }
                uVar19 = (*(code *)PTR_memcpy_00799008)(uVar19,lVar8);
                lVar4 = lVar4 + lVar8;
                uVar11 = local_58 + lVar8;
                if (uVar10 < local_58 + lVar8) {
                  uVar11 = uVar10;
                }
                ppuVar15 = (undefined **)((longlong)ppuVar15 + lVar8);
                local_58 = uVar11;
                goto LAB_0075fdb6;
              }
            }
            if ((ulonglong)(local_b8 - lVar4) < uVar14) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(&local_b8,lVar4,uVar14,1,1);
              local_50 = local_b0;
              lVar4 = local_a8;
LAB_0075fb70:
              uVar19 = (*(code *)PTR_memcpy_00799008)();
            }
            else if (uVar10 != local_58) goto LAB_0075fb70;
            lVar4 = lVar4 + uVar14;
            ppuVar15 = (undefined **)((longlong)ppuVar15 + uVar14);
            local_d8 = uVar10;
            local_a8 = lVar4;
          } while (uVar14 != 0);
          local_58 = uVar10;
LAB_0075fdb6:
          bVar18 = false;
          local_d8 = local_58;
LAB_0075fdb9:
          uVar19 = (*(code *)PTR_from_utf8_00799468)(uVar19,lVar4);
          if (local_2a8 != 0) {
            ppuVar9 = &PTR_DAT_007961e0;
            if (bVar18) {
              ppuVar9 = ppuVar15;
            }
LAB_00760234:
            local_c8 = 0;
            if ((1 < ((uint)ppuVar9 & 3) - 2) && (((ulonglong)ppuVar9 & 3) != 0)) {
              uStack_2a0 = (undefined1 *)((longlong)ppuVar9 + -1);
              local_2a8 = CONCAT71(local_2a8._1_7_,3);
              uVar19 = (*(code *)PTR_drop_00799040)();
            }
LAB_00760264:
            *local_38 = 0xfffffffffffffffe;
joined_r0x007602cf:
            if (local_b8 != 0) {
              uVar19 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
            }
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
            (*(code *)PTR_close_00799030)();
            return local_38;
          }
          local_a8 = lVar4;
          if (bVar18) {
            ppuVar9 = ppuVar15;
            goto LAB_00760234;
          }
          if (ppuVar15 == (undefined **)0x0) {
            local_c8 = 0;
            *local_38 = 0xfffffffffffffffe;
            goto joined_r0x007602cf;
          }
          auVar20 = ::<str>::trim_matches::<<char>::is_whitespace>(local_50,lVar4);
          local_98 = auVar20._8_8_;
          local_a0 = 0;
          local_80 = 0;
          local_70 = 0x2000000020;
          local_68 = 1;
          local_60 = 1;
          local_78 = local_98;
          local_90 = auVar20;
          uVar19 = <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
                   ::next_match(&local_2a8,local_90);
          if ((char)local_2a8 == '\0') goto LAB_00760264;
          local_a0 = local_298;
          if (local_60._1_1_ != '\0') goto LAB_00760264;
          uVar19 = <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
                   ::next_match(&local_2a8,local_90);
          if ((char)local_2a8 == '\0') goto LAB_00760264;
          local_a0 = local_298;
          if (local_60._1_1_ != '\0') goto LAB_00760264;
          uVar19 = <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
                   ::next_match(&local_2a8,local_90);
          if ((char)local_2a8 == '\0') goto LAB_00760264;
          local_a0 = local_298;
          if (local_60._1_1_ != '\0') goto LAB_00760264;
          local_110 = local_90._0_8_;
          uVar19 = <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
                   ::next_match(&local_2a8,local_90);
          lVar8 = local_a0;
          lVar4 = local_90._0_8_;
          if ((char)local_2a8 == '\0') goto LAB_00760264;
          local_a0 = local_298;
          if (local_60._1_1_ != '\0') goto LAB_00760264;
          local_108 = (longlong)uStack_2a0;
          uVar19 = <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
                   ::next_match(&local_2a8,local_90);
          lVar2 = local_a0;
          if ((int)local_2a8 == 1) {
            local_100 = (longlong)uStack_2a0 - local_a0;
            local_a0 = local_298;
          }
          else {
            if (local_60._1_1_ != '\0') goto LAB_00760264;
            local_60 = CONCAT11(1,(byte)local_60);
            if ((local_98 - local_a0 != 0 | (byte)local_60) != 1) goto LAB_00760264;
            local_100 = local_98 - local_a0;
            lVar4 = local_90._0_8_;
          }
          auVar20 = <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next_back(&local_a0);
          uVar19 = extraout_XMM0_Da_05;
          if (auVar20._0_8_ == 0) goto LAB_00760264;
          lVar6 = <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next_back(&local_a0);
          uVar19 = extraout_XMM0_Da_06;
          if (lVar6 == 0) goto LAB_00760264;
          auVar21 = <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next_back(&local_a0);
          piVar5 = auVar21._0_8_;
          uVar19 = extraout_XMM0_Da_07;
          if (piVar5 == (int *)0x0) goto LAB_00760264;
          if ((auVar21._8_8_ == 6) && ((short)piVar5[1] == 0x7075 && *piVar5 == 0x6f726763)) {
            local_108 = local_108 - lVar8;
            local_110 = local_110 + lVar8;
            local_2a8 = 0;
            local_288 = 0;
            local_278 = 0x2c0000002c;
            local_270 = 1;
            local_268 = 1;
            local_290 = auVar20._8_8_;
            local_280 = auVar20._8_8_;
            do {
              uStack_2a0 = auVar20._8_8_;
              local_298 = auVar20._0_8_;
              lVar8 = local_298;
              uVar19 = <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
                       ::next_match(&local_128,&local_298);
              auVar20._8_8_ = uStack_2a0;
              auVar20._0_8_ = local_298;
              if ((int)local_128 == 1) {
                lVar7 = CONCAT26(uStack_11a,CONCAT24(uStack_11c,local_120)) - local_2a8;
                lVar6 = local_118;
              }
              else {
                if (local_268._1_1_ != '\0') break;
                local_268 = CONCAT11(1,(byte)local_268);
                lVar7 = (longlong)uStack_2a0 - local_2a8;
                lVar6 = local_2a8;
                lVar8 = local_298;
                if ((uStack_2a0 != (undefined1 *)local_2a8 | (byte)local_268) != 1) break;
              }
              if ((lVar7 == 3) &&
                 ((char)((short *)(lVar8 + local_2a8))[1] == 'u' &&
                  *(short *)(lVar8 + local_2a8) == 0x7063)) {
                puVar13 = &DAT_001c0309;
                local_2a8 = lVar6;
                lVar8 = (*(code *)PTR__strip_prefix_0079ac08)(1,&DAT_001c0309);
                uVar19 = extraout_XMM0_Da_08;
                if (lVar8 == 0) goto LAB_00760264;
                cVar3 = (*(code *)PTR__starts_with_0079af08)(puVar13);
                uVar19 = extraout_XMM0_Da_09;
                if (cVar3 != '\0') {
                  local_c8 = 0;
                  lVar6 = (*(code *)PTR__strip_prefix_0079ac08)(puVar13);
                  uVar19 = extraout_XMM0_Da_10;
                  if (lVar6 == 0) goto LAB_00760264;
                  <u8_as<[_]>::to_vec_in::ConvertVec>::to_vec::
                  <alloc[12e961f32105355]::alloc::Global>(&local_2a8,lVar4 + lVar2,local_100);
                  local_38[2] = local_298;
                  *(int *)local_38 = (int)local_2a8;
                  *(undefined4 *)((longlong)local_38 + 4) = local_2a8._4_4_;
                  *(undefined4 *)(local_38 + 1) = (undefined4)uStack_2a0;
                  *(undefined4 *)((longlong)local_38 + 0xc) = uStack_2a0._4_4_;
                  local_38[3] = lVar6;
                  local_38[4] = lVar8;
                  uVar19 = (int)local_2a8;
                  goto joined_r0x007602cf;
                }
                break;
              }
              local_268._1_1_ = (char)((ushort)local_268 >> 8);
              bVar18 = local_268._1_1_ != '\x01';
              local_2a8 = lVar6;
            } while (bVar18);
          }
          uVar10 = local_58;
        } while( true );
      }
      ppuVar15 = local_e0;
    }
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
  }
  if ((1 < ((uint)ppuVar15 & 3) - 2) && (((ulonglong)ppuVar15 & 3) != 0)) {
    uStack_2a0 = (undefined1 *)((longlong)ppuVar15 + -1);
    local_2a8 = CONCAT71(local_2a8._1_7_,3);
    (*(code *)PTR_drop_00799040)();
  }
  *local_38 = 0xfffffffffffffffe;
  return local_38;
}


