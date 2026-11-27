// 00358a80 <alloc[12e961f32105355]::string::String>

/* <chrono[1cd233408897ab2f]::format::OffsetFormat>::format::<alloc[12e961f32105355]::string::String>
    */

undefined8 __rustcall
<chrono[1cd233408897ab2f]::format::OffsetFormat>::format::<alloc[12e961f32105355]::string::String>
          (char *param_1,longlong *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  char cVar11;
  longlong lVar12;
  byte bVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  
  if ((param_3 == 0) && (*param_1 != '\0')) {
    lVar12 = param_2[2];
    if (*param_2 == lVar12) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar12,1,1,1);
    }
    *(undefined1 *)(param_2[1] + lVar12) = 0x5a;
    lVar12 = lVar12 + 1;
    goto LAB_00358aaf;
  }
  cVar11 = (char)(param_3 >> 0x1f) * -2 + '+';
  iVar6 = -param_3;
  if (-param_3 < 0) {
    iVar6 = param_3;
  }
  bVar13 = param_1[3];
  uVar9 = (uint)bVar13;
  bVar3 = true;
  bVar5 = false;
  uVar16 = (uint)bVar13;
  if ((0x34U >> (uVar16 & 0x1f) & 1) == 0) {
    if ((10U >> (uVar16 & 0x1f) & 1) != 0) {
      iVar10 = iVar6 + (int)((ulonglong)((longlong)(iVar6 + 0x1e) * -0x77777777) >> 0x20) + 0x1e;
      uVar16 = ((iVar10 >> 5) - (iVar10 >> 0x1f)) % 0x3c;
      bVar3 = uVar16 == 0 && bVar13 == 3;
      iVar6 = iVar6 + 0x1e;
      goto LAB_00358bc7;
    }
  }
  else {
    uVar16 = (iVar6 / 0x3c) % 0x3c;
    uVar9 = iVar6 % 0x3c;
    if (uVar9 == 0 && bVar13 != 2) {
      bVar3 = uVar16 == 0 && bVar13 == 5;
      uVar16 = uVar16 & 0xff;
LAB_00358bc7:
      bVar5 = false;
      if (bVar3) {
        uVar16 = 0;
      }
      uVar9 = 0;
    }
    else {
      bVar5 = true;
      bVar3 = false;
    }
  }
  uVar14 = (uint)((ulonglong)((longlong)iVar6 * 0x91a2b3c5) >> 0x2b) - (iVar6 >> 0x1f);
  cVar1 = param_1[1];
  bVar13 = (byte)uVar14;
  if (bVar13 < 10) {
    cVar2 = param_1[2];
    lVar7 = *param_2;
    lVar15 = param_2[2];
    if (cVar2 == '\x02') {
      if (lVar7 == lVar15) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_2,lVar15,1,1,1);
        lVar7 = *param_2;
      }
      *(undefined1 *)(param_2[1] + lVar15) = 0x20;
      lVar15 = lVar15 + 1;
      param_2[2] = lVar15;
    }
    if (lVar7 == lVar15) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar7,1,1,1);
      lVar7 = *param_2;
    }
    lVar8 = param_2[1];
    *(char *)(lVar8 + lVar15) = cVar11;
    lVar12 = lVar15 + 1;
    param_2[2] = lVar12;
    if (cVar2 == '\x01') {
      if (lVar7 == lVar12) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_2,lVar7,1,1,1);
        lVar7 = *param_2;
        lVar8 = param_2[1];
      }
      *(undefined1 *)(lVar8 + 1 + lVar15) = 0x30;
      lVar12 = lVar15 + 2;
      param_2[2] = lVar12;
    }
    if (lVar7 == lVar12) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar7,1,1,1);
      lVar8 = param_2[1];
    }
    *(byte *)(lVar8 + lVar12) = bVar13 | 0x30;
    lVar12 = lVar12 + 1;
    param_2[2] = lVar12;
  }
  else {
    lVar12 = param_2[2];
    if (*param_2 == lVar12) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar12,1,1,1);
    }
    lVar7 = param_2[1];
    *(char *)(lVar7 + lVar12) = cVar11;
    lVar15 = lVar12 + 1;
    param_2[2] = lVar15;
    if (99 < bVar13) {
      return 1;
    }
    bVar4 = (byte)((uVar14 & 0xff) / 10);
    lVar8 = *param_2;
    if (lVar8 == lVar15) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar15,1,1,1);
      lVar8 = *param_2;
      lVar7 = param_2[1];
    }
    *(byte *)(lVar7 + 1 + lVar12) = bVar4 | 0x30;
    param_2[2] = lVar12 + 2;
    if (lVar8 == lVar12 + 2) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar8,1,1,1);
      lVar7 = param_2[1];
    }
    *(byte *)(lVar7 + 2 + lVar12) = bVar13 + bVar4 * -10 | 0x30;
    lVar12 = lVar12 + 3;
    param_2[2] = lVar12;
  }
  if (!bVar3) {
    if (cVar1 == '\x01') {
      if (*param_2 == lVar12) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_2,lVar12,1,1,1);
      }
      *(undefined1 *)(param_2[1] + lVar12) = 0x3a;
      lVar12 = lVar12 + 1;
      param_2[2] = lVar12;
    }
    if (99 < (byte)uVar16) {
      return 1;
    }
    bVar13 = (byte)((uVar16 & 0xff) / 10);
    lVar15 = *param_2;
    if (lVar15 == lVar12) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar12,1,1,1);
      lVar15 = *param_2;
    }
    lVar7 = param_2[1];
    *(byte *)(lVar7 + lVar12) = bVar13 | 0x30;
    param_2[2] = lVar12 + 1;
    if (lVar15 == lVar12 + 1) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar15,1,1,1);
      lVar7 = param_2[1];
    }
    *(byte *)(lVar7 + 1 + lVar12) = (byte)uVar16 + bVar13 * -10 | 0x30;
    lVar12 = lVar12 + 2;
    param_2[2] = lVar12;
  }
  if (!bVar5) {
    return 0;
  }
  if (cVar1 == '\x01') {
    if (*param_2 == lVar12) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar12,1,1,1);
    }
    *(undefined1 *)(param_2[1] + lVar12) = 0x3a;
    lVar12 = lVar12 + 1;
    param_2[2] = lVar12;
  }
  if (99 < (byte)uVar9) {
    return 1;
  }
  bVar13 = (byte)((uVar9 & 0xff) / 10);
  lVar15 = *param_2;
  if (lVar15 == lVar12) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(param_2,lVar12,1,1,1);
    lVar15 = *param_2;
  }
  lVar7 = param_2[1];
  *(byte *)(lVar7 + lVar12) = bVar13 | 0x30;
  param_2[2] = lVar12 + 1;
  if (lVar15 == lVar12 + 1) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(param_2,lVar15,1,1,1);
    lVar7 = param_2[1];
  }
  *(byte *)(lVar7 + 1 + lVar12) = (byte)uVar9 + bVar13 * -10 | 0x30;
  lVar12 = lVar12 + 2;
LAB_00358aaf:
  param_2[2] = lVar12;
  return 0;
}


