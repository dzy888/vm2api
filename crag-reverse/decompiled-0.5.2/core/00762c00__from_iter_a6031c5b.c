// 00762c00 from_iter

/* <alloc[12e961f32105355]::vec::Vec<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr,
   std[6c98fd8553dbae28]::sys::net::connection::socket::LookupHost>>::from_iter */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr,std[6c98fd8553dbae28]::sys::net::connection::socket::LookupHost>>
::from_iter(longlong *param_1,ulonglong param_2)

{
  ushort uVar1;
  longlong lVar2;
  short *psVar3;
  code *pcVar4;
  short *psVar5;
  undefined4 uVar6;
  undefined **ppuVar7;
  ushort unaff_BX;
  longlong lVar8;
  ushort uVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_70;
  short *psStack_68;
  longlong local_60;
  uint local_54;
  undefined **local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  
  lVar2 = *(longlong *)(param_2 + 8);
  do {
    lVar10 = lVar2;
    if (lVar10 == 0) {
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      (*(code *)PTR_freeaddrinfo_0079b128)();
      return;
    }
    lVar2 = *(longlong *)(lVar10 + 0x28);
    *(longlong *)(param_2 + 8) = lVar2;
    psVar5 = *(short **)(lVar10 + 0x18);
    if (*psVar5 == 10) {
      if (0x1b < *(uint *)(lVar10 + 0x10)) {
        local_3c = *(undefined4 *)(psVar5 + 2);
        local_40 = *(undefined4 *)(psVar5 + 0xc);
        unaff_BX = psVar5[1] << 8 | (ushort)psVar5[1] >> 8;
        local_34 = *(int *)(psVar5 + 4) << 0x10;
        uVar9 = psVar5[5];
        local_50 = *(undefined ***)(psVar5 + 6);
        local_38 = *(undefined4 *)(psVar5 + 10);
        local_48 = (undefined **)
                   CONCAT44(local_48._4_4_,(int)CONCAT62((uint6)(ushort)((uint)local_38 >> 0x10),1))
        ;
        goto LAB_00762ce7;
      }
      ppuVar7 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00797070;
      goto LAB_00762f0b;
    }
  } while (*psVar5 != 2);
  if (*(uint *)(lVar10 + 0x10) < 0x10) {
    ppuVar7 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00797058;
LAB_00762f0b:
    (*(code *)PTR_panic_00799338)(lVar10,ppuVar7);
  }
  else {
    local_34 = *(int *)(psVar5 + 2);
    uVar9 = psVar5[1] << 8 | (ushort)psVar5[1] >> 8;
    local_50 = &PTR_DAT_00797088;
    local_48 = (undefined **)((ulonglong)local_48._4_4_ << 0x20);
LAB_00762ce7:
    uVar1 = *(ushort *)(param_2 + 0x10);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    psVar5 = (short *)(*(code *)PTR___rust_alloc_00799000)();
    if (psVar5 != (short *)0x0) {
      local_54 = (uint)uVar1;
      if ((short)local_48 == 0) {
        uVar9 = uVar1;
        uVar1 = unaff_BX;
      }
      *psVar5 = (short)local_48;
      *(int *)(psVar5 + 1) = local_34;
      psVar5[3] = uVar9;
      *(undefined ***)(psVar5 + 4) = local_50;
      *(undefined4 *)(psVar5 + 8) = local_38;
      *(undefined4 *)(psVar5 + 10) = local_3c;
      *(undefined4 *)(psVar5 + 0xc) = local_40;
      psVar5[0xe] = uVar1;
      local_70 = 4;
      local_60 = 1;
      lVar10 = 1;
      psStack_68 = psVar5;
LAB_00762dc0:
      lVar8 = lVar2;
      if (lVar8 == 0) {
        (*(code *)PTR_freeaddrinfo_0079b128)();
        param_1[2] = local_60;
        *param_1 = local_70;
        param_1[1] = (longlong)psStack_68;
        return;
      }
      psVar3 = *(short **)(lVar8 + 0x18);
      lVar2 = *(longlong *)(lVar8 + 0x28);
      if (*psVar3 != 10) goto code_r0x00762dde;
      if (*(uint *)(lVar8 + 0x10) < 0x1c) {
        ppuVar7 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00797070;
        goto LAB_00762edb;
      }
      local_3c = *(undefined4 *)(psVar3 + 2);
      local_40 = *(undefined4 *)(psVar3 + 0xc);
      param_2 = (ulonglong)(ushort)(psVar3[1] << 8 | (ushort)psVar3[1] >> 8);
      local_34 = *(int *)(psVar3 + 4) << 0x10;
      uVar9 = psVar3[5];
      local_48 = *(undefined ***)(psVar3 + 6);
      local_38 = *(undefined4 *)(psVar3 + 10);
      uVar6 = (undefined4)CONCAT62((uint6)(ushort)((uint)local_38 >> 0x10),1);
      goto LAB_00762e4c;
    }
    (*(code *)PTR_handle_error_00798ff0)();
  }
LAB_00762f23:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
code_r0x00762dde:
  if (*psVar3 == 2) {
    if (*(uint *)(lVar8 + 0x10) < 0x10) {
      ppuVar7 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00797058;
LAB_00762edb:
      (*(code *)PTR_panic_00799338)(psVar3,ppuVar7);
      goto LAB_00762f23;
    }
    local_34 = *(int *)(psVar3 + 2);
    uVar9 = psVar3[1] << 8 | (ushort)psVar3[1] >> 8;
    local_48 = &PTR_DAT_00797088;
    uVar6 = 0;
LAB_00762e4c:
    local_50 = (undefined **)CONCAT44(local_50._4_4_,uVar6);
    bVar11 = (short)uVar6 == 0;
    if (bVar11) {
      uVar9 = (ushort)local_54;
    }
    param_2 = param_2 & 0xffffffff;
    if (!bVar11) {
      param_2 = (ulonglong)local_54;
    }
    if (lVar10 == local_70) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(&local_70,lVar10,1,4,0x20);
      psVar5 = psStack_68;
    }
    psVar5[lVar10 * 0x10] = (short)local_50;
    *(int *)(psVar5 + lVar10 * 0x10 + 1) = local_34;
    psVar5[lVar10 * 0x10 + 3] = uVar9;
    *(undefined ***)(psVar5 + lVar10 * 0x10 + 4) = local_48;
    *(undefined4 *)(psVar5 + lVar10 * 0x10 + 8) = local_38;
    *(undefined4 *)(psVar5 + lVar10 * 0x10 + 10) = local_3c;
    *(undefined4 *)(psVar5 + lVar10 * 0x10 + 0xc) = local_40;
    psVar5[lVar10 * 0x10 + 0xe] = (short)param_2;
    lVar10 = lVar10 + 1;
    local_60 = lVar10;
  }
  goto LAB_00762dc0;
}


