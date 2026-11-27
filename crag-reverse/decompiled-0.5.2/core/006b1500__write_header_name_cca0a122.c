// 006b1500 write_header_name

/* <<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers_with_original_case::OrigCaseWriter
   as hyper[c4782d5b5c5e3493]::proto::h1::role::HeaderNameWriter>::write_header_name */

void __rustcall
<<hyper[c4782d5b5c5e3493]::proto::h1::role::Server>::encode_headers_with_original_case::OrigCaseWriter_as_hyper[c4782d5b5c5e3493]::proto::h1::role::HeaderNameWriter>
::write_header_name(longlong *param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong extraout_RDX;
  byte bVar7;
  longlong lVar8;
  longlong **pplVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  int local_58;
  undefined4 uStack_54;
  byte local_50;
  uint uStack_4f;
  uint3 uStack_4b;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  
  if ((int)param_1[4] == -1) {
LAB_006b157b:
    param_1[4] = -1;
    lVar4 = param_1[10];
    if ((undefined8 *)*param_3 == (undefined8 *)0x0) {
      bVar7 = *(byte *)(param_3 + 1);
      uVar5 = 0;
      lVar8 = 0;
    }
    else {
      (**(code **)*param_3)(param_3[2],param_3[1]);
      lVar8 = CONCAT44(uStack_54,local_58);
      local_70 = local_48;
      local_68 = local_40;
      uVar5 = (ulonglong)uStack_4f << 8 | (ulonglong)uStack_4b << 0x28;
      bVar7 = local_50;
    }
    <http[56314f485c23ccf6]::header::map::HeaderMap<bytes[e9829e187354639b]::bytes::Bytes>>::get_all
    ::<&http[56314f485c23ccf6]::header::name::HeaderName>(&local_58,lVar4,param_3);
    if (local_58 == 1) {
      uVar10 = CONCAT35(uStack_4b,CONCAT41(uStack_4f,local_50));
      if (*(ulonglong *)(local_48 + 0x28) <= uVar10) {
        (*(code *)PTR_panic_bounds_check_00799520)();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      plVar6 = (longlong *)(uVar10 * 0x60);
      bVar11 = (*(byte *)(*(longlong *)(local_48 + 0x20) + (longlong)plVar6) & 1) == 0;
      if (!bVar11) {
        plVar6 = *(longlong **)((longlong)plVar6 + *(longlong *)(local_48 + 0x20) + 0x10);
      }
      local_60 = (longlong *)(ulonglong)!bVar11;
      pplVar9 = &local_38;
      lVar4 = 0;
    }
    else {
      pplVar9 = &local_60;
      lVar4 = 2;
      uVar10 = 0xffffffffffffffff;
      plVar6 = (longlong *)0x2;
    }
    *pplVar9 = plVar6;
    *param_1 = lVar8;
    param_1[1] = bVar7 | uVar5;
    param_1[2] = local_70;
    param_1[3] = local_68;
    param_1[4] = lVar4;
    param_1[6] = (longlong)local_60;
    param_1[7] = (longlong)local_38;
    param_1[8] = local_48;
    param_1[9] = uVar10;
    plVar6 = local_38;
  }
  else {
    lVar4 = *param_1;
    if ((lVar4 != 0) == (*param_3 == 0)) {
      if (lVar4 != 0) goto LAB_006b156f;
      goto LAB_006b157b;
    }
    if (lVar4 != 0) {
      if (param_1[2] == param_3[2]) {
        plVar6 = (longlong *)param_3[1];
        iVar3 = (*(code *)PTR_bcmp_00799020)();
        if (iVar3 == 0) goto LAB_006b169e;
      }
LAB_006b156f:
      (**(code **)(lVar4 + 0x20))();
      goto LAB_006b157b;
    }
    plVar6 = param_2;
    if ((char)param_1[1] != (char)param_3[1]) goto LAB_006b157b;
  }
LAB_006b169e:
  lVar4 = <http[56314f485c23ccf6]::header::map::ValueIter<bytes[e9829e187354639b]::bytes::Bytes>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
          ::next(param_1 + 4,plVar6);
  if (lVar4 == 0) {
    if ((char)param_1[0xb] != '\0') {
      if (*param_3 == 0) {
        auVar12 = <http[56314f485c23ccf6]::header::name::StandardHeader>::as_str((int)param_3[1]);
      }
      else {
        auVar12 = *(undefined1 (*) [16])(param_3 + 1);
      }
      uVar5 = auVar12._8_8_;
      lVar4 = param_2[2];
      if ((ulonglong)(*param_2 - lVar4) < uVar5) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_2,lVar4,uVar5,1,1);
        lVar4 = param_2[2];
      }
      else if (uVar5 == 0) {
        return;
      }
      bVar7 = 0x2d;
      uVar10 = 0;
      do {
        bVar1 = *(byte *)(auVar12._0_8_ + uVar10);
        if (lVar4 == *param_2) {
          (*(code *)PTR_grow_one_007993d0)();
        }
        bVar7 = (bVar7 == 0x2d && (byte)(bVar1 + 0x9f) < 0x1a) << 5 ^ bVar1;
        *(byte *)(param_2[1] + lVar4) = bVar7;
        lVar4 = lVar4 + 1;
        param_2[2] = lVar4;
        uVar10 = uVar10 + 1;
      } while (uVar5 != uVar10);
      return;
    }
    if (*param_3 == 0) {
      <http[56314f485c23ccf6]::header::name::StandardHeader>::as_str((int)param_3[1]);
      uVar5 = extraout_RDX;
    }
    else {
      uVar5 = param_3[2];
    }
  }
  else {
    uVar5 = *(ulonglong *)(lVar4 + 0x10);
  }
  lVar4 = param_2[2];
  if ((ulonglong)(*param_2 - lVar4) < uVar5) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(param_2,lVar4,uVar5,1,1);
    lVar4 = param_2[2];
  }
  else if (uVar5 == 0) goto LAB_006b16e7;
  (*(code *)PTR_memcpy_00799008)();
LAB_006b16e7:
  param_2[2] = lVar4 + uVar5;
  return;
}


