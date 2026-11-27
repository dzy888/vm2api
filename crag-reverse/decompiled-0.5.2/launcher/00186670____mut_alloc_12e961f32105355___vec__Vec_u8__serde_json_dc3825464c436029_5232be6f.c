// 00186670 <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>

/* serde_json[dc3825464c436029]::ser::format_escaped_str::<&mut
   alloc[12e961f32105355]::vec::Vec<u8>, serde_json[dc3825464c436029]::ser::CompactFormatter> */

undefined8 __rustcall
serde_json[dc3825464c436029]::ser::format_escaped_str::
<&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
          (longlong *param_1,undefined8 param_2,byte *param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined *puVar6;
  ulonglong uVar7;
  undefined *puVar8;
  longlong lVar9;
  longlong lVar10;
  byte *pbVar11;
  
  param_1 = (longlong *)*param_1;
  lVar10 = param_1[2];
  if (*param_1 == lVar10) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(param_1,lVar10,1,1,1);
    lVar10 = param_1[2];
  }
  *(undefined1 *)(param_1[1] + lVar10) = 0x22;
  lVar10 = param_1[2] + 1;
  param_1[2] = lVar10;
  puVar6 = PTR_ESCAPE_0021a128;
  puVar8 = PTR_HEX_DIGITS_0021a130;
  do {
    lVar9 = 1;
    pbVar11 = param_3;
    do {
      if (param_4 + lVar9 == 1) {
        if (param_4 != 0) {
          if ((ulonglong)(*param_1 - lVar10) < param_4) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(param_1,lVar10,param_4,1,1);
          }
          (*(code *)PTR_memcpy_00219c60)(param_1,param_4,param_3);
          lVar10 = param_4 + param_1[2];
          param_1[2] = lVar10;
        }
        if (*param_1 == lVar10) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(param_1,lVar10,1,1,1);
          lVar10 = param_1[2];
        }
        *(undefined1 *)(param_1[1] + lVar10) = 0x22;
        param_1[2] = param_1[2] + 1;
        return 0;
      }
      bVar1 = *pbVar11;
      cVar2 = puVar6[bVar1];
      pbVar11 = pbVar11 + 1;
      lVar9 = lVar9 + -1;
    } while (cVar2 == '\0');
    if (lVar9 != 0) {
      uVar7 = -lVar9;
      if ((ulonglong)(*param_1 - lVar10) <= uVar7 && -(*param_1 - lVar10) != lVar9) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_1,lVar10,uVar7,1,1);
      }
      (*(code *)PTR_memcpy_00219c60)(param_1,uVar7,param_3);
      lVar10 = param_1[2] - lVar9;
      param_1[2] = lVar10;
      puVar8 = PTR_HEX_DIGITS_0021a130;
    }
    if (cVar2 == 'u') {
      uVar3 = puVar8[bVar1 >> 4];
      uVar4 = puVar8[bVar1 & 0xf];
      if ((ulonglong)(*param_1 - lVar10) < 6) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_1,lVar10,6,1,1);
        lVar10 = param_1[2];
        puVar8 = PTR_HEX_DIGITS_0021a130;
      }
      lVar5 = param_1[1];
      *(undefined4 *)(lVar5 + lVar10) = 0x3030755c;
      *(undefined1 *)(lVar5 + 4 + lVar10) = uVar3;
      *(undefined1 *)(lVar5 + 5 + lVar10) = uVar4;
      lVar10 = 6;
    }
    else {
      if ((ulonglong)(*param_1 - lVar10) < 2) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_1,lVar10,2,1,1);
        lVar10 = param_1[2];
      }
      lVar5 = param_1[1];
      *(undefined1 *)(lVar5 + lVar10) = 0x5c;
      *(char *)(lVar5 + 1 + lVar10) = cVar2;
      lVar10 = 2;
    }
    param_4 = (param_4 + lVar9) - 1;
    lVar10 = lVar10 + param_1[2];
    param_1[2] = lVar10;
    param_3 = pbVar11;
  } while( true );
}


