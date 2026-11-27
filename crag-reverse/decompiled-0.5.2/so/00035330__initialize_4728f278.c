// 00035330 initialize

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* agy_bridge[64a9e9deac6c45ce]::initialize */

void __rustcall agy_bridge[64a9e9deac6c45ce]::initialize(void)

{
  byte bVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  char cVar8;
  int iVar9;
  byte *pbVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte *pbVar13;
  undefined8 in_RCX;
  uint uVar14;
  byte *pbVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined1 auVar18 [16];
  byte *local_f60;
  byte **local_f28;
  byte *local_f20;
  undefined8 local_f18;
  byte *local_f10;
  byte **local_f08;
  byte *local_f00;
  undefined8 local_ef8;
  byte ****local_ef0;
  undefined *local_ee8;
  byte ***local_ee0;
  undefined8 local_ed8;
  longlong local_ed0;
  undefined8 local_ec0;
  undefined8 local_eb8;
  byte *pbStack_eb0;
  byte *local_ea8;
  undefined8 uStack_ea0;
  byte ****local_e98;
  undefined *puStack_e90;
  undefined8 *local_e88;
  undefined *puStack_e80;
  byte ***local_e78;
  undefined *puStack_e70;
  byte ***local_e68;
  undefined *puStack_e60;
  byte **local_e58;
  undefined *puStack_e50;
  byte **local_e40;
  byte *local_e38;
  undefined8 local_e30;
  byte **local_e28;
  byte *local_9d8;
  byte *pbStack_9d0;
  undefined8 local_9c8;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  byte ****local_9b8;
  undefined *puStack_9b0;
  undefined8 *puStack_9a8;
  undefined *puStack_9a0;
  byte ***pppbStack_998;
  undefined *local_990;
  byte ***pppbStack_988;
  undefined *local_980;
  byte **ppbStack_978;
  byte local_970;
  undefined7 uStack_96f;
  byte *local_500;
  byte *local_4f8;
  byte *local_4f0;
  byte *local_4e8;
  byte *pbStack_4e0;
  byte *local_4d8;
  byte *local_4d0;
  byte *local_4c8;
  byte *local_4c0;
  byte *local_4b8;
  undefined8 local_4b0;
  undefined4 local_4a8;
  undefined1 local_4a4;
  undefined8 local_4a0;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_58;
  undefined1 local_40;
  undefined4 local_38;
  undefined2 local_34;
  
  uVar17 = (*(code *)PTR_getenv_000c3b40)(in_RCX,0x18);
  if (local_ed0 == -1) {
    return;
  }
  (*(code *)PTR_inner_000c3b48)(uVar17,0x15);
  pbVar7 = uStack_ea0;
  pbVar13 = local_ea8;
  pbVar5 = pbStack_eb0;
  if ((int)local_eb8 == 1) {
    local_9c8 = uStack_ea0;
    pbStack_9d0 = local_ea8;
    pbVar10 = (byte *)<core[c0acaeba6ab4c2e0]::io::error::Error>::new::
                      <std[6c98fd8553dbae28]::env::VarError>(0x29,&local_9d8);
  }
  else {
    cVar8 = (*(code *)PTR_is_absolute_000c3b50)();
    if (((cVar8 == '\0') || (pbVar7 + -0x81 < (byte *)0xffffffffffffff80)) ||
       ((9 < (byte)(*pbVar13 - 0x30) && (0x19 < (byte)((*pbVar13 & 0xdf) + 0xbf))))) {
LAB_000353f6:
      pbVar10 = (byte *)(*(code *)PTR_<&str>_000c3b30)(extraout_XMM0_Da,0x20);
      uVar17 = extraout_XMM0_Da_00;
LAB_00035410:
      if (pbVar5 != (byte *)0x0) {
        uVar17 = (*(code *)PTR___rust_dealloc_000c3aa0)(uVar17,1);
      }
    }
    else {
      pbVar10 = (byte *)0x0;
      do {
        bVar1 = pbVar13[(longlong)pbVar10];
        if (((9 < (byte)(bVar1 - 0x30)) && (0x19 < (byte)((bVar1 & 0xdf) + 0xbf))) &&
           ((0x32 < bVar1 - 0x2d ||
            ((0x4000000000003U >> ((ulonglong)(bVar1 - 0x2d) & 0x3f) & 1) == 0))))
        goto LAB_000353f6;
        pbVar10 = pbVar10 + 1;
      } while (pbVar7 != pbVar10);
      uVar17 = (*(code *)PTR_getenv_000c3b40)(0x4000000000003,0x13);
      pbVar6 = pbStack_eb0;
      pbVar3 = local_eb8;
      local_f10 = local_ea8;
      uVar17 = (*(code *)PTR_inner_000c3b48)(uVar17,0x1c);
      if ((char)local_eb8 == '\0') {
        local_f60 = pbStack_eb0;
        pbVar15 = uStack_ea0;
      }
      else {
        if ((pbStack_eb0 != (byte *)0xffffffffffffffff) && (pbStack_eb0 != (byte *)0x0)) {
          (*(code *)PTR___rust_dealloc_000c3aa0)(uVar17,1);
        }
        local_f60 = (byte *)0xffffffffffffffff;
        pbVar15 = pbVar5;
      }
      local_eb8 = (byte *)0x1b600000000;
      uVar12 = (ulonglong)pbStack_eb0 >> 8;
      pbStack_eb0 = (byte *)CONCAT71((uint7)uVar12 & 0xffff0000000000,1);
      uVar17 = (*(code *)PTR__open_000c3b58)(0xe,"/proc/self/exe");
      pbVar10 = pbStack_9d0;
      if ((int)local_9d8 == 1) {
        if (local_f60 + -1 < (byte *)0xfffffffffffffffe) {
          uVar17 = (*(code *)PTR___rust_dealloc_000c3aa0)(uVar17,1);
        }
LAB_00035b92:
        if (0 < (longlong)pbVar3) {
          uVar17 = (*(code *)PTR___rust_dealloc_000c3aa0)(uVar17,1);
        }
        goto LAB_00035410;
      }
      (*(code *)PTR_metadata_000c3b60)();
      if ((int)local_eb8 == 2) {
        pbVar10 = pbStack_eb0;
LAB_00035b53:
        bVar16 = true;
      }
      else {
        if (local_f60 == (byte *)0xffffffffffffffff) {
LAB_000357be:
          local_980 = (undefined *)0x0;
          ppbStack_978 = (byte **)0x0;
          local_990 = (undefined *)0x0;
          pppbStack_988 = (byte ***)0x0;
          puStack_9a0 = (undefined *)0x0;
          pppbStack_998 = (byte ***)0x0;
          puStack_9b0 = (undefined *)0x0;
          puStack_9a8 = (undefined8 *)0x0;
          local_970 = 0;
          local_9d8 = _DAT_0000bdc0;
          pbStack_9d0 = _UNK_0000bdc8;
          local_9c8 = (byte *)CONCAT44(_UNK_0000bdd4,_DAT_0000bdd0);
          uStack_9c0 = _UNK_0000bdd8;
          uStack_9bc = _UNK_0000bddc;
          local_9b8 = (byte ****)0x0;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
          lVar11 = (*(code *)PTR___rust_alloc_zeroed_000c3b88)();
          if (lVar11 == 0) {
            (*(code *)PTR_handle_error_000c3a98)();
            goto LAB_00035f35;
          }
          while( true ) {
            pbVar10 = (byte *)0x40000;
            uVar12 = (*(code *)PTR_read_000c3b90)();
            bVar1 = local_970;
            uVar17 = extraout_XMM0_Da_02;
            if ((uVar12 & 1) != 0) break;
            if (pbVar10 == (byte *)0x0) {
              puStack_e50 = (undefined *)CONCAT71(uStack_96f,local_970);
              local_e58 = ppbStack_978;
              local_e68 = pppbStack_988;
              puStack_e60 = local_980;
              local_e78 = pppbStack_998;
              puStack_e70 = local_990;
              local_e88 = puStack_9a8;
              puStack_e80 = puStack_9a0;
              local_e98 = local_9b8;
              puStack_e90 = puStack_9b0;
              local_ea8 = local_9c8;
              uStack_ea0 = (byte *)CONCAT44(uStack_9bc,uStack_9c0);
              local_eb8 = local_9d8;
              pbStack_eb0 = pbStack_9d0;
              uVar17 = <digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha256VarCore,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,sha2[7efb180a76699f7c]::OidSha256>>as_digest[f0d79a819dec3844]::FixedOutput>
                       ::finalize_fixed(&local_500,&local_eb8);
              local_f20 = (byte *)<generic_array[23c79d86a8b0a962]::GenericArray<u8,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>
                                  ::fmt;
              local_f28 = &local_500;
              (*(code *)PTR_format_inner_000c3b78)(uVar17,&local_f28);
              pbVar10 = local_eb8;
              cVar8 = is_supported_agy_digest(pbStack_eb0,local_ea8);
              if (cVar8 != '\0') {
                uVar17 = extraout_XMM0_Da_03;
                if (pbVar10 != (byte *)0x0) {
                  uVar17 = (*(code *)PTR___rust_dealloc_000c3aa0)(extraout_XMM0_Da_03,1);
                }
                (*(code *)PTR___rust_dealloc_000c3aa0)(uVar17,1);
                goto LAB_00035a80;
              }
              uVar17 = extraout_XMM0_Da_03;
              if (pbVar10 != (byte *)0x0) {
                uVar17 = (*(code *)PTR___rust_dealloc_000c3aa0)(extraout_XMM0_Da_03,1);
              }
              pbVar10 = (byte *)(*(code *)PTR_<&str>_000c3b30)(uVar17,0x21);
              uVar17 = extraout_XMM0_Da_04;
              break;
            }
            if ((byte *)0x40000 < pbVar10) {
              (*(code *)PTR_slice_index_fail_000c3bb0)(&PTR_s_adapter_lib_rs_000bfb30,0x40000);
              goto LAB_00035f35;
            }
            pbVar15 = (byte *)(0x40 - (ulonglong)local_970);
            if (pbVar10 < pbVar15) {
              (*(code *)PTR_memcpy_000c3aa8)(extraout_XMM0_Da_02,pbVar10);
              local_970 = (char)pbVar10 + bVar1;
            }
            else {
              if ((ulonglong)local_970 != 0) {
                uVar17 = (*(code *)PTR_memcpy_000c3aa8)(extraout_XMM0_Da_02,pbVar15);
                local_9b8 = (byte ****)((longlong)local_9b8 + 1);
                (*(code *)PTR_compress256_000c3b98)(uVar17,1);
                pbVar10 = pbVar10 + -(longlong)pbVar15;
              }
              if ((ulonglong)pbVar10 >> 6 != 0) {
                local_9b8 = (byte ****)((longlong)local_9b8 + ((ulonglong)pbVar10 >> 6));
                (*(code *)PTR_compress256_000c3b98)();
              }
              uVar14 = (uint)pbVar10 & 0x3f;
              (*(code *)PTR_memcpy_000c3aa8)(0x7fffffffffffffc0,uVar14);
              local_970 = (byte)uVar14;
            }
          }
          (*(code *)PTR___rust_dealloc_000c3aa0)(uVar17,1);
          goto LAB_00035b53;
        }
        local_ef0 = local_e98;
        local_ee8 = puStack_e90;
        local_ee0 = local_e68;
        local_ed8 = local_e30;
        local_f08 = local_e28;
        local_f28 = local_e40;
        local_500 = local_e38;
        local_eb8 = (byte *)&local_ef0;
        pbStack_eb0 = PTR_fmt_000c3b68;
        local_ea8 = (byte *)&local_ee8;
        uStack_ea0 = PTR_fmt_000c3b68;
        local_e98 = &local_ee0;
        puStack_e90 = PTR_fmt_000c3b68;
        local_e88 = &local_ed8;
        puStack_e80 = PTR_fmt_000c3b70;
        local_e78 = &local_f08;
        puStack_e70 = PTR_fmt_000c3b70;
        local_e68 = &local_f28;
        puStack_e60 = PTR_fmt_000c3b70;
        local_e58 = &local_500;
        puStack_e50 = PTR_fmt_000c3b70;
        uVar17 = (*(code *)PTR_format_inner_000c3b78)(local_e58,&local_eb8);
        if (pbVar15 == local_9c8) {
          iVar9 = (*(code *)PTR_bcmp_000c3b80)(uVar17,pbVar15);
          bVar16 = iVar9 == 0;
          uVar17 = extraout_XMM0_Da_01;
        }
        else {
          bVar16 = false;
        }
        if (local_9d8 != (byte *)0x0) {
          (*(code *)PTR___rust_dealloc_000c3aa0)(uVar17,1);
        }
        if (!bVar16) goto LAB_000357be;
LAB_00035a80:
        std[6c98fd8553dbae28]::env::remove_var::<&str>("LD_PRELOAD",10);
        std[6c98fd8553dbae28]::env::remove_var::<&str>("CRAGGEMINI_NATIVE_SOCKET",0x18);
        std[6c98fd8553dbae28]::env::remove_var::<&str>("CRAGGEMINI_SESSION_ID",0x15);
        std[6c98fd8553dbae28]::env::remove_var::<&str>("CRAGGEMINI_SHM_PATH",0x13);
        std[6c98fd8553dbae28]::env::remove_var::<&str>("CRAGGEMINI_VERIFI",0x1c);
        auVar18 = hooks::image_base();
        pbVar10 = auVar18._8_8_;
        bVar16 = true;
        if ((auVar18._0_8_ & 1) == 0) {
          uVar17 = shm::create_eventfd(&local_eb8);
          if ((int)local_eb8 == 1) {
            pbVar10 = pbStack_eb0;
          }
          else {
            uVar4 = local_eb8._4_4_;
            (*(code *)PTR_to_path_buf_000c3ba0)(uVar17,local_ec0);
            local_4d0 = pbVar3;
            local_4c8 = pbVar6;
            local_4c0 = local_f10;
            local_500 = pbVar5;
            local_4f8 = pbVar13;
            local_4f0 = pbVar7;
            local_4e8 = local_eb8;
            pbStack_4e0 = pbStack_eb0;
            local_4d8 = local_ea8;
            local_38 = uVar4;
            local_34 = 0;
            local_4b0 = 0;
            local_4a8 = 0;
            local_4a4 = 0;
            local_4a0 = 2;
            local_170 = 0;
            local_168 = 8;
            local_160 = 0;
            uStack_158 = 0;
            local_150 = 0;
            local_148 = 8;
            local_140 = 0;
            uStack_138 = 0;
            local_130 = 8;
            local_128 = 0;
            uStack_120 = 0;
            local_118 = 8;
            local_110 = 0;
            uStack_108 = 0;
            local_100 = 0;
            local_f0 = 0;
            uStack_e8 = 0;
            local_e0 = 0xffffffffffffffff;
            local_58 = 0xffffffffffffffff;
            local_40 = 0;
            local_4b8 = pbVar10;
            uVar17 = <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<agy_bridge[64a9e9deac6c45ce]::Runtime>>
                     ::try_insert(&local_eb8,&local_500);
            if (pbStack_eb0 == (byte *)0xffffffffffffffff) {
              pbVar10 = (byte *)hooks::install(pbVar10);
              if (pbVar10 == (byte *)0x0) {
                local_ea8 = (byte *)0xffffffffffffffff;
                local_eb8 = (byte *)0x0;
                puStack_e90 = (undefined *)((ulonglong)puStack_e90 & 0xffffffffffffff00);
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
                pbVar13 = (byte *)(*(code *)PTR___rust_alloc_000c3a90)();
                if (pbVar13 == (byte *)0x0) {
                  (*(code *)PTR_handle_error_000c3a98)();
                  goto LAB_00035f35;
                }
                *(undefined8 *)pbVar13 = 0x646972622d796761;
                *(word *)(pbVar13 + 8) = 0x6567;
                local_500 = Elf64_Ehdr_00000000.e_ident_pad + 1;
                local_4f0 = Elf64_Ehdr_00000000.e_ident_pad + 1;
                local_4f8 = pbVar13;
                (*(code *)PTR_name_000c3ba8)(0x646972622d796761,&local_500);
                <std[6c98fd8553dbae28]::thread::builder::Builder>::spawn_unchecked::
                <agy_bridge[64a9e9deac6c45ce]::start::_closure_2_,()>();
                pbVar10 = local_f20;
                if (local_f28 != (byte **)0x0) {
                  local_f08 = local_f28;
                  local_f00 = local_f20;
                  local_ef8 = local_f18;
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>(&local_f08);
                  uVar17 = (*(code *)PTR_close_000c3ab8)();
                  if (local_f60 + -1 < (byte *)0xfffffffffffffffe) {
                    uVar17 = (*(code *)PTR___rust_dealloc_000c3aa0)(uVar17,1);
                  }
                  goto LAB_0003542f;
                }
              }
            }
            else {
              (*(code *)PTR_memcpy_000c3aa8)(uVar17,0x4d0);
              pbVar10 = (byte *)start::_closure_1_(&local_9d8,&pbStack_eb0);
            }
            bVar16 = false;
          }
        }
      }
      uVar17 = (*(code *)PTR_close_000c3ab8)();
      if (local_f60 + -1 < (byte *)0xfffffffffffffffe) {
        uVar17 = (*(code *)PTR___rust_dealloc_000c3aa0)(uVar17,1);
      }
      if (bVar16) goto LAB_00035b92;
    }
    if (pbVar10 == (byte *)0x0) {
LAB_0003542f:
      if (local_ed0 != 0) {
        (*(code *)PTR___rust_dealloc_000c3aa0)(uVar17,1);
      }
      return;
    }
  }
  local_eb8 = (byte *)&local_9d8;
  pbStack_eb0 = PTR_fmt_000c3bb8;
  local_9d8 = pbVar10;
  (*(code *)PTR__eprint_000c3bc0)();
  (*(code *)PTR_exit_000c3bc8)();
LAB_00035f35:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


