// 00078b60 <<core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>>>::get_or_init<<addr2line[f7adfda4b3430143]::function::LazyFunctions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::borrow::{closure#0}>::{closure#0},!>

/* <core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,
   gimli[a7f20a324fd82d99]::read::Error>>>::try_init::<<core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,
   gimli[a7f20a324fd82d99]::read::Error>>>::get_or_init<<addr2line[f7adfda4b3430143]::function::LazyFunctions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::borrow::{closure#0}>::{closure#0},
   !> */

dword * __rustcall
<core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>>>
::try_init::
<<core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>>>::get_or_init<<addr2line[f7adfda4b3430143]::function::LazyFunctions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::borrow::_closure_0_>::_closure_0_,_>
          (uint param_1,qword *param_2,longlong param_3,longlong param_4)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  uint uVar7;
  undefined *puVar8;
  byte bVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  qword *pqVar12;
  qword *pqVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  byte bVar18;
  qword *pqVar19;
  byte bVar20;
  undefined7 uVar22;
  qword *pqVar21;
  longlong lVar23;
  longlong lVar24;
  qword *pqVar25;
  ulonglong uVar26;
  qword *pqVar27;
  longlong lVar28;
  ulonglong uVar29;
  qword *pqVar30;
  qword *pqVar31;
  byte *pbVar32;
  ulonglong *puVar33;
  bool bVar34;
  bool bVar35;
  uint extraout_XMM0_Da;
  uint extraout_XMM0_Da_00;
  undefined4 uVar36;
  qword *local_1d0;
  qword *local_1c8;
  longlong local_1c0;
  ulonglong local_198;
  qword *local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  uint local_160;
  uint local_15c;
  qword *local_158;
  qword *local_150;
  qword *local_148;
  undefined8 local_140;
  undefined8 local_138;
  qword *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  qword *local_118;
  qword *pqStack_110;
  qword *local_108;
  ulonglong uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  ulonglong uStack_f0;
  byte *local_e8;
  ulonglong *local_e0;
  qword *local_d8;
  qword *local_d0;
  qword *local_c8;
  ulonglong *local_c0;
  qword *local_b8;
  qword *local_b0;
  qword *local_a8;
  qword *local_a0;
  int local_98;
  undefined4 uStack_94;
  uint uStack_90;
  dword dStack_8c;
  qword *local_88;
  ulonglong *local_78;
  qword *local_70;
  qword *local_68;
  ulonglong local_60;
  ulonglong local_58;
  qword *local_50;
  int local_48;
  uint local_44;
  qword *local_40;
  ulonglong local_38;
  
  local_e0 = (ulonglong *)0x0;
  local_d8 = (qword *)&Elf64_Ehdr_00000000.e_ident_abiversion;
  local_d0 = (qword *)0x0;
  local_78 = (ulonglong *)0x0;
  local_70 = (qword *)&Elf64_Ehdr_00000000.e_ident_abiversion;
  local_68 = (qword *)0x0;
  local_170 = *(longlong *)(param_4 + 0x170) + 0x10;
  local_188 = *(qword **)(param_4 + 0x28);
  local_180 = *(longlong *)(param_4 + 0x30);
  local_168 = 0;
  local_178 = param_4;
  if (local_180 == 0) goto LAB_000797b1;
  uVar3 = *(uint *)(param_4 + 0x48);
  pqVar21 = (qword *)(ulonglong)uVar3;
  uVar14 = *(ulonglong *)(param_4 + 0x1b8);
  uVar4 = *(ulonglong *)(param_3 + 0xe8);
  uVar16 = uVar4 - uVar14;
  local_160 = uVar3 & 0xff00;
  bVar34 = 0x4ffff < uVar3;
  uVar29 = 0;
  if (!bVar34) {
    uVar29 = uVar14;
  }
  local_38 = 0;
  if (*(char *)(param_3 + 0x110) == '\0') {
    uVar29 = 0;
  }
  local_a8 = *(qword **)(param_4 + 0x1a8);
  local_158 = *(qword **)(param_3 + 0x18);
  local_c0 = (ulonglong *)((longlong)local_158 - (longlong)local_a8);
  bVar20 = (byte)uVar3;
  uVar26 = (ulonglong)((uVar3 & 0xff) << 8) | 0x19;
  local_15c = (uint)bVar34;
  pqVar13 = *(qword **)(param_4 + 0x198);
  pqVar25 = *(qword **)(param_3 + 0xe0);
  pqVar19 = (qword *)((longlong)pqVar25 + uVar14);
  uVar7 = uVar3 >> 8;
  local_150 = *(qword **)(param_3 + 0x10);
  local_b8 = (qword *)((longlong)local_a8 + (longlong)local_150);
  local_48 = 0;
  for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
    local_48 = local_48 + 1;
  }
  local_a0 = (qword *)&Elf64_Ehdr_00000000.e_ident_abiversion;
  local_50 = (qword *)0x0;
  pqVar31 = (qword *)0x0;
  local_148 = pqVar21;
  local_c8 = param_2;
  do {
    pbVar32 = (byte *)((longlong)local_188 +
                      (((ulonglong)(*(char *)(local_178 + 0x49) == '\b') * 8 +
                       *(longlong *)(local_178 + 0x38)) -
                      (*(longlong *)(local_178 + 0x30) + *(longlong *)(local_178 + 0x28))) + 4);
    lVar23 = 1 - local_180;
    pqVar30 = (qword *)0x0;
    iVar15 = 0;
    pqVar12 = local_188;
    while( true ) {
      pqVar27 = (qword *)((longlong)pqVar12 + 1);
      bVar9 = (byte)*pqVar12;
      uVar22 = (undefined7)((ulonglong)pqVar21 >> 8);
      if ((iVar15 == 0x3f) && (1 < bVar9)) {
        pqVar21 = (qword *)CONCAT71(uVar22,6);
        goto LAB_000796c1;
      }
      pqVar30 = (qword *)((ulonglong)pqVar30 | (ulonglong)(bVar9 & 0x7f) << ((byte)iVar15 & 0x3f));
      if (-1 < (char)bVar9) break;
      iVar15 = iVar15 + 7;
      lVar23 = lVar23 + 1;
      pqVar12 = pqVar27;
      if (lVar23 == 1) {
        pqVar30 = (qword *)((longlong)local_188 + local_180);
        pqVar21 = (qword *)CONCAT71(uVar22,0x13);
        local_38 = 0;
        goto LAB_000796c1;
      }
    }
    local_180 = -lVar23;
    if (pqVar30 == (qword *)0x0) {
      local_168 = local_168 + -1;
      local_188 = pqVar27;
    }
    else {
      if (*(byte **)(local_170 + 0x10) <= (byte *)((longlong)pqVar30 - 1U)) {
        lVar23 = *(longlong *)(local_170 + 0x18);
        pqVar21 = (qword *)CONCAT71(uVar22,0x12);
        local_188 = pqVar27;
        if (lVar23 != 0) {
          lVar28 = *(longlong *)(local_170 + 0x20);
          while( true ) {
            uVar17 = (ulonglong)*(ushort *)(lVar23 + 0x532);
            uVar11 = 0xffffffffffffffff;
            lVar24 = 0;
            do {
              if (uVar17 * 0x70 + lVar24 == 0) goto LAB_00078ec2;
              puVar33 = *(ulonglong **)(lVar23 + 0x4e0 + uVar11 * 8);
              lVar24 = lVar24 + -0x70;
              uVar11 = uVar11 + 1;
            } while ((char)((puVar33 < pqVar30) - (pqVar30 < puVar33)) == '\x01');
            uVar17 = uVar11;
            if (puVar33 < pqVar30 == pqVar30 < puVar33) break;
LAB_00078ec2:
            bVar35 = lVar28 == 0;
            lVar28 = lVar28 + -1;
            if (bVar35) goto LAB_000796c1;
            lVar23 = *(longlong *)(lVar23 + 0x538 + uVar17 * 8);
          }
          lVar28 = (lVar23 - lVar24) + -0x70;
          cVar2 = *(char *)((lVar23 - lVar24) + -6);
          pqVar30 = (qword *)0x0;
          goto joined_r0x00078f2f;
        }
LAB_000796c1:
        local_40 = pqVar21;
        if (local_78 != (ulonglong *)0x0) {
          param_1 = (*(code *)PTR___rust_dealloc_000c3aa0)(param_1,8);
        }
        puVar8 = PTR___rust_dealloc_000c3aa0;
        if (pqVar31 != (qword *)0x0) {
          pqVar21 = local_d8 + 4;
          do {
            if ((pqVar21[-4] != 0) && (pqVar21[-3] != 0)) {
              if (pqVar21[-2] != 0) {
                param_1 = (*(code *)puVar8)(param_1,8);
              }
              if (*pqVar21 != 0) {
                param_1 = (*(code *)puVar8)(param_1,8);
              }
            }
            pqVar21 = pqVar21 + 9;
            pqVar31 = (qword *)((longlong)pqVar31 + -1);
          } while (pqVar31 != (qword *)0x0);
        }
        if (local_e0 != (ulonglong *)0x0) {
          (*(code *)PTR___rust_dealloc_000c3aa0)(param_1,8);
        }
        pqVar13 = (qword *)0x0;
        uVar14 = local_38;
        param_2 = local_c8;
        do {
          local_118 = (qword *)((ulonglong)local_40 & 0xff | uVar14 << 8);
          if ((uint)*param_2 != 1) {
            *param_2 = 1;
            param_2[1] = (qword)pqVar13;
            param_2[2] = (qword)local_118;
            param_2[3] = (qword)pqVar30;
            param_2[4] = (qword)pqVar21;
            return (dword *)(param_2 + 1);
          }
          param_2 = param_2 + 1;
          local_128 = param_2;
          uStack_120 = pqVar13;
          pqStack_110 = pqVar30;
          local_108 = pqVar21;
          uVar36 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <core[c0acaeba6ab4c2e0]::result::Result<&core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>,(&core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>,core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>)>>
                             (&local_128);
          param_1 = (*(code *)PTR_panic_fmt_000c3e90)
                              (uVar36,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c1248);
LAB_00079a3d:
          param_1 = (*(code *)
                      PTR_<addr2line[f7adfda4b3430143]::function::FunctionAddress,<[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_,alloc[12e961f32105355]::vec::Vec<addr2line[f7adfda4b3430143]::function::FunctionAddress>>_000c4080
                    )(param_1,&local_98);
LAB_000797b1:
          local_40 = local_d0;
          pqVar13 = local_d8;
          if (local_d0 < local_e0) {
            if (local_d0 == (qword *)0x0) {
              param_1 = (*(code *)PTR___rust_dealloc_000c3aa0)(0,8);
              pqVar13 = (qword *)&Elf64_Ehdr_00000000.e_ident_abiversion;
            }
            else {
              pqVar13 = (qword *)(*(code *)PTR___rust_realloc_000c3c40)((longlong)local_d0 * 0x48,8)
              ;
              param_1 = extraout_XMM0_Da_00;
              if (pqVar13 == (qword *)0x0) {
                (*(code *)PTR_handle_error_000c3a98)();
                goto LAB_00079886;
              }
            }
          }
          pqVar21 = local_68;
          if (local_68 < local_78) {
            if (local_68 == (qword *)0x0) {
              (*(code *)PTR___rust_dealloc_000c3aa0)(param_1,8);
              pqVar30 = (qword *)&Elf64_Ehdr_00000000.e_ident_abiversion;
            }
            else {
              local_38 = (longlong)local_68 * 0x18;
              local_a8 = (qword *)((longlong)local_78 * 0x18);
              pqVar30 = (qword *)(*(code *)PTR___rust_realloc_000c3c40)(local_38,8);
              if (pqVar30 == (qword *)0x0) {
                (*(code *)PTR_handle_error_000c3a98)();
LAB_00079886:
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
            }
          }
          else {
            pqVar30 = local_70;
          }
          uVar14 = (ulonglong)local_40 >> 8;
        } while( true );
      }
      lVar28 = (longlong)((longlong)pqVar30 - 1U) * 0x70 + *(longlong *)(local_170 + 8);
      cVar2 = *(char *)(lVar28 + 0x6a);
      pqVar30 = local_188;
joined_r0x00078f2f:
      if (cVar2 == '\x01') {
        local_168 = local_168 + 1;
      }
      if (*(short *)(lVar28 + 0x68) == 0x2e) {
        local_188 = pqVar27;
        local_40 = (qword *)(*(code *)PTR_deref_000c4060)();
        pqVar21 = pqVar30;
        param_1 = extraout_XMM0_Da;
        if (pqVar30 != (qword *)0x0) {
          pqVar21 = (qword *)((longlong)pqVar30 * 0x10);
          puVar33 = (ulonglong *)0x0;
          local_140 = 0;
          local_138 = 0;
          bVar9 = 0;
          local_44 = 0;
          do {
            pbVar1 = (byte *)((longlong)local_40 + (longlong)puVar33);
            local_98 = *(int *)pbVar1;
            uStack_94 = *(undefined4 *)(pbVar1 + 4);
            uStack_90 = *(uint *)(pbVar1 + 8);
            dStack_8c = *(dword *)(pbVar1 + 0xc);
            param_1 = gimli[a7f20a324fd82d99]::read::unit::parse_attribute::
                      <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
                                (&local_128,&local_188,*(undefined4 *)(local_178 + 0x48),&local_98);
            if ((uint)local_128 == -1) {
              pqVar21 = uStack_120;
              pqVar30 = local_118;
              goto LAB_00079793;
            }
            uVar22 = (undefined7)((ulonglong)pqVar21 >> 8);
            if ((short)pqStack_110 == 0x55) {
              param_1 = <gimli[a7f20a324fd82d99]::read::unit::Attribute<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
                        ::value(&local_98,&local_128);
              if (CONCAT44(uStack_94,local_98) != 0x16) {
                if (local_98 != 0x18) {
                  local_44 = 0;
                  goto LAB_00078f60;
                }
                if (uVar4 < uVar14) {
                  pqVar30 = pqVar25;
                }
                else {
                  uVar11 = CONCAT44(dStack_8c,uStack_90) * (ulonglong)(byte)uVar7;
                  uVar17 = uVar16 - uVar11;
                  if (uVar11 <= uVar16) {
                    pqVar30 = (qword *)(uVar11 + (longlong)pqVar19);
                    if (local_160 == 0x800) {
                      if (uVar17 < 8) goto LAB_00079927;
                      uVar17 = (ulonglong)*(byte *)((longlong)pqVar30 + 7);
                      uVar11 = ((ulonglong)(uint)*pqVar30 << 8 |
                               (ulonglong)*(uint3 *)((longlong)pqVar30 + 4) << 0x28) >> 8 |
                               uVar17 << 0x38;
                    }
                    else {
                      if (uVar17 < 4) {
LAB_00079927:
                        goto LAB_0007992a;
                      }
                      uVar11 = (ulonglong)(uint)*pqVar30;
                    }
                    local_198 = uVar11 + uVar14;
                    goto LAB_000791ca;
                  }
                  pqVar30 = pqVar19;
                }
LAB_0007992a:
                pqVar21 = (qword *)CONCAT71(uVar22,0x13);
                local_38 = 0;
                goto LAB_000796c1;
              }
              local_198 = CONCAT44(dStack_8c,uStack_90) + uVar29;
              uVar17 = 0;
LAB_000791ca:
              local_44 = (uint)CONCAT71((int7)(uVar17 >> 8),1);
            }
            else if ((short)pqStack_110 == 0x12) {
              param_1 = <gimli[a7f20a324fd82d99]::read::unit::Attribute<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
                        ::value(&local_98,&local_128);
              if (CONCAT44(uStack_94,local_98) == 0) {
                local_138 = 1;
                local_130 = (qword *)CONCAT44(dStack_8c,uStack_90);
              }
              else if (local_98 == 7) {
                bVar9 = 1;
                local_1c0 = CONCAT44(dStack_8c,uStack_90);
              }
              else if (local_98 == 0xc) {
                if (local_158 < local_a8) {
                  uVar17 = local_60 & 0xffffffffffffff00 | 0x13;
                  pqVar12 = local_158;
                  pqVar30 = local_150;
                }
                else {
                  pqVar12 = (qword *)(CONCAT44(dStack_8c,uStack_90) * (ulonglong)bVar20);
                  uVar17 = (longlong)local_c0 - (longlong)pqVar12;
                  if (local_c0 < pqVar12) {
                    uVar17 = local_60 & 0xffffffffffffff00 | 0x13;
                    pqVar30 = local_b8;
                  }
                  else {
                    bVar18 = (byte)local_148 - 1;
                    if ((bVar18 < (byte)((byte)local_148 ^ bVar18)) && ((byte)local_48 < 4)) {
                      pqVar30 = (qword *)((longlong)local_b8 + (longlong)pqVar12);
                      switch((byte)local_48) {
                      case 0:
                        if (local_c0 != pqVar12) {
                          pqVar30 = (qword *)(ulonglong)(byte)*pqVar30;
LAB_000793c7:
                          uVar17 = local_60 | 0xff;
                          goto LAB_000793d9;
                        }
                        break;
                      case 1:
                        if (1 < uVar17) {
                          pqVar30 = (qword *)(ulonglong)(ushort)*pqVar30;
                          goto LAB_000793c7;
                        }
                        break;
                      case 2:
                        if (3 < uVar17) {
                          pqVar30 = (qword *)(ulonglong)(uint)*pqVar30;
                          goto LAB_000793c7;
                        }
                        break;
                      case 3:
                        if (7 < uVar17) {
                          pqVar12 = (qword *)(ulonglong)*(byte *)((longlong)pqVar30 + 7);
                          pqVar30 = (qword *)(((ulonglong)(uint)*pqVar30 << 8 |
                                              (ulonglong)*(uint3 *)((longlong)pqVar30 + 4) << 0x28)
                                              >> 8 | (longlong)pqVar12 << 0x38);
                          goto LAB_000793c7;
                        }
                      }
                      goto LAB_0007992a;
                    }
                    uVar17 = (local_60 & 0xffffffffffff0000) + uVar26;
                    pqVar30 = local_1d0;
                  }
                }
LAB_000793d9:
                if ((char)uVar17 != -1) goto LAB_000798ed;
                local_138 = CONCAT71((int7)((ulonglong)pqVar12 >> 8),1);
                local_1d0 = pqVar30;
                local_130 = pqVar30;
                local_60 = uVar17;
              }
            }
            else if ((short)pqStack_110 == 0x11) {
              param_1 = <gimli[a7f20a324fd82d99]::read::unit::Attribute<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
                        ::value(&local_98,&local_128);
              if (CONCAT44(uStack_94,local_98) == 0) {
                local_140 = 1;
                local_b0 = (qword *)CONCAT44(dStack_8c,uStack_90);
              }
              else if (local_98 == 0xc) {
                if (local_158 < local_a8) {
                  uVar17 = local_58 & 0xffffffffffffff00 | 0x13;
                  pqVar12 = local_158;
                  pqVar30 = local_150;
                }
                else {
                  pqVar12 = (qword *)(CONCAT44(dStack_8c,uStack_90) * (ulonglong)bVar20);
                  uVar17 = (longlong)local_c0 - (longlong)pqVar12;
                  if (local_c0 < pqVar12) {
                    uVar17 = local_58 & 0xffffffffffffff00 | 0x13;
                    pqVar30 = local_b8;
                  }
                  else {
                    bVar18 = (byte)local_148 - 1;
                    if ((bVar18 < (byte)((byte)local_148 ^ bVar18)) && ((byte)local_48 < 4)) {
                      pqVar30 = (qword *)((longlong)local_b8 + (longlong)pqVar12);
                      switch((byte)local_48) {
                      case 0:
                        if (local_c0 == pqVar12) goto LAB_0007992a;
                        pqVar30 = (qword *)(ulonglong)(byte)*pqVar30;
                        break;
                      case 1:
                        if (uVar17 < 2) goto LAB_0007992a;
                        pqVar30 = (qword *)(ulonglong)(ushort)*pqVar30;
                        break;
                      case 2:
                        if (uVar17 < 4) goto LAB_0007992a;
                        pqVar30 = (qword *)(ulonglong)(uint)*pqVar30;
                        break;
                      case 3:
                        if (uVar17 < 8) goto LAB_0007992a;
                        pqVar12 = (qword *)(ulonglong)*(byte *)((longlong)pqVar30 + 7);
                        pqVar30 = (qword *)(((ulonglong)(uint)*pqVar30 << 8 |
                                            (ulonglong)*(uint3 *)((longlong)pqVar30 + 4) << 0x28) >>
                                            8 | (longlong)pqVar12 << 0x38);
                      }
                      uVar17 = local_58 | 0xff;
                    }
                    else {
                      uVar17 = (local_58 & 0xffffffffffff0000) + uVar26;
                      pqVar30 = local_1c8;
                    }
                  }
                }
                if ((char)uVar17 != -1) {
LAB_000798ed:
                  local_38 = uVar17 >> 8;
                  pqVar21 = (qword *)(uVar17 & 0xffffffff);
                  goto LAB_000796c1;
                }
                local_140 = CONCAT71((int7)((ulonglong)pqVar12 >> 8),1);
                local_1c8 = pqVar30;
                local_b0 = pqVar30;
                local_58 = uVar17;
              }
            }
LAB_00078f60:
            param_2 = local_c8;
            puVar33 = puVar33 + 2;
          } while (pqVar21 != puVar33);
          if ((local_44 & 1) == 0) {
            if (((byte)local_138 & (byte)local_140 & 1) == 0) {
              if (((byte)local_140 & bVar9) != 0) {
                pqVar21 = (qword *)((longlong)local_b0 + local_1c0);
                if (local_b0 < pqVar21) {
                  if (local_50 == local_78) {
                    (*(code *)PTR_grow_one_000c4070)();
                    local_a0 = local_70;
                  }
                  goto LAB_000795de;
                }
              }
            }
            else {
              pqVar21 = local_130;
              if (local_b0 < local_130) {
                if (local_50 == local_78) {
                  (*(code *)PTR_grow_one_000c4070)();
                  local_a0 = local_70;
                  pqVar21 = local_130;
                }
LAB_000795de:
                local_a0[(longlong)local_50 * 3] = (qword)local_b0;
                local_a0[(longlong)local_50 * 3 + 1] = (qword)pqVar21;
                local_a0[(longlong)local_50 * 3 + 2] = (qword)pqVar31;
                local_68 = (qword *)((longlong)local_50 + 1);
                local_50 = local_68;
                goto LAB_00079629;
              }
            }
          }
          else {
            uVar17 = *(ulonglong *)(param_3 + (ulonglong)bVar34 * 0x10 + 0xd8);
            pqVar30 = *(qword **)(param_3 + 0xd0 + (ulonglong)bVar34 * 0x10);
            if (uVar17 < local_198) {
              pqVar21 = (qword *)CONCAT71(uVar22,0x13);
              uVar14 = 0;
              bVar9 = 0;
LAB_000799de:
              local_38 = uVar14 << 8 | (ulonglong)bVar9;
              goto LAB_000796c1;
            }
            local_108 = (qword *)((longlong)pqVar30 + local_198);
            local_128 = local_150;
            uStack_120 = local_158;
            pqStack_110 = local_a8;
            local_f8 = SUB84(local_148,0);
            uStack_f4 = CONCAT31(uStack_f4._1_3_,(char)local_15c);
            local_40 = (qword *)((ulonglong)local_40 & 0xffffffff00000000);
            local_118 = pqVar13;
            uStack_100 = uVar17 - local_198;
            while( true ) {
              param_1 = <gimli[a7f20a324fd82d99]::read::rnglists::RngListIter<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
                        ::next(&local_98,&local_128);
              pqVar30 = local_88;
              if (CONCAT44(uStack_94,local_98) == 0) break;
              pqVar21 = (qword *)CONCAT44(dStack_8c,uStack_90);
              if (local_98 == 2) {
                bVar9 = (byte)(uStack_90 >> 8);
                uVar17 = (ulonglong)(uStack_90 >> 8);
                if ((char)uStack_90 == -1) goto LAB_00079621;
                uVar14 = (ulonglong)pqVar21 >> 0x10;
                goto LAB_000799de;
              }
              if (pqVar21 < local_88) {
                if (local_50 == local_78) {
                  (*(code *)PTR_grow_one_000c4070)();
                  local_a0 = local_70;
                }
                local_a0[(longlong)local_50 * 3] = (qword)pqVar21;
                local_a0[(longlong)local_50 * 3 + 1] = (qword)pqVar30;
                local_a0[(longlong)local_50 * 3 + 2] = (qword)pqVar31;
                local_68 = (qword *)((longlong)local_50 + 1);
                local_40 = (qword *)CONCAT44(local_40._4_4_,
                                             (int)CONCAT71((int7)((ulonglong)
                                                                  ((longlong)local_50 * 3) >> 8),1))
                ;
                local_50 = local_68;
              }
            }
            uVar17 = (ulonglong)local_40 & 0xffffffff;
LAB_00079621:
            if ((uVar17 & 1) != 0) {
LAB_00079629:
              local_128 = (qword *)0x0;
              local_e8 = pbVar32;
              if (pqVar31 == local_e0) {
                (*(code *)PTR_grow_one_000c4078)();
              }
              local_d8[(longlong)pqVar31 * 9 + 8] = (qword)local_e8;
              local_d8[(longlong)pqVar31 * 9 + 6] = CONCAT44(uStack_f4,local_f8);
              (local_d8 + (longlong)pqVar31 * 9 + 6)[1] = uStack_f0;
              local_d8[(longlong)pqVar31 * 9 + 4] = (qword)local_108;
              (local_d8 + (longlong)pqVar31 * 9 + 4)[1] = uStack_100;
              local_d8[(longlong)pqVar31 * 9 + 2] = (qword)local_118;
              (local_d8 + (longlong)pqVar31 * 9 + 2)[1] = (qword)pqStack_110;
              pqVar30 = local_d8 + (longlong)pqVar31 * 9;
              *(uint *)pqVar30 = (uint)local_128;
              *(uint *)((longlong)pqVar30 + 4) = local_128._4_4_;
              *(uint *)(pqVar30 + 1) = (uint)uStack_120;
              *(uint *)((longlong)pqVar30 + 0xc) = uStack_120._4_4_;
              pqVar31 = (qword *)((longlong)pqVar31 + 1);
              param_1 = (uint)local_128;
              local_d0 = pqVar31;
            }
          }
        }
      }
      else {
        local_188 = pqVar27;
        uVar10 = (*(code *)PTR_deref_000c4060)();
        param_1 = gimli[a7f20a324fd82d99]::read::unit::skip_attributes::
                  <gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>
                            (&local_128,&local_188,*(undefined4 *)(local_178 + 0x48),uVar10,pqVar30)
        ;
        if ((char)local_128 != -1) {
          pqVar21 = local_128;
          pqVar30 = uStack_120;
LAB_00079793:
          local_38 = (ulonglong)pqVar21 >> 8;
          goto LAB_000796c1;
        }
      }
    }
    if (local_180 == 0) {
      if (local_50 < Elf64_Ehdr_00000000.e_ident_magic_str + 1) goto LAB_000797b1;
      if (&Elf64_Ehdr_00000000.e_version < local_50) goto LAB_00079a3d;
      lVar23 = 0x18;
      pqVar21 = local_70 + 3;
      pqVar13 = local_70;
      do {
        pqVar25 = pqVar21;
        uVar14 = pqVar13[3];
        if (uVar14 < *pqVar13) {
          pqVar21 = (qword *)pqVar13[4];
          pqVar13 = (qword *)pqVar13[5];
          lVar28 = lVar23;
          do {
            *(undefined8 *)((longlong)local_70 + lVar28 + 0x10) =
                 *(undefined8 *)((longlong)local_70 + lVar28 + -8);
            pbVar32 = (byte *)((longlong)local_70 + lVar28 + -0x18);
            uVar10 = *(undefined8 *)(pbVar32 + 8);
            *(undefined8 *)((longlong)local_70 + lVar28) = *(undefined8 *)pbVar32;
            *(undefined8 *)((byte *)((longlong)local_70 + lVar28) + 8) = uVar10;
            if (lVar28 == 0x18) {
              pqVar19 = local_70;
              goto LAB_0007996b;
            }
            lVar24 = lVar28 + -0x18;
            lVar6 = lVar28 + -0x30;
            lVar28 = lVar24;
          } while (uVar14 < *(ulonglong *)((longlong)local_70 + lVar6));
          pqVar19 = (qword *)(lVar24 + (longlong)local_70);
LAB_0007996b:
          *pqVar19 = uVar14;
          local_128._0_4_ = (uint)pqVar21;
          local_128._4_4_ = (uint)((ulonglong)pqVar21 >> 0x20);
          uStack_120._0_4_ = (uint)pqVar13;
          uStack_120._4_4_ = (uint)((ulonglong)pqVar13 >> 0x20);
          *(uint *)(pqVar19 + 1) = (uint)local_128;
          *(uint *)((longlong)pqVar19 + 0xc) = local_128._4_4_;
          *(uint *)(pqVar19 + 2) = (uint)uStack_120;
          *(uint *)((longlong)pqVar19 + 0x14) = uStack_120._4_4_;
          param_1 = (uint)local_128;
          local_128 = pqVar21;
          uStack_120 = pqVar13;
        }
        pqVar21 = pqVar25 + 3;
        lVar23 = lVar23 + 0x18;
        pqVar13 = pqVar25;
        if (pqVar21 == local_70 + (longlong)local_50 * 3) goto LAB_000797b1;
      } while( true );
    }
  } while( true );
}


