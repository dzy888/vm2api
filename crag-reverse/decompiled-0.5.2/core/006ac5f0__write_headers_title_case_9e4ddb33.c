// 006ac5f0 write_headers_title_case

/* hyper[c4782d5b5c5e3493]::proto::h1::role::write_headers_title_case */

void __rustcall
hyper[c4782d5b5c5e3493]::proto::h1::role::write_headers_title_case
          (longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  byte bVar13;
  ulonglong uVar14;
  char cVar15;
  undefined1 auVar16 [16];
  ulonglong local_68;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  uVar3 = *(ulonglong *)(param_1 + 0x28);
  uVar4 = *(ulonglong *)(param_1 + 0x40);
  lVar5 = *(longlong *)(param_1 + 0x38);
  cVar15 = (uVar3 == 0) * '\x02';
  uVar14 = 0;
  if (uVar3 != 0) goto LAB_006ac660;
LAB_006ac640:
  uVar14 = uVar14 + 1;
  if (uVar3 <= uVar14) {
    return;
  }
  plVar11 = (longlong *)(uVar14 * 0x68 + lVar2);
LAB_006ac6d0:
  cVar15 = '\x02';
  if (*plVar11 == 1) {
    local_68 = plVar11[1];
    cVar15 = '\x01';
  }
  plVar9 = plVar11 + 3;
  if (plVar11[8] == 0) goto LAB_006ac6bd;
LAB_006ac6f6:
  auVar16 = *(undefined1 (*) [16])(plVar11 + 9);
  do {
    uVar8 = auVar16._8_8_;
    lVar10 = param_2[2];
    uVar7 = *param_2 - lVar10;
    if (uVar7 < uVar8) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar10,uVar8,1,1);
      lVar10 = param_2[2];
LAB_006ac71f:
      bVar13 = 0x2d;
      uVar7 = 0;
      do {
        bVar1 = *(byte *)(auVar16._0_8_ + uVar7);
        if (lVar10 == *param_2) {
          (*(code *)PTR_grow_one_007993d0)();
        }
        bVar13 = (bVar13 == 0x2d && (byte)(bVar1 + 0x9f) < 0x1a) << 5 ^ bVar1;
        *(byte *)(param_2[1] + lVar10) = bVar13;
        lVar10 = lVar10 + 1;
        param_2[2] = lVar10;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
      uVar7 = *param_2 - lVar10;
    }
    else if (uVar8 != 0) goto LAB_006ac71f;
    if (uVar7 < 2) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar10,2,1,1);
      lVar10 = param_2[2];
    }
    *(undefined2 *)(param_2[1] + lVar10) = 0x203a;
    lVar10 = *param_2;
    lVar12 = param_2[2] + 2;
    param_2[2] = lVar12;
    uVar7 = plVar9[2];
    if ((ulonglong)(lVar10 - lVar12) < uVar7) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar12,uVar7,1,1);
LAB_006ac7f4:
      (*(code *)PTR_memcpy_00799008)();
      lVar10 = *param_2;
      lVar12 = param_2[2];
    }
    else if (uVar7 != 0) goto LAB_006ac7f4;
    lVar12 = lVar12 + uVar7;
    param_2[2] = lVar12;
    if ((ulonglong)(lVar10 - lVar12) < 2) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar12,2,1,1);
      lVar12 = param_2[2];
    }
    *(undefined2 *)(param_2[1] + lVar12) = 0xa0d;
    param_2[2] = param_2[2] + 2;
    if (cVar15 == '\x02') goto LAB_006ac640;
LAB_006ac660:
    if (uVar3 <= uVar14) {
      (*(code *)PTR_panic_bounds_check_00799520)();
LAB_006ac8f7:
      (*(code *)PTR_panic_bounds_check_00799520)();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    plVar11 = (longlong *)(uVar14 * 0x68 + lVar2);
    if (cVar15 == '\0') goto LAB_006ac6d0;
    if (uVar4 <= local_68) goto LAB_006ac8f7;
    lVar10 = lVar5 + local_68 * 0x48;
    cVar15 = '\x02';
    if (*(char *)(lVar5 + 0x10 + local_68 * 0x48) != '\0') {
      local_68 = *(ulonglong *)(lVar10 + 0x18);
      cVar15 = '\x01';
    }
    plVar9 = (longlong *)(lVar10 + 0x20);
    if (plVar11[8] != 0) goto LAB_006ac6f6;
LAB_006ac6bd:
    auVar16 = <http[56314f485c23ccf6]::header::name::StandardHeader>::as_str((int)plVar11[9]);
  } while( true );
}


